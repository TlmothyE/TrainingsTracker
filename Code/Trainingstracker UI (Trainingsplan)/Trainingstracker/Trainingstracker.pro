QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
QT += network

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ausdaueruebparameter.cpp \
    body.cpp \
    kraftuebparameter.cpp \
    liste_ausdauer.cpp \
    liste_kraft.cpp \
    main.cpp \
    mainwindow.cpp \
    menu.cpp \
    neuestraining.cpp \
    training.cpp \
    uebungsart.cpp \
    user.cpp
    UebungClass.cpp

HEADERS += \
    ausdaueruebparameter.h \
    body.h \
    kraftuebparameter.h \
    liste_ausdauer.h \
    liste_kraft.h \
    mainwindow.h \
    menu.h \
    neuestraining.h \
    training.h \
    uebungsart.h \
    user.h
    UebungHead.h
    Trainingsplan.h

FORMS += \
    ausdaueruebparameter.ui \
    body.ui \
    kraftuebparameter.ui \
    liste_ausdauer.ui \
    liste_kraft.ui \
    mainwindow.ui \
    menu.ui \
    neuestraining.ui \
    training.ui \
    uebungsart.ui
    Trainingsplan.h
    user.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
