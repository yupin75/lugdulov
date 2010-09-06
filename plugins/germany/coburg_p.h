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

#ifndef STATIONS_SIMPLE_PRIVATE_COBURG_H
#define STATIONS_SIMPLE_PRIVATE_COBURG_H

#include "stationspluginsimple_p.h"


static const struct {
        int number;
        int arrondissementNumber;
        const char *name;
        const char *address;
        double x;
        double y;
} stations[] = {
	{ 11339, 0, "Bahnhof", "", 50.263097, 10.95737 },
	{ 11341, 0, "Markt", "", 50.2585379, 10.9644474 },
	{ 11368, 0, "Herrngasse 4 / Tourismusinformation", "", 50.2584723, 10.9658047 },
	{ 11369, 0, "Theaterplatz", "", 50.2597702, 10.966452 },
	{0, 0, NULL, NULL, 0., 0.}
};


struct StationsPluginSimplePrivateCoburg : StationsPluginSimplePrivate {
  StationsPluginSimplePrivateCoburg() {
    rect = QRectF(QPointF(49.258300, 9.965100), QPointF(51.258300, 11.965100));
    center = QPointF(50.258300, 10.965100);
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
      station->setRegion(QString("Coburg %1").arg(stations[i].arrondissementNumber));
      list.append(station);
    }

    return list;
  }

  QStringList regions() {
    QStringList ret;


    return ret;
  }
};

#endif /* STATIONS_SIMPLE_PRIVATE_COBURG_H */
