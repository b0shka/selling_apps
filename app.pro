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
    about_my_app/about_my_app.cpp \
    add_app/add_app.cpp \
	autorization_mainwindow/autorization_mainwindow.cpp \
    developper_app/developper_app.cpp \
    favorite_app/favorite_app.cpp \
    filter_search/filter_search.cpp \
	main.cpp \
    main_data/data.cpp \
	mainwindow/mainwindow.cpp \
	profile/profile.cpp \
	sql_database/sql_database.cpp \
    user_apps/user_apps.cpp \
	window_login/window_login.cpp \
	window_register/window_registration.cpp \

HEADERS += \
	about_app/about_app.h \
    about_my_app/about_my_app.h \
    add_app/add_app.h \
	autorization_mainwindow/autorization_mainwindow.h \
    developper_app/developper_app.h \
    favorite_app/favorite_app.h \
    filter_search/filter_search.h \
    main_data/data.h \
	mainwindow/mainwindow.h \
	profile/profile.h \
	sql_database/sql_database.h \
    user_apps/user_apps.h \
    window_login/window_login.h \
	window_register/window_registration.h \

FORMS += \
	about_app/about_app.ui \
    about_my_app/about_my_app.ui \
    add_app/add_app.ui \
	autorization_mainwindow/autorization_mainwindow.ui \
    developper_app/developper_app.ui \
    favorite_app/favorite_app.ui \
    filter_search/filter_search.ui \
	mainwindow/mainwindow.ui \
	profile/profile.ui \
    user_apps/user_apps.ui \
    window_login/window_login.ui \
	window_register/window_registration.ui \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
