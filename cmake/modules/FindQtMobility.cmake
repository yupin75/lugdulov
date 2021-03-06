INCLUDE(FindQt4)

set(MOBILITY_CONFIG_MKSPECS_FILE "")
IF(EXISTS "${QT_MKSPECS_DIR}/features/mobilityconfig.prf")
    set(MOBILITY_CONFIG_MKSPECS_FILE "${QT_MKSPECS_DIR}/features/mobilityconfig.prf")
ELSEIF(EXISTS "${QT_MKSPECS_DIR}/features/mobility.prf")
    set(MOBILITY_CONFIG_MKSPECS_FILE "${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules/mobilityconfig.prf")
ENDIF()

macro(export_component component)
    IF(NOT ${MOBILITY_CONFIG_MKSPECS_FILE} STREQUAL "")
        FILE(READ ${MOBILITY_CONFIG_MKSPECS_FILE} MOBILITY_FILE_CONTENTS)
        STRING(TOLOWER ${component} _COMPONENT)
        IF(${MOBILITY_FILE_CONTENTS} MATCHES "MOBILITY_CONFIG=.*${_COMPONENT}.*")
            STRING(TOUPPER ${component} _COMPONENT)
            SET(QT_MOBILITY_${_COMPONENT}_FOUND 1)
            SET(QT_MOBILITY_MODULE Qt${component})

            SET(QT_MOBILITY_${_COMPONENT}_INCLUDE_DIR ${QT_MOBILITY_PARENT_INCLUDE_DIR}/${QT_MOBILITY_MODULE})

            FIND_LIBRARY(QT_MOBILITY_${_COMPONENT}_LIBRARY_RELEASE
                 NAMES ${QT_MOBILITY_MODULE}${QT_LIBINFIX} ${QT_MOBILITY_MODULE}${QT_LIBINFIX}1
                 PATHS ${QT_MOBILITY_LIBRARY_DIR} NO_DEFAULT_PATH
            )
            FIND_LIBRARY(QT_MOBILITY_${_COMPONENT}_LIBRARY_DEBUG
                 NAMES ${QT_MOBILITY_MODULE}${QT_LIBINFIX}_debug ${QT_MOBILITY_MODULE}${QT_LIBINFIX}d ${QT_MOBILITY_MODULE}${QT_LIBINFIX}d1
                 PATHS ${QT_MOBILITY_LIBRARY_DIR} NO_DEFAULT_PATH
            )

            # if the release- as well as the debug-version of the library have been found:
            IF (QT_MOBILITY_${_COMPONENT}_LIBRARY_DEBUG AND QT_MOBILITY_${_COMPONENT}_LIBRARY_RELEASE)
              # if the generator supports configuration types then set
              # optimized and debug libraries, or if the CMAKE_BUILD_TYPE has a value
              IF (CMAKE_CONFIGURATION_TYPES OR CMAKE_BUILD_TYPE)
                SET(QT_MOBILITY_${_COMPONENT}_LIBRARY       optimized ${QT_MOBILITY_${_COMPONENT}_LIBRARY_RELEASE} debug ${QT_MOBILITY_${_COMPONENT}_LIBRARY_DEBUG})
              ELSE(CMAKE_CONFIGURATION_TYPES OR CMAKE_BUILD_TYPE)
                # if there are no configuration types and CMAKE_BUILD_TYPE has no value
                # then just use the release libraries
                SET(QT_MOBILITY_${_COMPONENT}_LIBRARY       ${QT_MOBILITY_${_COMPONENT}_LIBRARY_RELEASE} )
              ENDIF(CMAKE_CONFIGURATION_TYPES OR CMAKE_BUILD_TYPE)
              SET(QT_MOBILITY_${_COMPONENT}_LIBRARIES       optimized ${QT_MOBILITY_${_COMPONENT}_LIBRARY_RELEASE} debug ${QT_MOBILITY_${_COMPONENT}_LIBRARY_DEBUG})
            ENDIF (QT_MOBILITY_${_COMPONENT}_LIBRARY_DEBUG AND QT_MOBILITY_${_COMPONENT}_LIBRARY_RELEASE)

            # if only the release version was found, set the debug variable also to the release version
            IF (QT_MOBILITY_${_COMPONENT}_LIBRARY_RELEASE AND NOT QT_MOBILITY_${_COMPONENT}_LIBRARY_DEBUG)
                SET(QT_MOBILITY_${_COMPONENT}_LIBRARY_DEBUG ${QT_MOBILITY_${_COMPONENT}_LIBRARY_RELEASE})
                SET(QT_MOBILITY_${_COMPONENT}_LIBRARY       ${QT_MOBILITY_${_COMPONENT}_LIBRARY_RELEASE})
                SET(QT_MOBILITY_${_COMPONENT}_LIBRARIES     ${QT_MOBILITY_${_COMPONENT}_LIBRARY_RELEASE})
            ENDIF (QT_MOBILITY_${_COMPONENT}_LIBRARY_RELEASE AND NOT QT_MOBILITY_${_COMPONENT}_LIBRARY_DEBUG)

            # if only the debug version was found, set the release variable also to the debug version
            IF (QT_MOBILITY_${_COMPONENT}_LIBRARY_DEBUG AND NOT QT_MOBILITY_${_COMPONENT}_LIBRARY_RELEASE)
                SET(QT_MOBILITY_${_COMPONENT}_LIBRARY_RELEASE ${QT_MOBILITY_${_COMPONENT}_LIBRARY_DEBUG})
                SET(QT_MOBILITY_${_COMPONENT}_LIBRARY         ${QT_MOBILITY_${_COMPONENT}_LIBRARY_DEBUG})
                SET(QT_MOBILITY_${_COMPONENT}_LIBRARIES       ${QT_MOBILITY_${_COMPONENT}_LIBRARY_DEBUG})
            ENDIF (QT_MOBILITY_${_COMPONENT}_LIBRARY_DEBUG AND NOT QT_MOBILITY_${_COMPONENT}_LIBRARY_RELEASE)
        ENDIF()
    ENDIF()
endmacro()

set(VERSION_INFO "")
set(FEATURE_FILE_PREFIX "${QT_MKSPECS_DIR}/features/mobility")
set(CONFIG_FILE_PREFIX "${QT_MKSPECS_DIR}/features/mobilityconfig")

if(DEFINED MOBILITY_VERSION)
    if(MOBILITY_VERSION STREQUAL "1.1" AND EXISTS "${FEATURE_FILE_PREFIX}11.prf")
        set(MOBILITY_PRF_FILE "${FEATURE_FILE_PREFIX}11.prf")
	set(MOBILITY_CONFIG_MKSPECS_FILE "${CONFIG_FILE_PREFIX}11.prf")
        set(VERSION_INFO "1.1")
    elseif(MOBILITY_VERSION STREQUAL "1.2" AND EXISTS "${FEATURE_FILE_PREFIX}12.prf")
        set(MOBILITY_PRF_FILE "${FEATURE_FILE_PREFIX}12.prf")
	set(MOBILITY_CONFIG_MKSPECS_FILE "${CONFIG_FILE_PREFIX}12.prf")
        set(VERSION_INFO "1.2")
    elseif(MOBILITY_VERSION STREQUAL "default" AND EXISTS "${FEATURE_FILE_PREFIX}.prf")
        set(MOBILITY_PRF_FILE "${FEATURE_FILE_PREFIX}.prf")
        set(VERSION_INFO "system's default")
    else()
        message(STATUS "Couldn't find QtMobility version: ${MOBILITY_VERSION}")
    endif()
endif()

if(NOT DEFINED MOBILITY_PRF_FILE)
    if(EXISTS "${FEATURE_FILE_PREFIX}.prf")
        set(MOBILITY_PRF_FILE "${FEATURE_FILE_PREFIX}.prf")
        set(VERSION_INFO "system's default")
    elseif(EXISTS "${FEATURE_FILE_PREFIX}12.prf")
        set(MOBILITY_PRF_FILE "${FEATURE_FILE_PREFIX}12.prf")
        set(VERSION_INFO "1.2")
    elseif(EXISTS "${FEATURE_FILE_PREFIX}11.prf")
        set(MOBILITY_PRF_FILE "${FEATURE_FILE_PREFIX}11.prf")
        set(VERSION_INFO "1.1")
    else()
        message(STATUS "Couldn't find any version of QtMobility.")
    endif()
endif()

IF(VERSION_INFO)
	message(STATUS "Using QtMobility version: ${VERSION_INFO}")
ENDIF()

IF(DEFINED MOBILITY_PRF_FILE)
    FILE(READ ${MOBILITY_PRF_FILE} MOBILITY_FILE_CONTENTS)

    STRING(REGEX MATCH "MOBILITY_PREFIX=([^\n]+)" QT_MOBILITY_PREFIX "${MOBILITY_FILE_CONTENTS}")
    SET(QT_MOBILITY_PREFIX ${CMAKE_MATCH_1})

    STRING(REGEX MATCH "MOBILITY_INCLUDE=([^\n]+)" QT_MOBILITY_INCLUDE_DIR "${MOBILITY_FILE_CONTENTS}")
    SET(QT_MOBILITY_INCLUDE_DIR ${CMAKE_MATCH_1})

    STRING(REGEX MATCH "MOBILITY_LIB=([^\n]+)" "\\1" QT_MOBILITY_LIBRARY "${MOBILITY_FILE_CONTENTS}")
    SET(QT_MOBILITY_LIBRARY_DIR ${CMAKE_MATCH_1})

    # Maemo prf are not easilly parsable
    CHECK_SYMBOL_EXISTS(Q_WS_MAEMO_5 "QtCore/qglobal.h" Q_WS_MAEMO_5)

    if (Q_WS_MAEMO_5)
      SET(QT_MOBILITY_INCLUDE_DIR "${QT_MOBILITY_PREFIX}/include")
      SET(QT_MOBILITY_LIBRARY_DIR "${QT_MOBILITY_PREFIX}/lib")
    ENDIF()

    #VERSION
    IF(NOT ${MOBILITY_CONFIG_MKSPECS_FILE} STREQUAL "")
        FILE(READ ${MOBILITY_CONFIG_MKSPECS_FILE} MOBILITY_CONFIG_FILE_CONTENTS)
        STRING(REGEX MATCH "MOBILITY_VERSION = ([^\n]+)" QT_MOBILITY_VERSION "${MOBILITY_CONFIG_FILE_CONTENTS}")
        SET(QT_MOBILITY_VERSION ${CMAKE_MATCH_1})

        STRING(REGEX MATCH "MOBILITY_MAJOR_VERSION = ([^\n]+)" QT_MOBILITY_MAJOR_VERSION "${MOBILITY_CONFIG_FILE_CONTENTS}")
        SET(QT_MOBILITY_MAJOR_VERSION ${CMAKE_MATCH_1})

        STRING(REGEX MATCH "MOBILITY_MINOR_VERSION = ([^\n]+)" QT_MOBILITY_MINOR_VERSION "${MOBILITY_CONFIG_FILE_CONTENTS}")
        SET(QT_MOBILITY_MINOR_VERSION ${CMAKE_MATCH_1})

        STRING(REGEX MATCH "MOBILITY_PATCH_VERSION = ([^\n]+)" QT_MOBILITY_PATCH_VERSION "${MOBILITY_CONFIG_FILE_CONTENTS}")
        SET(QT_MOBILITY_PATCH_VERSION ${CMAKE_MATCH_1})

        message(STATUS "QtMobility version: ${QT_MOBILITY_VERSION}")
    ELSE()
        SET(QT_MOBILITY_VERSION 1.0.0)
        SET(QT_MOBILITY_MAJOR_VERSION 1)
        SET(QT_MOBILITY_MINOR_VERSION 0)
        SET(QT_MOBILITY_PATCH_VERSION 0)
    ENDIF()

    SET(QT_MOBILITY_PARENT_INCLUDE_DIR ${QT_MOBILITY_INCLUDE_DIR})
    SET(QT_MOBILITY_INCLUDE_DIR ${QT_MOBILITY_INCLUDE_DIR}/QtMobility)

    IF(QtMobility_FIND_VERSION_EXACT)
        IF(QT_MOBILITY_VERSION VERSION_EQUAL QtMobility_FIND_VERSION)
            SET(QT_MOBILITY_FOUND TRUE)
        ELSE()
            SET(QT_MOBILITY_FOUND FALSE)
            IF(QT_MOBILITY_VERSION VERSION_LESS QtMobility_FIND_VERSION)
                SET(QT_MOBILITY_TOO_OLD TRUE)
            ELSE()
                SET(QT_MOBILITY_TOO_NEW TRUE)
            ENDIF()
        ENDIF()
    ELSE()
        IF(QT_MOBILITY_VERSION VERSION_LESS QtMobility_FIND_VERSION)
            SET(QT_MOBILITY_FOUND FALSE)
            SET(QT_MOBILITY_TOO_OLD TRUE)
        ELSE()
            SET(QT_MOBILITY_FOUND TRUE)
        ENDIF()
    ENDIF()
ELSE()
    SET(QT_MOBILITY_FOUND NOTFOUND)
    SET(QT_MOBILITY_PREFIX NOTFOUND)
    SET(QT_MOBILITY_INCLUDE NOTFOUND)
    SET(QT_MOBILITY_LIB NOTFOUND)
ENDIF()

IF(NOT QT_MOBILITY_FOUND)
    if(QT_MOBILITY_TOO_OLD)
        MESSAGE(FATAL_ERROR "The installed QtMobility version ${QT_MOBILITY_VERSION} it too old, version ${QtMobility_FIND_VERSION} is required.")
    ELSEIF(QT_MOBILITY_TOO_NEW)
        MESSAGE(FATAL_ERROR "The installed QtMobility version ${QT_MOBILITY_VERSION} it too new, version ${QtMobility_FIND_VERSION} is required.")
    ELSE()
        MESSAGE(STATUS "QtMobility not found.")
    ENDIF()
ELSE()
    export_component(Bearer)
    export_component(Feedback)
    export_component(Gallery)
    export_component(PublishSubscribe)
    export_component(Location)
    export_component(Organizer)
    export_component(ServiceFramework)
    export_component(SystemInfo)
    export_component(Contacts)
    export_component(Connectivity)
    export_component(Messaging)
    export_component(Versit)
    export_component(Sensors)
    # VersitOrganizer
    if(QT_MOBILITY_VERSIT_FOUND AND QT_MOBILITY_ORGANIZER_FOUND)
        SET(QT_MOBILITY_VERSITORGANIZER_FOUND 1)
        SET(QT_MOBILITY_VERSITORGANIZER_INCLUDE_DIR ${QT_MOBILITY_PARENT_INCLUDE_DIR}/QtVersitOrganizer)
        SET(QT_MOBILITY_VERSITORGANIZER_LIBRARY QtVersitOrganizer)
    endif()

    # MultimediaKit - it's just 'multimedia' in the .prf file.
    IF(NOT ${MOBILITY_CONFIG_MKSPECS_FILE} STREQUAL "")
        FILE(READ ${MOBILITY_CONFIG_MKSPECS_FILE} MOBILITY_FILE_CONTENTS)
        IF(${MOBILITY_FILE_CONTENTS} MATCHES "MOBILITY_CONFIG=.*multimedia.*")
            SET(QT_MOBILITY_MULTIMEDIAKIT_FOUND 1)
            SET(QT_MOBILITY_MULTIMEDIAKIT_INCLUDE_DIR ${QT_MOBILITY_PARENT_INCLUDE_DIR}/QtMultimediaKit)
            SET(QT_MOBILITY_MULTIMEDIAKIT_LIBRARY QtMultimediaKit)
        ENDIF()
    ENDIF()

ENDIF()
