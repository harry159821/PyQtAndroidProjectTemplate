#-------------------------------------------------
#
# Project created by QtCreator 2017-10-23T21:54:47
#
#-------------------------------------------------

QT       += core gui widgets network quick quickwidgets qml androidextras

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = hellopython
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h \
    tools/subfunction.h

FORMS += \
        mainwindow.ui

CONFIG += mobility
MOBILITY = 

DISTFILES += \
    android/AndroidManifest.xml \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradlew \
    android/res/values/libs.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew.bat \
    android/libs/android-support-v4.jar \
    android/src/org/qtproject/hellopython/PythonLoadActivity.java

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android

DEFINES += QT_NO_KEYWORDS
INCLUDEPATH += $$PWD/include
INCLUDEPATH += $$PWD/include/python3.5m
LIBS += -L$$PWD/lib -lpython3.5m

contains(ANDROID_TARGET_ARCH,armeabi-v7a) {
    ANDROID_EXTRA_LIBS = \
        $$PWD/lib/libpython3.5m.so
}

# Build Quazip
DEFINES += QUAZIP_BUILD
include(quazip/quazip.pri)
LIBS += -lz

RESOURCES += \
    main.qrc
