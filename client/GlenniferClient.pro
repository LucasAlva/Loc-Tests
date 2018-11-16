#-------------------------------------------------
#
# Project created by QtCreator 2016-10-17T21:21:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GlenniferClient
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    connectiondialog.cpp \
    messages.pb.cc \
    consumerthread.cpp \
    speedometer.cpp \
    cameraone.cpp \
    doubleedit.cpp \
    intedit.cpp \
    drillslider.cpp \
    ledindicator.cpp

HEADERS  += mainwindow.h \
    connectiondialog.h \
    messages.pb.h \
    consumerthread.h \
    speedometer.h \
    cameraone.h \
    doubleedit.h \
    intedit.h \
    drillslider.h \
    ledindicator.h

FORMS    += mainwindow.ui \
    connectiondialog.ui \
    cameraone.ui

#CONFIG += conan_basic_setup
#include(conanbuildinfo.pri) -L/usr/local/lib/x86_64-linux-gnu -lQtCore -lrabbitmq
QT += widgets
INCLUDEPATH += $$PWD

unix: LIBS += -L/usr/local/lib/ -L/usr/local/lib/x86_64-linux-gnu -lprotobuf -lamqpcpp -lssl -lcrypto -lprotoc -lyaml-cpp -lrabbitmq
QMAKE_CXXFLAGS += -std=c++11
