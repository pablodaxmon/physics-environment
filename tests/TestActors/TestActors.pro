QT += testlib
QT += gui
QT += core gui
CONFIG += qt warn_on depend_includepath testcase

TEMPLATE = app

SOURCES +=  tst_testactors.cpp

include(../../../common.pri)
