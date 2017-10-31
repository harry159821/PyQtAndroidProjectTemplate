#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "JlCompress.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    pythonInitresult(""),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    homePath = QStandardPaths::locate(QStandardPaths::HomeLocation, "",
                                      QStandardPaths::LocateDirectory);
    init();
    int ret = initPython();
    if (!ret)
    {
        qDebug() << "init Python failed";
        qApp->exec();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{
    qDebug("init start");
    unzipPythonResource();
}

bool MainWindow::initPython()
{
    pythonInitresult.clear();

    // https://github.com/harry159821/android-python27/blob/master/python-build-with-qt/PyDroid/main.cpp

    QString LD_LIBRARY_PATH = homePath + "lib" + ":/data/data/org.qtproject.hellopython/lib";
    QString PYTHONPATH = homePath + "lib/python3.5";

    //QString LD_LIBRARY_PATH = "/data/data/org.qtproject.hellopython/files/lib:/data/data/org.qtproject.hellopython/lib";
    //QString PYTHONPATH = "/data/data/org.qtproject.hellopython/files/lib/python3.5";
    QString PATH = "/sbin:/vendor/bin:/system/sbin:/system/bin:/system/xbin:/data/data/org.qtproject.hellopython/files/lib:/data/data/org.qtproject.hellopython/lib";

    QString qrcMainFilename = ":/main.py";
    QString mainFilename = "main.py"; // name only
    QString mainFilePath = homePath + mainFilename;
    QFile qmainfile(qrcMainFilename);
    if (qmainfile.exists())
    {
        if (QFileInfo(mainFilePath).isFile())
        {
            QFile(mainFilePath).remove();
        }
        qmainfile.copy(mainFilePath);
//        if (!mainfile.errorString().isEmpty())
//        {
//            qDebug() << "mainfile copy failed:" << mainfile.errorString();
//            return false;
//        }
    }
    else
    {
        qDebug() << "mainfile not exist";
        pythonInitresult += "mainfile not exist";
        return false;
    }

    QFile mainFile("main.py");
    if (!mainFile.open(QFile::ReadOnly))
    {
        qDebug() << "main.py open failed";
        pythonInitresult += "main.py open failed";
        return false;
    }

    // setenv("PYTHONHOME", PYTHON_HOME, 1);
    setenv("PYTHONPATH", PYTHONPATH.toUtf8().data(), 1);
    setenv("LD_LIBRARY_PATH", LD_LIBRARY_PATH.toUtf8().data(), 1);
    setenv("PATH", PATH.toUtf8().data(), 1);

    Py_Initialize();
    PySys_SetPath(PYTHONPATH.toStdWString().data());

    // Create Main Module
    PyObject *mMainModule, *mMainDict, *mMainFilename;

    mMainModule = PyImport_AddModule("__main__");
        handlePythonException();
    mMainDict = PyModule_GetDict(mMainModule);
        handlePythonException();
    mMainFilename = PyUnicode_FromString(mainFilename.toUtf8().data());
        handlePythonException();
    PyDict_SetItemString(mMainDict, "__file__", mMainFilename);
        handlePythonException();

    // Init some module
    PyRun_SimpleString("import sys");
        handlePythonException();
    PyRun_SimpleString("sys.path.insert(0,'.')"); // improtant
        handlePythonException();

    // Run File
    QString filecontent = mainFile.readAll();
    PyRun_String(filecontent.toUtf8().data(),
                 Py_file_input,
                 mMainDict, mMainDict);
    handlePythonException();
    mainFile.close();

    Py_Finalize();

    if (!pythonInitresult.isEmpty()) {
        return false;
    }

    return true;
}

void MainWindow::handlePythonException()
{
    // based on
    // https://github.com/raulreal/Qgis_TST/blob/master/src/python/qgspythonutilsimpl.cpp

    if (PyErr_Occurred() == NULL) {
        return;
    }

#define TRACEBACK_FETCH_ERROR(what) {errMsg = what; goto done;}

    // acquire global interpreter lock to ensure we are in a consistent state
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();

    QString errMsg;
    QString result;

    PyObject *modStringIO = nullptr;
    PyObject *modTB = nullptr;
    PyObject *obStringIO = nullptr;
    PyObject *obResult = nullptr;

    PyObject *type, *value, *traceback;

    PyErr_Fetch(&type, &value, &traceback);
    PyErr_NormalizeException(&type, &value, &traceback);

    const char *iomod = "io";

    modStringIO = PyImport_ImportModule(iomod);
    if (!modStringIO)
        TRACEBACK_FETCH_ERROR(QString("can't import %1").arg(iomod));

    obStringIO = PyObject_CallMethod(modStringIO, (char *) "StringIO", nullptr);

    /* Construct a cStringIO object */
    if (!obStringIO)
        TRACEBACK_FETCH_ERROR("cStringIO.StringIO() failed");

    modTB = PyImport_ImportModule("traceback");
    if (!modTB)
        TRACEBACK_FETCH_ERROR("can't import traceback");

    obResult = PyObject_CallMethod(modTB, (char *) "print_exception",
                                    (char *) "OOOOO",
                                    type, value ? value : Py_None,
                                    traceback ? traceback : Py_None,
                                    Py_None,
                                    obStringIO);

    if (!obResult)
        TRACEBACK_FETCH_ERROR("traceback.print_exception() failed");

    Py_DECREF(obResult);

    obResult = PyObject_CallMethod(obStringIO, (char *) "getvalue", nullptr);
    if (!obResult)
        TRACEBACK_FETCH_ERROR("getvalue() failed.");

    /* And it should be a string all ready to go - duplicate it. */
    if (!PyUnicode_Check(obResult))
        TRACEBACK_FETCH_ERROR("getvalue() did not return a string");

    result = QString::fromUtf8(PyUnicode_AsUTF8((obResult)));

done:

    // All finished - first see if we encountered an error
    if (result.isEmpty() && !errMsg.isEmpty())
    {
        result = errMsg;
    }

    Py_XDECREF(modStringIO);
    Py_XDECREF(modTB);
    Py_XDECREF(obStringIO);
    Py_XDECREF(obResult);
    Py_XDECREF(value);
    Py_XDECREF(traceback);
    Py_XDECREF(type);

    // we are done calling python API, release global interpreter lock
    PyGILState_Release(gstate);

    qDebug() << result;

    pythonInitresult += result;
}

void MainWindow::unzipPythonResource()
{
    QString pythonZipPath = "assets:/python3.5.zip";
    QString pythonDestPath = homePath;
    JlCompress::extractDir(pythonZipPath, pythonDestPath);
}
