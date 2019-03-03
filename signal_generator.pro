#-------------------------------------------------
#
# Project created by QtCreator 2019-01-04T00:14:45
#
#-------------------------------------------------

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = signal_generator
TEMPLATE = app

SOURCES += main.cpp\
           mainwindow.cpp \
           qcustomplot.cpp

HEADERS  += mainwindow.h \
            qcustomplot.h \
    plot_thread.h

FORMS    += mainwindow.ui
