#ifndef SQL_DATABASE_H
#define SQL_DATABASE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtSql>
#include <iostream>
#include <QDebug>

using namespace std;

class sql_database
{
public:
    sql_database();
private slots:
    void create_new_table();
    void create_new_user(QString user_login, QString user_password);
private:
    QSqlDatabase db;
    QSqlQuery sql;
    QString name_table = "users";
    QString str_requests;
};

#endif // SQL_DATABASE_H
