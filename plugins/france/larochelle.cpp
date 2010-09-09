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

#include <QtNetwork/QNetworkReply>
#include <QtGui/QDesktopServices>
#include <QtCore/QMap>
#include <QtCore/QVariant>
#include <QtCore/QFile>
#include <QtCore/QtPlugin>
#include <QtCore/QStringList>
#include <QtXml/QDomNode>

#include <QtCore/QDebug>

#include "tools.h"
#include "station.h"
#include "larochelle.h"
#include "larochelle_p.h"

StationsPluginLaRochelle::StationsPluginLaRochelle(QObject *parent)
  : StationsPluginSingle(parent)
{
  d = new StationsPluginSimplePrivateLarochelle();
}

StationsPluginLaRochelle::~StationsPluginLaRochelle()
{
  delete d;
}

QString
StationsPluginLaRochelle::id() const
{
  return QLatin1String("larochelle");
}

QString
StationsPluginLaRochelle::name() const
{
  return QString::fromUtf8("LaRochelle");
}

QString
StationsPluginLaRochelle::bikeName() const
{
  return QString::fromUtf8("CityBike");
}

QIcon
StationsPluginLaRochelle::bikeIcon() const
{
  return QIcon(":/res/bike.png");
}

void
StationsPluginLaRochelle::handleInfos(const QByteArray & data)
{
  QRegExp re("var markers = \\[(.*)\\]");
  QStringList captured;
  QString nodes;

  re.indexIn(data);
  captured = re.capturedTexts();
  if (!captured.size())
    return ;
  nodes = captured.at(1);
  nodes = nodes.mid(1, nodes.size() - 3);

  foreach (QString node, nodes.split("},{")) {
    QMap < QString , QString > values;
    double lat, lng;
    Station *station;
    int id;

    foreach (QString data, node.split(", ")) {
      QStringList t = data.split(": ");
      QString value = t.at(1);

      values[t.at(0)] = value.replace("'", "");
    }

    if (values.find("num") == values.end())
      continue ;
    id = values["num"].toInt();

    if (stations.find(id) == stations.end())
      stations[id] = new Station(this);
    station = stations[id];

    station->setId(id);
    if (station->name().isEmpty())
      station->setName(values["name"]);

    lng = values["lon"].toDouble();
    lat = values["lat"].toDouble();
    station->setPos(QPointF(lat, lng));
    station->setBikes(values["bikeCount"].split(" ").at(0).toInt());
    station->setFreeSlots(values["freeLockCount"].toInt());
    station->setTotalSlots(values["lockCount"].split(" ").at(0).toInt());
  }

  foreach (int id, stations.keys()) {
    if (d->rect.contains(stations[id]->pos()))
      continue ;
    delete stations[id];
    stations.remove(id);
  }

  emit stationsCreated(stations.values());
  emit stationsUpdated(stations.values());
}