TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

QMAKE_CXXFLAGS += -std=c++0x -lpthread
LIBS += -lpthread

ROOT = $${PWD}/.

LIBS += -L"$${ROOT}/SFML/lib/debug/"

CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-window -lsfml-system
CONFIG(debug, debug|release): LIBS += -lsfml-audio-d -lsfml-graphics-d -lsfml-network-d -lsfml-window-d -lsfml-system-d

INCLUDEPATH += "$${ROOT}/SFML/include"
DEPENDPATH += "$${ROOT}/SFML/include"

HEADERS += \
    figures.h \
    general.h \
    setup.h \
    input.h \
    logic.h \
    graphics.h \
    buffergraphics.h
