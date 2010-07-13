/*
 * Copyright (C) 2010 Corentin Chary <corentin.chary@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include "config.h"

#include <QtGui/QDesktopServices>
#include <QtGui/QMessageBox>
#include <QtCore/QTimer>

#ifdef HAVE_QT_BEARER
#include <QNetworkConfigurationManager>
#include <QNetworkConfiguration>
#include <QNetworkSession>
#endif

#include <QDebug>

#include "stations.h"
#include "station.h"
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
{
  setupUi(this);

#ifdef Q_WS_MAEMO_5
  menu_File->removeAction(quitAction);
  menu_About->removeAction(aboutQtAction);
  setAttribute(Qt::WA_Maemo5StackedWindow);
  setAttribute(Qt::WA_Maemo5AutoOrientation, true);
#endif

  createStatusBar();
  createStations();
  createActions();
  setupListWidget();

  lineEdit->setFocus(Qt::OtherFocusReason);

  QTimer::singleShot(0, this, SLOT(delayedInit()));
}

void
MainWindow::createStations()
{
  stations = new Stations(this);

  comboBox->addItems(Station::regions());

  connect(stations, SIGNAL(done()), this, SLOT(done()));
  connect(stations, SIGNAL(started()), this, SLOT(started()));
  connect(stations, SIGNAL(progress(qint64, qint64)), this, SLOT(progress(qint64, qint64)));
}

void
MainWindow::createActions()
{
  quitAction->setIcon(QIcon::fromTheme("dialog-close"));
  aboutAction->setIcon(QIcon::fromTheme("dialog-information"));
  aboutQtAction->setIcon(QPixmap(":/trolltech/qmessagebox/images/qtlogo-64.png"));
  pushButton->setIcon(QIcon::fromTheme("view-refresh"));

  connect(aboutAction, SIGNAL(triggered()), this, SLOT(about()));
  connect(aboutQtAction, SIGNAL(triggered()), this, SLOT(aboutQt()));
  connect(velovAction, SIGNAL(triggered()), this, SLOT(velov()));
}

void
MainWindow::createStatusBar()
{
  updateBar = new QProgressBar();
  updateBar->hide();
  statusBar()->addPermanentWidget(updateBar, 0);
#ifdef Q_WS_MAEMO_5
  statusBar()->hide();
#endif
}

void
MainWindow::setupListWidget()
{
  connect(stations, SIGNAL(stationUpdated(Station *, bool)),
	  listWidget, SLOT(stationUpdated(Station *, bool)));
  connect(stations, SIGNAL(stationsUpdated(QList < Station *>, bool)),
	  listWidget, SLOT(stationsUpdated(QList < Station *>, bool)));
  connect(stations, SIGNAL(statusUpdated(Station *)),
	  listWidget, SLOT(statusUpdated(Station *)));

  connect(lineEdit, SIGNAL(textEdited(const QString &)),
	  listWidget, SLOT(filter(const QString &)));
  connect(pushButton, SIGNAL(clicked()), listWidget, SLOT(update()));
  connect(comboBox, SIGNAL(activated(const QString &)), listWidget, SLOT(setRegion(const QString &)));
}

void
MainWindow::delayedInit()
{
#ifdef HAVE_QT_BEARER
  QNetworkConfigurationManager mgr;
  QNetworkConfiguration ap = mgr.defaultConfiguration();
  QNetworkSession* session = new QNetworkSession(ap);

  session->open();
  if (!session->waitForOpened(-1)) {
    QMessageBox::critical(this, tr("Network Error"), session->errorString());
    QApplication::instance()->quit();
  }
#endif

  fetchStations();
  //stations->fetchFromFile(":/res/stations.json");
  //stations->fetchAll();
}

#ifdef HAVE_QT_LOCATION
void
MainWindow::fetchStations()
{
  localisation = QGeoPositionInfoSource::createDefaultSource(this);
  statusMsg(tr("Waiting for GPS fix..."));

  // For bookmarks
  QTimer::singleShot(100, stations, SLOT(fetchBuiltIn()));

  if (!localisation)
    return ;

  connect(localisation, SIGNAL(positionUpdated(QGeoPositionInfo)),
	  this, SLOT(positionUpdated(QGeoPositionInfo)));
  connect(localisation, SIGNAL(requestTimeout()),
	  this, SLOT(requestTimeout()));
  localisation->setUpdateInterval(30000);
  localisation->startUpdates();
  localisation->requestUpdate(15000);
}

void
MainWindow::requestTimeout()
{

}

void
MainWindow::positionUpdated(QGeoPositionInfo info)
{
  QGeoCoordinate coord = info.coordinate();

  statusMsg(tr("GPS Position updated."));

  position = info;

  qWarning() << coord << coord.latitude() << coord.longitude();
  listWidget->clearNear();
  stations->fetchPos(QPointF(coord.latitude(), coord.longitude()), 5);
}

#else
void
MainWindow::fetchStations()
{
  QTimer::singleShot(100, stations, SLOT(fetchBuiltIn()));
  QTimer::singleShot(200, listWidget, SLOT(update()));
}
#endif

MainWindow::~MainWindow()
{
}

void
MainWindow::about()
{
  QMessageBox::about(this, tr("About Quick Velo'V " QUICK_VELOV_VERSION),
		     tr("Version: " QUICK_VELOV_VERSION "\n"
			"Home: http://xf.iksaif.net/dev/quickvelov.html\n\n"
			"Copyright (C) 2010 Corentin Chary <corentin.chary@gmail.com>\n"
			"\n"
			"This program is free software; you can redistribute it and/or modify\n"
			"it under the terms of the GNU General Public License as published by\n"
			"the Free Software Foundation; either version 2 of the License, or\n"
			"(at your option) any later version.\n"
			"\n"
			"This program is distributed in the hope that it will be useful, but\n"
			"WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY\n"
			"or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License\n"
			"for more details.\n"
			"\n"
			"You should have received a copy of the GNU General Public License along\n"
			"with this program; if not, write to the Free Software Foundation, Inc.,\n"
			"59 Temple Place, Suite 330, Boston, MA 02111-1307 USA\n"));
}

void
MainWindow::aboutQt()
{
  QMessageBox::aboutQt(this);
}

void
MainWindow::velov()
{
  QDesktopServices::openUrl(QUrl("http://www.velov.grandlyon.com/"));
}

void
MainWindow::started()
{
  updateBar->setRange(0, 1);
  updateBar->setValue(0);
  updateBar->show();
}

void
MainWindow::done()
{
  updateBar->hide();
}

void
MainWindow::progress(qint64 done, qint64 total)
{
  if (total != updateBar->maximum()) {
    updateBar->reset();
    updateBar->setRange(0, total);
  }
#ifdef Q_WS_MAEMO_5
  setAttribute(Qt::WA_Maemo5ShowProgressIndicator, !(done == total));
#endif
  updateBar->setValue(done);
}

void
MainWindow::statusMsg(const QString & msg, int timeout)
{
#ifdef Q_WS_MAEMO_5
  if (!timeout)
    timeout = NoTimeout;
  QMaemo5InformationBox::information(this, msg, timeout);
#else
  statusBar()->showMessage(msg, timeout);
#endif
}

void
MainWindow::error(const QString & title, const QString & message)
{
  QMessageBox::warning(this, title, message);
}
