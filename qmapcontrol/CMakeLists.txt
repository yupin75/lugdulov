project(qmapcontrol)

set(qmapcontrol_SRCS
  circlepoint.cpp
  curve.cpp
  emptymapadapter.cpp
  fixedimageoverlay.cpp
  geometry.cpp
  geometrylayer.cpp
  googlemapadapter.cpp
  googlesatmapadapter.cpp
  gps_position.cpp
  imagemanager.cpp
  imagepoint.cpp
  layer.cpp
  layermanager.cpp
  linestring.cpp
  mapadapter.cpp
  mapcontrol.cpp
  maplayer.cpp
  mapnetwork.cpp
  openaerialmapadapter.cpp
  osmmapadapter.cpp
  point.cpp
  tilemapadapter.cpp
  wmsmapadapter.cpp
  yahoomapadapter.cpp)

set(qmapcontrol_MOC_HDRS
  curve.h
  emptymapadapter.h
  geometry.h
  geometrylayer.h
  googlemapadapter.h
  googlesatmapadapter.h
  imagemanager.h
  layer.h
  layermanager.h
  linestring.h
  mapadapter.h
  mapcontrol.h
  maplayer.h
  mapnetwork.h
  openaerialmapadapter.h
  osmmapadapter.h
  point.h
  tilemapadapter.h
  yahoomapadapter.h)

qt4_wrap_cpp(qmapcontrol_MOC_SOURCE ${qmapcontrol_MOC_HDRS})

add_convenience_library(qmapcontrol ${qmapcontrol_SRCS} ${qmapcontrol_MOC_SOURCE})