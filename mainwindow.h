#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tools/subfunction.h"
#include <Python.h>

using namespace fun;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    // Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void init();
    bool initPython();
    void handlePythonException();

private:
    Ui::MainWindow *ui;
    QString homePath;

    QString pythonInitresult;

// public Q_SLOTS:
    void unzipPythonResource();
};

#endif // MAINWINDOW_H
