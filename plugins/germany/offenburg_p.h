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

#ifndef STATIONS_SIMPLE_PRIVATE_OFFENBURG_H
#define STATIONS_SIMPLE_PRIVATE_OFFENBURG_H

#include "stationspluginsimple_p.h"


static const struct {
        int number;
        int arrondissementNumber;
        const char *name;
        const char *address;
        double x;
        double y;
} stations[] = {
	{ 52511, 0, "Bahnhof/Zob", "", 48.4754818658, 7.94521808624 },
	{ 52513, 0, "Bahnhof-Osteingang", "", 48.4751973618, 7.94727802277 },
	{ 52514, 0, "Gustav-Rée-Anlage", "", 48.4721246171, 7.94382333755 },
	{ 52515, 0, "Stadtbuckel", "", 48.4686391027, 7.94268608093 },
	{ 52516, 0, "City Parkhaus", "", 48.4717903026, 7.93987512589 },
	{ 52517, 0, "Landratsamt/Medienpark", "", 48.4652529452, 7.93933868408 },
	{ 52518, 0, "Bürgerbürobauen/Tech.Rathaus", "", 48.4705170422, 7.94772863388 },
	{ 52519, 0, "Kulturforum", "", 48.4679704256, 7.95485258102 },
	{ 52520, 0, "Schillerplatz", "", 48.4734903044, 7.95011043549 },
	{ 52521, 0, "Ortenau Klinikum", "", 48.4768759123, 7.9546380043 },
	{ 52522, 0, "Edeka/Sparkasse", "", 48.4807449018, 7.9575240612 },
	{ 52523, 0, "Messe", "", 48.4649318, 7.9324431 },
	{ 52525, 0, "Zentrum Nordweststadt", "", 48.47980613, 7.9417848587 },
	{0, 0, NULL, NULL, 0., 0.}
};


struct StationsPluginSimplePrivateOffenburg : StationsPluginSimplePrivate {
  StationsPluginSimplePrivateOffenburg() {
    rect = QRectF(QPointF(48.268000, 7.742390), QPointF(48.668000, 8.142390));
    center = QPointF(48.468000, 7.942390);
    statusUrl = "";
    infosUrl = "http://nextbike.net/maps/nextbike-official.xml";
  }

  QList < Station * > fetchAll(StationsPlugin *plugin) {
    QList < Station * > list;

    for (int i = 0; stations[i].name; ++i) {
      Station *station = new Station(plugin);

      station->setId(stations[i].number);
      station->setName(QString::fromUtf8(stations[i].name));
      station->setDescription(QString::fromUtf8(stations[i].address));
      station->setPos(QPointF(stations[i].x, stations[i].y));
      station->setRegion(QString("Offenburg %1").arg(stations[i].arrondissementNumber));
      list.append(station);
    }

    return list;
  }

  QStringList regions() {
    QStringList ret;


    return ret;
  }
};

#endif /* STATIONS_SIMPLE_PRIVATE_OFFENBURG_H */

