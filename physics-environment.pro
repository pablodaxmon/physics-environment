QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    core/action.cpp \
    core/actor.cpp \
    core/actorsystem.cpp \
    core/equation.cpp \
    core/equationmaker.cpp \
    core/equationrunner.cpp \
    core/operationmath.cpp \
    core/physics.cpp \
    core/timerloop.cpp \
    gui/actionitem.cpp \
    gui/dialogtypeenvironment.cpp \
    gui/initialdialog.cpp \
    gui/maintoolbar.cpp \
    gui/splittermain.cpp \
    gui/mainwindow.cpp \
    gui/viewactions.cpp \
    gui/viewcontrolactions.cpp \
    gui/viewgraphicsresults.cpp \
    gui/viewobjectlist.cpp \
    gui/viewproperties.cpp \
    gui/viewsimulation.cpp \
    gui/pixmapbuilder.cpp \
    main.cpp \
    tests/testcore.cpp

HEADERS += \
    core/Session.h \
    core/action.h \
    core/actor.h \
    core/actorsystem.h \
    core/equation.h \
    core/equationmaker.h \
    core/equationrunner.h \
    core/operationmath.h \
    core/physics.h \
    core/timerloop.h \
    gui/actionitem.h \
    gui/dialogtypeenvironment.h \
    gui/initialdialog.h \
    gui/maintoolbar.h \
    gui/splittermain.h \
    gui/mainwindow.h \
    gui/viewactions.h \
    gui/viewcontrolactions.h \
    gui/viewgraphicsresults.h \
    gui/viewobjectlist.h \
    gui/viewproperties.h \
    gui/viewsimulation.h \
    gui/pixmapbuilder.h \
    tests/testcore.h

TRANSLATIONS += \
    physics-environment_en_US.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    style.qss

RESOURCES += \
    resources.qrc






win32: LIBS += -L$$PWD/./ -lbox2d

INCLUDEPATH += $$PWD/box2d/.
INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/./box2d.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/./libbox2d.a
