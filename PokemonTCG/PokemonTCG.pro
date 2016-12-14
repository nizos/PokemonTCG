#-------------------------------------------------
#
# Project created by QtCreator 2016-12-12T19:42:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PokemonTCG
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ability.cpp \
    album.cpp \
    attack.cpp \
    card.cpp \
    energycard.cpp \
    library.cpp \
    pokemoncard.cpp \
    programmanager.cpp \
    resistance.cpp \
    trainercard.cpp \
    type.cpp \
    weakness.cpp \
    cardview.cpp

HEADERS  += mainwindow.h \
    ability.h \
    album.h \
    attack.h \
    card.h \
    energycard.h \
    library.h \
    pokemoncard.h \
    programmanager.h \
    resistance.h \
    trainercard.h \
    type.h \
    weakness.h \
    cardview.h

FORMS    += mainwindow.ui \
    cardview.ui

RESOURCES += \
    Resources/localfiles.qrc
