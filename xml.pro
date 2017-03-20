QT += core\
      xml
QT -= gui

CONFIG += c++11

TARGET = xml
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    test.cpp \
    book_mgmt.cpp

DISTFILES +=

RESOURCES += \
    xml.qrc

HEADERS += \
    book_mgmt.h
