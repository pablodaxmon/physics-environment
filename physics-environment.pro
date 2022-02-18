QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/core/actionssystem.cpp \
    src/core/actor.cpp \
    src/core/actordinamic.cpp \
    src/core/actorsystem.cpp \
    src/core/equation.cpp \
    src/core/equationmaker.cpp \
    src/core/equationrunner.cpp \
    src/core/operationmath.cpp \
    src/core/physics.cpp \
    src/core/sessionmanager.cpp \
    src/core/timerloop.cpp \
    src/gui/actionitem.cpp \
    src/gui/createactiondialog.cpp \
    src/gui/createactiondinamicdialog.cpp \
    src/gui/graphicsscene.cpp \
    src/gui/graphicsview.cpp \
    src/gui/initialdialog.cpp \
    src/gui/listactionsmodel.cpp \
    src/gui/maintoolbar.cpp \
    src/gui/splittermain.cpp \
    src/gui/mainwindow.cpp \
    src/gui/viewactions.cpp \
    src/gui/viewgraphicsresults.cpp \
    src/gui/viewobjectlist.cpp \
    src/gui/viewproperties.cpp \
    src/gui/viewsimulation.cpp \
    src/gui/pixmapbuilder.cpp \
    src/main.cpp \

HEADERS += \
    core/Session.h \
    src/core/Session.h \
    src/core/actionssystem.h \
    src/core/actor.h \
    src/core/actordinamic.h \
    src/core/actorsystem.h \
    src/core/equation.h \
    src/core/equationmaker.h \
    src/core/equationrunner.h \
    src/core/operationmath.h \
    src/core/physics.h \
    src/core/sessionmanager.h \
    src/core/timerloop.h \
    src/gui/actionitem.h \
    src/gui/createactiondialog.h \
    src/gui/createactiondinamicdialog.h \
    src/gui/graphicsscene.h \
    src/gui/graphicsview.h \
    src/gui/initialdialog.h \
    src/gui/listactionsmodel.h \
    src/gui/maintoolbar.h \
    src/gui/splittermain.h \
    src/gui/mainwindow.h \
    src/gui/viewactions.h \
    src/gui/viewgraphicsresults.h \
    src/gui/viewobjectlist.h \
    src/gui/viewproperties.h \
    src/gui/viewsimulation.h \
    src/gui/pixmapbuilder.h \

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

