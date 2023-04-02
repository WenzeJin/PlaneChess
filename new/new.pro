QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gamefinish.cpp \
    main.cpp \
    place.cpp \
    plane.cpp \
    players.cpp \
    playersvariables.cpp \
    settings.cpp \
    standard.cpp \
    widget.cpp

HEADERS += \
    gamefinish.h \
    place.h \
    plane.h \
    players.h \
    settings.h \
    standard.h \
    widget.h

FORMS += \
    gamefinish.ui \
    settings.ui \
    standard.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource.qrc
