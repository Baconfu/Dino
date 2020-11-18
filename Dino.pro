QT += quick

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Refer to the documentation for the
# deprecated API to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
<<<<<<< HEAD
        avatar.cpp \
        engine.cpp \
        main.cpp \
        paintavatar.cpp
=======
        main.cpp \
    scene.cpp \
    cactusmover.cpp \
>>>>>>> 81a5cc622da3e3697a0c41f98b0e4856d7c5c3af

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
<<<<<<< HEAD
    avatar.h \
    engine.h \
    paintavatar.h
=======
    scene.h \
    cactusmover.h \

>>>>>>> 81a5cc622da3e3697a0c41f98b0e4856d7c5c3af
