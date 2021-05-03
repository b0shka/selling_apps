#include "sql_database.h"

void sql_database::first_start()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./server.db");
    sql = QSqlQuery(db);
    if (!db.open())
    {
        qDebug() << "[ERROR] " << db.lastError().text();
        return;
    }
    create_new_table();
}

void sql_database::create_new_table()
{
    str_requests = "CREATE TABLE IF NOT EXISTS " + name_table + " ("
                                                                "id integer PRIMARY KEY NOT NULL,"
                                                                "login VARCHAR (40) NOT NULL,"
                                                                "password TEXT NOT NULL,"
                                                                "app_name VARCHAR (32),"
                                                                "app_price VARCHAR (20),"
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

QList<QList<QString>> sql_database::get_apps_name()
{
    str_requests = "SELECT login, app_name, app_price, app_description FROM " + name_table + ";";
    if (!sql.exec(str_requests))
    {
        qDebug() << "[ERROR] Не удается получить данные для списка программ: " << db.lastError().text();
        return {{"ERROR"}};
    }
    else
    {
        QList<QList<QString>> list_apps_name = {};

        QSqlRecord get_data = sql.record();
        QString app_name, app_price, app_description, login;
        while (sql.next())
        {
            app_name = sql.value(get_data.indexOf("app_name")).toString();
            app_price = sql.value(get_data.indexOf("app_price")).toString();
            app_description = sql.value(get_data.indexOf("app_description")).toString();
            login = sql.value(get_data.indexOf("login")).toString();
            list_apps_name.push_back({app_name, app_price, app_description, login});
        }

        return list_apps_name;
    }
}

QString sql_database::register_new_user(QString user_login, QString user_password)
{
    str_requests = "SELECT id FROM " + name_table + " WHERE login = ('%1');";
    if (!sql.exec(str_requests.arg(user_login)))
    {
        qDebug() << "[ERROR] Не удалось сделать проверку на существование такого же пользователя:" << db.lastError().text();
        return "ERROR";
    }
    int count_users = 0;
    while (sql.next())
        count_users++;

    if (count_users > 0)
        return "NOT";
    else
    {
        str_requests = "SELECT id FROM " + name_table;
        sql.exec(str_requests);
        if (!sql.exec(str_requests))
        {
            qDebug() << "[ERROR] Не удается получить данные из БД для генерации id: " << db.lastError().text();
            return "ERROR";
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
            qDebug() << "[ERROR] Не получается создать запись при регистрации: " << db.lastError().text();
            return "ERROR";
        }
        db.commit();
        return "OK";
    }
}

QString sql_database::check_login_user(QString user_login, QString user_password)
{
    str_requests = "SELECT id FROM " + name_table + " WHERE login = ('%1') and password = ('%2');";
    if (!sql.exec(str_requests.arg(user_login).arg(user_password)))
    {
        qDebug() << "[ERROR] Не удается получить данные для авторизации" << db.lastError().text();
        return "ERROR";
    }

    int count_users = 0;
    while (sql.next())
        count_users++;
    if (count_users > 0)
        return "OK";
    else
        return "NOT";
}

QList<QString> sql_database::get_info_for_profile(QString login)
{
    str_requests = "SELECT id FROM " + name_table + " WHERE login = ('%1');";
    if (!sql.exec(str_requests.arg(login)))
    {
        qDebug() << "[ERROR] Не удается получить данные для профиля: " << db.lastError().text();
        return {"ERROR"};
    }
    else
    {
        QSqlRecord get_data = sql.record();
        QString user_id;
        while (sql.next())
        {
            user_id = sql.value(get_data.indexOf("id")).toString();
        }

        return {user_id};
    }
}

QString sql_database::delete_user_from_db(QString login)
{
    str_requests = "DELETE FROM " + name_table + " WHERE login = ('%1');";
    if (!sql.exec(str_requests.arg(login)))
    {
        qDebug() << "[ERROR] Ошибка при удалении пользователя";
        return "ERROR";
    }
    db.commit();
    qDebug() << "[INFO] Пользователь успешно удален";
    return "Success";
}
