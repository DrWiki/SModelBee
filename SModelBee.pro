#-------------------------------------------------
#
# Project created by QtCreator 2019-04-16T22:57:33
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SModelBee
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        SModelBee.cpp \
    Camera.cpp \
    TriangularPatch.cpp \
    Model3D.cpp \
    MyOldOpenGLWidget.cpp

HEADERS += \
        SModelBee.h \
    Camera.h \
    TriangularPatch.h \
    Model3D.h \
    MyOldOpenGLWidget.h

FORMS += \
        SModelBee.ui

LIBS += -lopengl32\
        -lglu32\
        -lglut32

RESOURCES += \
    image_src.qrc

