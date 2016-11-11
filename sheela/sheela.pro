QT += sql widgets
QT += gui
QT +=core
QT +=sql

#CONFIG +=c++11

TARGET = sheela
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    testmysql.cpp

HEADERS += \
    testmysql.h

