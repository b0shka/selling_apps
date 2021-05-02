#include "sql_database.h"
#include <QSqlError>
#include <QSqlRecord>

sql_database::sql_database()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./server.db");
    sql = QSqlQuery(db);
    if (!db.open())
        qDebug() << "Error: " << db.lastError().text();
    else
    {
        create_new_table();
        QString name = "Alex";
        QString pass = "qwerty123";
        create_new_user(name, pass);
    }
}

void sql_database::create_new_table()
{
    str_requests = "CREATE TABLE IF NOT EXISTS " + name_table + " ("
                                                                "id integer PRIMARY KEY NOT NULL,"
                                                                "login VARCHAR (40) NOT NULL,"
                                                                "password TEXT NOT NULL,"
                                                                "app_name VARCHAR (32),"
                                                                "app_price integer,"
                                                                "app_description TEXT"
                                                                ");";
    sql.exec(str_requests);
    db.commit();
    qDebug() << "Create table";
}

void sql_database::create_new_user(QString user_login, QString user_password)
{
    //int user_id = 1;
    //sql.exec("SELECT id FROM users;");
    /*while (sql.next())
    {
        qDebug() << sql.record();
    }*/

    str_requests = "INSERT INTO " + name_table + " (id, login, password) "
                                                 "VALUES(%1, '%2', '%3');";
    sql.exec(str_requests.arg(1).arg(user_login).arg(user_password));
    db.commit();
    qDebug() << "Create new user";
    qDebug() << user_login << user_password;
}
