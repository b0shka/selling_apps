#ifndef SQL_DATABASE_H
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
    QString add_star_to_app(QString login, QString app_name);
    QString add_id_users_star_app(QString login, QString app_name, QString new_id);
    int get_id_user(QString login);
    QString get_list_id_star_app(QString login, QString app_name);
    QString check_id_in_id_star_app(QString login, QString app_name, QString user_id);
    QString get_all_star_for_profile(QString login);
    void get_max_price_app();
    QString add_app_to_favorite(QString login, QString app_name);
    QString get_id_app(QString login, QString app_name);
    QString get_id_favorite_app();
    QList<QList<QString>> get_list_favorite_app();
    QList<QString> get_info_app_id(int app_id);
    QString check_app_favorite(QString app_id);

private:
    QSqlDatabase db;
    QSqlQuery sql;
    QString user_table = "users";
    QString app_table = "apps";
    QString str_requests;
};

#endif // SQL_DATABASE_H
