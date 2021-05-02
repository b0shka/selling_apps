#ifndef SQL_DATABASE_H
#define SQL_DATABASE_H

#include <QWidget>
#include <iostream>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>

using namespace std;

class sql_database
{
public:
    sql_database();
public slots:
    void create_new_table();
    QString register_new_user(QString user_login, QString user_password);
    QString check_login_user(QString user_login, QString user_password);
private:
    QSqlDatabase db;
    QSqlQuery sql;
    QString name_table = "users";
    QString str_requests;
};

#endif // SQL_DATABASE_H
