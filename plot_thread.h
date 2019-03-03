#ifndef PLOT_THREAD_H
#define PLOT_THREAD_H

#include <QThread>
#include <QString>
#include <iostream>
#include "ui_mainwindow.h"
#include "qcustomplot.h"

//Ver http://doc.qt.io/qt-5/qthread.html para tutorial sobre cómo crear hilos en QT.
class PlotThread : public QThread
{
    Q_OBJECT

private:
    bool m_update;

    void run() override
    {
        while (true)
        {
            std::cout << " Es el vecino el que elige al alcalde... \n";
            msleep(1000);
        }


    }

    void setUpdate(bool set) { m_update = set;}
signals:
    void resultReady(const QString &s);
};

#endif // PLOT_THREAD_H
