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

public:
    void setUpdate(bool set) { m_update = set;}
    void setUI(Ui::MainWindow *ui) {m_pUI = ui;}
private:
    bool m_update;
    Ui::MainWindow *m_pUI;

    void run() override
    {
        while (true)
        {
            std::cout << " Es el vecino el que elige al alcalde... \n";
            if (m_update)
            {
                m_pUI->customPlot->replot();
                m_pUI->customPlot2->replot();
                m_update = false;
            }

            msleep(100);
        }


    }

    //void setUpdate(bool set) { m_update = set;}
signals:
    void resultReady(const QString &s);
};

#endif // PLOT_THREAD_H
