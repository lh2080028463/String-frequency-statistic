QT       += core gui
QT       += charts
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    interface.cpp \
    main.cpp \
    mainwindow.cpp \
    mymainwindow.cpp \
    mymainwindow2.cpp \
    tablewindow.cpp

HEADERS += \
    interface.h \
    mainwindow.h \
    mymainwindow.h \
    mymainwindow2.h \
    tablewindow.h

FORMS += \
    mainwindow.ui \
    mymainwindow.ui \
    mymainwindow2.ui \
    tablewindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
