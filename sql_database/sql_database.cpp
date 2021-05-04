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
                                                                "email TEXT,"
                                                                "number_phone VARCHAR (20),"
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
    str_requests = "SELECT id, email, number_phone FROM " + name_table + " WHERE login = ('%1');";
    if (!sql.exec(str_requests.arg(login)))
    {
        qDebug() << "[ERROR] Не удается получить данные для профиля: " << db.lastError().text();
        return {"ERROR"};
    }
    QSqlRecord get_data = sql.record();
    QString user_id, user_email, user_number_phone;
    while (sql.next())
    {
        user_id = sql.value(get_data.indexOf("id")).toString();
        user_email = sql.value(get_data.indexOf("email")).toString();
        user_number_phone = sql.value(get_data.indexOf("number_phone")).toString();
    }

    return {user_id, user_email, user_number_phone};
}

QString sql_database::delete_user_from_db(QString login)
{
    str_requests = "DELETE FROM " + name_table + " WHERE login = ('%1');";
    if (!sql.exec(str_requests.arg(login)))
    {
        qDebug() << "[ERROR] Ошибка при удалении пользователя: " << db.lastError().text();
        return "ERROR";
    }
    db.commit();
    qDebug() << "[INFO] Пользователь успешно удален";
    return "Success";
}

QString sql_database::save_change_in_profile(QList<QString> data_change)
{
    str_requests = "UPDATE " + name_table + " SET login = ('%1'), email = ('%2'), number_phone = ('%3') WHERE id = ('%4');";
    if (!sql.exec(str_requests.arg(data_change.at(1)).arg(data_change.at(2)).arg(data_change.at(3)).arg(data_change.at(0))))
    {
        qDebug() << "[ERROR] Не удается сохранить изменения профиля: " << db.lastError().text();
        return "ERROR";
    }
    db.commit();
    return "Successs";
}
