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

#ifndef MOBILITY_H
# define MOBILITY_H

#include <qglobal.h>

#include "config.h"

#if QT_VERSION >= 0x040700 && !defined(HAVE_QT_BEARER)
#define HAVE_QT_BEARER
#endif

#ifdef HAVE_QT_LOCATION
/* Can't use QtLocation/ prefix because Symbian installation is crappy */
# if defined(Q_OS_SYMBIAN) || defined(Q_OS_WIN32)
#  include <QGeoPositionInfoSource>
#  include <QGeoCoordinate>
#  include <QGeoPositionInfo>
#  if !defined(USE_QMAPCONTROL) && !defined(LUGDULOV_LITE)
#   include <QGraphicsGeoMap>
#   include <QGeoMapPixmapObject>
#   include <QGeoServiceProvider>
#   include <QGeoBoundingBox>
#  endif
# else
#  include <QtLocation/QGeoPositionInfoSource>
#  include <QtLocation/QGeoPositionInfo>
#  include <QtLocation/QGeoCoordinate>
#  if !defined(USE_QMAPCONTROL) && !defined(LUGDULOV_LITE)
#   include <QtLocation/QGraphicsGeoMap>
#   include <QtLocation/QGeoMapPixmapObject>
#   include <QtLocation/QGeoServiceProvider>
#   include <QtLocation/QGeoBoundingBox>
#  endif
# endif
#endif

#if QT_VERSION >= 0x040700
# include <QtNetwork/QNetworkConfigurationManager>
# include <QtNetwork/QNetworkConfiguration>
# include <QtNetwork/QNetworkSession>
#elif defined(HAVE_QT_BEARER)
# if defined(Q_OS_SYMBIAN) || defined(Q_OS_WIN32)
#  include <QNetworkConfigurationManager>
#  include <QNetworkConfiguration>
#  include <QNetworkSession>
# else
#  include <QtBearer/QNetworkConfigurationManager>
#  include <QtBearer/QNetworkConfiguration>
#  include <QtBearer/QNetworkSession>
# endif
#endif

#if defined(HAVE_QT_LOCATION) || (QT_VERSION < 0x040700 && defined(HAVE_QT_BEARER))
using namespace QtMobility;
#endif

#endif