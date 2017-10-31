#!/usr/bin/python3
# -*- coding: utf-8 -*-
import sys,os
import traceback
from PyQt5 import QtGui,QtCore,QtWidgets
from PyQt5.QtWidgets import *
from PyQt5.QtCore import *
from PyQt5.QtGui import *

# qDebug Hack
importMsg = ''
qDebugFun = qDebug
def qDebug(msg):
    global importMsg
    importMsg += str(msg)
    importMsg += str("\n")
    qDebugFun(msg)

# Copy Files
qDebug("start copy files")
homePath = QStandardPaths.locate(QStandardPaths.HomeLocation, "", QStandardPaths.LocateDirectory)
qDebug(str(homePath))
fileList = [
    "hello.so",
    # "libQt5AndroidFileDialog.so",
    "QtAndroidFileDialog.so",
]
for filename in fileList:
    try:
        qrcFileName  = ":/qml/" + filename
        destFileName = homePath + "/" + filename
        f = QFile(qrcFileName)
        if (f.exists()):
            if QFileInfo(destFileName).isFile():
                QFile(qrcFileName).remove()
            f.copy(destFileName)
            if f.errorString():
                qDebug(f.errorString())
        else:
            qDebug("qrc file not found:" + qrcFileName)
    except Exception as e:
        qDebug(traceback.format_exc())
homePath = "./"
sys.path.insert(0, homePath)

# Test Import Module
try:
    try:
        import QtAndroidFileDialog
        qDebug("import QtAndroidFileDialog success")
        qDebug(str(dir(QtAndroidFileDialog)))
    except Exception as e:
        qDebug("import QtAndroidFileDialog failed")
        qDebug(traceback.format_exc())

    qDebug('import all success')

except Exception as e:
    qDebug(traceback.format_exc())

class Example(QWidget):
    
    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        self.btn = QPushButton(self)
        self.btn.setText("helloworldPyQtInWindows")
        self.btn.move(50,100)

        font = self.btn.font()
        font.setPointSizeF(30)
        self.btn.setFont(font)
        self.btn.resize(self.btn.sizeHint())
        
        lineLayout = QVBoxLayout()
        self.inputLine = QPlainTextEdit(self)
        lineLayout.addWidget(self.inputLine)

        # try:
        #     import hello
        #     helloInstance = hello.Hello()
        #     qDebug(str(dir(helloInstance)))
        #     lineLayout.addWidget(helloInstance)
        #     def timeout():
        #         qDebug("timeout")
        #     helloInstance.timeout.connect(timeout)
        # except Exception as e:
        #     qDebug(traceback.format_exc())

        lineLayout.addWidget(self.btn)
        self.setLayout(lineLayout)
            
        self.inputLine.setPlainText(importMsg)

        self.resize(500, 200)
        self.show()

        self.btn.clicked.connect(self.callQtAndroidFileDialog)

    def updateOutput(self):
        self.inputLine.setPlainText(importMsg)        

    def callQtAndroidFileDialog(self):
        try:
            import QtAndroidFileDialog
            dialog = QtAndroidFileDialog.AndroidFileDialog()
            dialog.provideExistingFileName()
        except Exception as e:
            qDebug(traceback.format_exc())
            self.updateOutput()

if __name__ == '__main__':
    app = QApplication(sys.argv)

    try:
        fontId = QFontDatabase.addApplicationFont(":/qml/DroidSans.ttf")
        family = QFontDatabase.applicationFontFamilies(fontId)[0]
        # family = "Roboto21322016"
        appFont = app.font()
        appFont.setFamily(family)
        app.setFont(appFont)
    except Exception as e:
        qDebug(traceback.format_exc())

    ex = Example()
    sys.exit(app.exec_())
