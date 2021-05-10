﻿#ifndef SQL_DATABASE_H
#define SQL_DATABASE_H

#include <QWidget>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include "../main_data/data.h"

class sql_database
{
public slots:
    void first_start();
    void create_table();
    QList<QList<QString>> get_apps_name();
    QString register_new_user(QString user_login, QString user_password);
    QString check_login_user(QString user_login, QString user_password);
    QList<QString> get_info_for_profile(QString login);
    QString delete_user_from_db(QString login);
    QString save_change_in_profile(QList<QString> data_change);
    QString add_new_app(QList<QString> param_app);
    int generate_id(QString name_table);
    QList<QString> get_apps_for_list_profile(QString login);
    QList<QString> get_all_info_app_list_profile(QList<QString> param_app);
    QString delete_app_from_db(QString name_app);
    QString save_change_app(QList<QString> data_change);
    QString get_count_apps(QString login);
    QString add_start_to_app(QString login, QString app_name);

private:
    QSqlDatabase db;
    QSqlQuery sql;
    QString user_table = "users";
    QString app_table = "apps";
    QString str_requests;
};

#endif // SQL_DATABASE_H
