#ifndef SQL_DATABASE_H
#define SQL_DATABASE_H

#include <QWidget>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>

using namespace std;

class sql_database
{
public:
    QString user_name_login;

public slots:
    void first_start();
    void create_table();
    QList<QList<QString>> get_apps_name();
    QString register_new_user(QString user_login, QString user_password);
    QString check_login_user(QString user_login, QString user_password);
    QList<QString> get_info_for_profile(QString login);
    QString delete_user_from_db(QString login);
    QString save_change_in_profile(QList<QString> data_change);

private:
    QSqlDatabase db;
    QSqlQuery sql;
    QString user_table = "users";
    QString app_table = "apps";
    QString str_requests;
};

#endif // SQL_DATABASE_H
