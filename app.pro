QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
	about_app/about_app.cpp \
    add_app/add_app.cpp \
	autorization_mainwindow/autorization_mainwindow.cpp \
	main.cpp \
	mainwindow/mainwindow.cpp \
	profile/profile.cpp \
	sql_database/sql_database.cpp \
	window_login/window_login.cpp \
	window_register/window_registration.cpp \

HEADERS += \
	about_app/about_app.h \
    add_app/add_app.h \
	autorization_mainwindow/autorization_mainwindow.h \
	mainwindow/mainwindow.h \
	profile/profile.h \
	sql_database/sql_database.h \
    window_login/window_login.h \
	window_register/window_registration.h \

FORMS += \
	about_app/about_app.ui \
    add_app/add_app.ui \
	autorization_mainwindow/autorization_mainwindow.ui \
	mainwindow/mainwindow.ui \
	profile/profile.ui \
    window_login/window_login.ui \
	window_register/window_registration.ui \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
