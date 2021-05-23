QT       += core gui
TEMPLATE = app
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++17
OBJECTS_DIR = objs/
MOC_DIR = moc/

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/formats/project/editor_project.cpp \
    src/formats/project/project_manager.cpp \
    src/main.cpp \
    src/ui/mainwindow.cpp \
    src/ui/project_form.cpp

HEADERS += \
    src/formats/project/editor_project.hpp \
    src/formats/project/project_manager.hpp \
    src/ui/mainwindow.hpp \
    src/ui/project_form.hpp

FORMS += \
    src/ui/mainwindow.ui \
    src/ui/project_form.ui

DISTFILES += \
    readme.md

TRANSLATIONS += \
    ppmdu_audioeditor_en_US.ts

RESOURCES += \
    appres.qrc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
