#!/usr/bin/python3
# -*- coding: utf-8 -*-
import sys,os
import traceback
print("hello world")

sys.path = ['', '/data/data/org.qtproject.hellopython/lib', '/data/data/org.qtproject.hellopython/files/lib/python3.5', '/data/data/org.qtproject.hellopython/files/lib/python35.zip', '/data/data/org.qtproject.hellopython/files/lib/python3.5/plat-linux', '/data/data/org.qtproject.hellopython/files/lib/python3.5/lib-dynload', '/data/data/org.qtproject.hellopython/files/lib/python3.5/site-packages']

with open("/sdcard/error.txt", "w") as f:
    f.write("")

try:
    from PyQt5 import QtGui,QtCore,QtWidgets
    from PyQt5.QtWidgets import *
    from PyQt5.QtCore import *
    from PyQt5.QtGui import *
            
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

            lineLayout.addWidget(self.btn)
            self.setLayout(lineLayout)

            self.resize(500, 200)
            self.show()

    app = QApplication([])
    ex = Example()
    app.exec_()
except Exception as e:
    with open("/sdcard/error.txt", "w") as f:
        f.write("\n")
        f.write(os.getenv("LD_LIBRARY_PATH"))
        f.write("\n")
        f.write(os.getenv("PYTHONPATH"))
        f.write("\n")
        f.write(os.getenv("PATH"))
        f.write("\n")
        f.write(str(sys.path))
        f.write("\n")
        f.write(os.getcwd())
        f.write("\n")
        f.write(traceback.format_exc())

# #!/usr/bin/python3
# # -*- coding: utf-8 -*-
# import sys,os
# import traceback
# from PyQt5 import QtGui,QtCore,QtWidgets
# from PyQt5.QtWidgets import *
# from PyQt5.QtCore import *
# from PyQt5.QtGui import *
        
# class Example(QWidget):
    
#     def __init__(self):
#         super().__init__()
#         self.initUI()

#     def initUI(self):
#         self.btn = QPushButton(self)
#         self.btn.setText("helloworldPyQtInWindows")
#         self.btn.move(50,100)

#         font = self.btn.font()
#         font.setPointSizeF(30)
#         self.btn.setFont(font)
#         self.btn.resize(self.btn.sizeHint())
        
#         lineLayout = QVBoxLayout()
#         self.inputLine = QPlainTextEdit(self)
#         lineLayout.addWidget(self.inputLine)

#         lineLayout.addWidget(self.btn)
#         self.setLayout(lineLayout)

#         self.resize(500, 200)
#         self.show()

# if __name__ == '__main__':
#     app = QApplication(sys.argv)
#     ex = Example()
#     app.exec_()
