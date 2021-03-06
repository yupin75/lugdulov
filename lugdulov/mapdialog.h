/*
 * Copyright (C) 2010-2011 Corentin Chary <corentin.chary@gmail.com>
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

#ifndef MAPDIALOG_H
# define MAPDIALOG_H

#include <QtGui/QDialog>

#include "ui_mapdialog.h"

class StationsPlugin;

class MapDialog : public QDialog, private Ui_MapDialog
{
  Q_OBJECT

 public:
  MapDialog(StationsPlugin *plugin, QWidget *parent = 0);
  ~MapDialog();

 public slots:
  void centerView(const QPointF & position, int zoom = -1);
#ifdef HAVE_QT_LOCATION
  void positionUpdated(const QGeoPositionInfo & info);
#endif

 private:
  StationsPlugin *plugin;
};

#endif
