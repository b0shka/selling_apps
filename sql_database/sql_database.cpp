#include "sql_database.h"

sql_database::sql_database()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./server.db");
    sql = QSqlQuery(db);
    if (!db.open())
    {
        qDebug() << "[ERROR] " << db.lastError().text();
        return;
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
    if (!sql.exec(str_requests))
    {
        qDebug() << "[ERROR] Не удается создать таблицу: " << db.lastError().text();
        return;
    }
    db.commit();
    qDebug() << "[INFO] Создана таблица";
}

void sql_database::register_new_user(QString user_login, QString user_password)
{
    str_requests = "SELECT id FROM " + name_table + " WHERE login = ('%1');";
    if (!sql.exec(str_requests.arg(user_login)))
    {
        qDebug() << "[ERROR] Не удалось сделать проверку на существование такого же пользователя:" << db.lastError().text();
        return;
    }
    int count_users = 0;
    while (sql.next())
        count_users++;

    if (count_users > 0)
        qDebug() << "Пользователь с таким login уже существует";
    else
    {
        str_requests = "SELECT id FROM " + name_table;
        sql.exec(str_requests);
        if (!sql.exec(str_requests))
        {
            qDebug() << "[ERROR] Не удается получить данные из БД для генерации id: " << db.lastError().text();
            return;
        }
        QSqlRecord get_data = sql.record();
        int user_id = 1;
        int check_id;
        while (sql.next())
        {
            check_id = sql.value(get_data.indexOf("id")).toInt();
            if (user_id == check_id)
                user_id++;
            else
                break;
        }

        str_requests = "INSERT INTO " + name_table + " (id, login, password) VALUES(%1, '%2', '%3');";
        if (!sql.exec(str_requests.arg(user_id).arg(user_login).arg(user_password)))
        {
            qDebug() << "[ERROR] Не получается создать запись: " << db.lastError().text();
            return;
        }
        db.commit();
        qDebug() << "[INFO] Добавлен новый пользователь";
    }
}
