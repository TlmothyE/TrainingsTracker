cmake_minimum_required(VERSION 3.10)
project(Qt-Trainingstracker)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)


#if ($ENV{build_windows} MATCHES "true")
if(false)
    set(CMAKE_SYSTEM_NAME Windows)

    SET(CMAKE_C_COMPILER i686-w64-mingw32-gcc)
    SET(CMAKE_CXX_COMPILER i686-w64-mingw32-g++)
    SET(CMAKE_RC_COMPILER i686-w64-mingw32-windres)
    set(CMAKE_RANLIB i686-w64-mingw32-ranlib)
endif ()

find_package(Qt5Core)
find_package(Qt5Gui)
find_package(Qt5Network)
find_package(Qt5Widgets)


set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(SOURCES
        ausdaueruebparameter.cpp
        body.cpp
        kraftuebparameter.cpp
        liste_ausdauer.cpp
        liste_kraft.cpp
        main.cpp
        mainwindow.cpp
        menu.cpp
        neuestraining.cpp
        training.cpp
        uebungsart.cpp
        user.cpp
        UebungClass.cpp
        )

    add_executable(Qt-Trainingstracker ${SOURCES})

target_link_libraries(Qt-Trainingstracker Qt5::Core Qt5::Gui Qt5::Network Qt5::Widgets)