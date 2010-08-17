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

#include <QtCore/QDebug>

#include "station.h"
#include "seville.h"
#include "seville_p.h"

StationsPluginSeville::StationsPluginSeville(QObject *parent)
  : StationsPluginCarto(parent)
{
  d = new StationsPluginCartoPrivateSeville();
}

StationsPluginSeville::~StationsPluginSeville()
{
  delete d;
}

QString
StationsPluginSeville::id() const
{
  return QLatin1String("seville");
}

QString
StationsPluginSeville::name() const
{
  return QString::fromUtf8("Seville");
}

QString
StationsPluginSeville::bikeName() const
{
  return QString::fromUtf8("Sevici");
}

QIcon
StationsPluginSeville::bikeIcon() const
{
  return QIcon(":/res/bike.png");
}

