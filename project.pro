QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

INCLUDEPATH += /usr/include/qwt
LIBS += -L/usr/lib -lqwt-qt5

INCLUDEPATH += /usr/include/lua5.3
LIBS += -llua5.3

TARGET = my_qt_project
TEMPLATE = app

SOURCES += main.cpp \
           mainwindow.cpp \
           tomomanager.cpp

HEADERS +=  mainwindow.h \
            tomomanager.h

FORMS +=    mainwindow.ui \
            tomomanager.ui

