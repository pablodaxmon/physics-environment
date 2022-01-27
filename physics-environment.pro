QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    core/actor.cpp \
    core/actorinterface.cpp \
    core/actorsystem.cpp \
    core/equation.cpp \
    core/equationmaker.cpp \
    core/equationrunner.cpp \
    core/operationmath.cpp \
    core/timerloop.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    core/actor.h \
    core/actorinterface.h \
    core/actorsystem.h \
    core/equation.h \
    core/equationmaker.h \
    core/equationrunner.h \
    core/operationmath.h \
    core/timerloop.h \
    mainwindow.h

TRANSLATIONS += \
    physics-environment_en_US.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
