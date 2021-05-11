#include "sql_database.h"

// создания файла с БД
void sql_database::first_start()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("server.db");
    sql = QSqlQuery(db);
    if (!db.open())
    {
        qDebug() << "[ERROR] " << db.lastError().text();
        return;
    }
    create_table();
}

void sql_database::create_table()
{
    str_requests = "SELECT name FROM sqlite_master WHERE type = 'table';";
    sql.exec(str_requests);
    int count_table = 0;
    while (sql.next())
        count_table++;
    if (count_table == 0)
    {
        str_requests = "CREATE TABLE " + user_table + " ("
                                                      "id integer PRIMARY KEY NOT NULL,"
                                                      "login VARCHAR (40) NOT NULL,"
                                                      "password TEXT NOT NULL,"
                                                      "email TEXT,"
                                                      "number_phone VARCHAR (20)"
                                                      ");";
        if (!sql.exec(str_requests))
        {
            qDebug() << "[ERROR] Не удается создать таблицу с пользователями: " << db.lastError().text();
            return;
        }
        qDebug() << "[INFO] Создана таблица с пользователями";
        db.commit();

        str_requests = "CREATE TABLE " + app_table + " ("
                                                     "id integer PRIMARY KEY NOT NULL,"
                                                     "app_name VARCHAR (32) NOT NULL,"
                                                     "app_price VARCHAR (20),"
                                                     "app_description TEXT,"
                                                     "app_technologes TEXT,"
                                                     "app_star integer,"
                                                     "id_users_star TEXT,"
                                                     "author VARCHAR (40) NOT NULL"
                                                     ");";
        if (!sql.exec(str_requests))
        {
            qDebug() << "[ERROR] Не удается создать таблицу с программами: " << db.lastError().text();
            return;
        }
        db.commit();
        qDebug() << "[INFO] Создана таблица с программами";
    }
}

// получение названий программ
QList<QList<QString>> sql_database::get_apps_name()
{
    str_requests = "SELECT app_name, app_price, app_description, author FROM " + app_table + ";";
    if (!sql.exec(str_requests))
    {
        qDebug() << "[ERROR] Не удается получить названия программ: " << db.lastError().text();
        return {{"ERROR"}};
    }
    QList<QList<QString>> list_apps_name = {};

    QSqlRecord get_data = sql.record();
    QString app_name, app_price, app_description, author;
    while (sql.next())
    {
        app_name = sql.value(get_data.indexOf("app_name")).toString();
        app_price = sql.value(get_data.indexOf("app_price")).toString();
        app_description = sql.value(get_data.indexOf("app_description")).toString();
        author = sql.value(get_data.indexOf("author")).toString();

        list_apps_name.push_back({app_name, app_price, app_description, author});
    }

    return list_apps_name;
}

// добавление пользователя в БД при регистрации
QString sql_database::register_new_user(QString user_login, QString user_password)
{
    str_requests = "SELECT id FROM " + user_table + " WHERE login = ('%1');";
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

    int user_id = generate_id(user_table);

    if (user_id == 0)
    {
        qDebug() << "[ERROR] Не удается сгенерировать id: " << db.lastError().text();
        return "ERROR";
    }

    str_requests = "INSERT INTO " + user_table + " (id, login, password) VALUES(%1, '%2', '%3');";
    if (!sql.exec(str_requests.arg(user_id).arg(user_login).arg(user_password)))
    {
        qDebug() << "[ERROR] Не получается создать запись при регистрации: " << db.lastError().text();
        return "ERROR";
    }
    db.commit();
    return "OK";
}

// проверка данных при авторизации
QString sql_database::check_login_user(QString user_login, QString user_password)
{
    str_requests = "SELECT id, login FROM " + user_table + " WHERE (login = ('%1') or email = ('%1') or number_phone = ('%1')) and password = ('%2');";
    if (!sql.exec(str_requests.arg(user_login).arg(user_password)))
    {
        qDebug() << "[ERROR] Не удается получить данные для авторизации" << db.lastError().text();
        return "ERROR";
    }

    QSqlRecord get_data = sql.record();
    int count_users = 0;
    while (sql.next())
    {
        count_users++;
        g_user_name = sql.value(get_data.indexOf("login")).toString();
    }

    if (count_users > 0)
        return "OK";
    else
        return "NOT";
}

QList<QString> sql_database::get_info_for_profile(QString login)
{
    str_requests = "SELECT id, email, number_phone FROM " + user_table + " WHERE login = ('%1');";
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
    str_requests = "DELETE FROM " + user_table + " WHERE login = ('%1');";
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
    str_requests = "UPDATE " + user_table + " SET login = ('%1'), email = ('%2'), number_phone = ('%3') WHERE id = ('%4');";
    if (!sql.exec(str_requests.arg(data_change.at(1)).arg(data_change.at(2)).arg(data_change.at(3)).arg(data_change.at(0))))
    {
        qDebug() << "[ERROR] Не удается сохранить изменения профиля: " << db.lastError().text();
        return "ERROR";
    }
    db.commit();
    return "Successs";
}

QString sql_database::add_new_app(QList<QString> param_app)
{
    int app_id = generate_id(app_table);

    if (app_id == 0)
    {
        qDebug() << "[ERROR] Не удается сгенерировать id: " << db.lastError().text();
        return "ERROR";
    }

    str_requests = "INSERT INTO " + app_table + " (id, app_name, app_price, app_description, app_technologes, author) VALUES(%1, '%2', '%3', '%4', '%5', '%6');";
    if (!sql.exec(str_requests.arg(app_id).arg(param_app.at(0)).arg(param_app.at(1)).arg(param_app.at(2)).arg(param_app.at(3)).arg(param_app.at(4))))
    {
        qDebug() << "[ERROR] Ошибка при добавлении новой программы в БД";
        return "ERROR";
    }
    db.commit();
    return "OK";
}

int sql_database::generate_id(QString name_table)
{
    str_requests = "SELECT id FROM " + name_table;
    sql.exec(str_requests);
    if (!sql.exec(str_requests))
    {
        qDebug() << "[ERROR] Не удается получить данные из БД для генерации id: " << db.lastError().text();
        return 0;
    }
    QSqlRecord get_data = sql.record();
    int new_id = 1;
    int check_id;
    while (sql.next())
    {
        check_id = sql.value(get_data.indexOf("id")).toInt();
        if (new_id == check_id)
            new_id++;
        else
            break;
    }

    return new_id;
}

QList<QString> sql_database::get_apps_for_list_profile(QString login)
{
    str_requests = "SELECT app_name FROM " + app_table + " WHERE author = ('%1');";
    if (!sql.exec(str_requests.arg(login)))
    {
        qDebug() << "[ERROR] Не удается получить названия программ из профиля: " << db.lastError().text();
        return {{"ERROR"}};
    }
    QList<QString> list_apps_name;

    QSqlRecord get_data = sql.record();
    QString app_name;
    while (sql.next())
    {
        app_name = sql.value(get_data.indexOf("app_name")).toString();
        list_apps_name.push_back(app_name);
    }

    return list_apps_name;
}

QList<QString> sql_database::get_all_info_app_list_profile(QList<QString> param_app)
{
    str_requests = "SELECT app_price, app_description, app_technologes FROM " + app_table + " WHERE app_name = ('%1') and author = ('%2');";
    if (!sql.exec(str_requests.arg(param_app[0]).arg(param_app.last())))
    {
        qDebug() << "[ERROR] Не удается получить информацию о программе из профиля: " << db.lastError().text();
        return {{"ERROR"}};
    }
    QList<QString> list_apps_name;

    QSqlRecord get_data = sql.record();
    QString app_price, app_description, app_technologes;
    while (sql.next())
    {
        app_price = sql.value(get_data.indexOf("app_price")).toString();
        app_description = sql.value(get_data.indexOf("app_description")).toString();
        app_technologes = sql.value(get_data.indexOf("app_technologes")).toString();
        list_apps_name = {app_price, app_description, app_technologes};
    }

    return list_apps_name;
}

QString sql_database::delete_app_from_db(QString name_app)
{
    str_requests = "DELETE FROM " + app_table + " WHERE app_name = ('%1') and author = ('%2');";
    if (!sql.exec(str_requests.arg(name_app).arg(g_user_name)))
    {
        qDebug() << "[ERROR] Ошибка при удалении программы: " << db.lastError().text();
        return "ERROR";
    }
    db.commit();
    qDebug() << "[INFO] Программа успешно удалена";
    return "Success";
}

QString sql_database::save_change_app(QList<QString> data_change)
{
    qDebug() << data_change;
    str_requests = "UPDATE " + app_table + " SET app_name = ('%1'), app_price = ('%2'), app_description = ('%3'), app_technologes = ('%4') WHERE app_name = ('%5') and author = ('%6');";
    if (!sql.exec(str_requests.arg(data_change.at(1)).arg(data_change.at(2)).arg(data_change.at(3)).arg(data_change.at(4)).arg(data_change.at(0)).arg(g_user_name)))
    {
        qDebug() << "[ERROR] Не удается сохранить изменения программы: " << db.lastError().text();
        return "ERROR";
    }
    db.commit();
    return "Successs";
}

QString sql_database::get_count_apps(QString login)
{
    str_requests = "SELECT app_name FROM " + app_table + " WHERE author = ('%1');";
    if (!sql.exec(str_requests.arg(login)))
    {
        qDebug() << "[ERROR] Не удалось получить список программ для подсчета их количества" << db.lastError().text();
        return "ERROR";
    }
    int count = 0;
    while (sql.next())
        count++;

    return QString::number(count);
}

QString sql_database::add_start_to_app(QString login, QString app_name)
{
    str_requests = "SELECT app_star FROM " + app_table + " WHERE app_name = ('%1') and author = ('%2');";
    if (!sql.exec(str_requests.arg(app_name).arg(login)))
    {
        qDebug() << "[ERROR] Не удается получить количество звезд программы " << db.lastError().text();
        return "ERROR";
    }

    QSqlRecord get_data = sql.record();
    int count_star;
    while (sql.next())
        count_star = sql.value(get_data.indexOf("app_star")).toInt();

    count_star++;

    str_requests = "UPDATE " + app_table + " SET app_star = (%1) WHERE app_name = ('%2') and author = ('%3');";
    if (!sql.exec(str_requests.arg(count_star).arg(app_name).arg(login)))
    {
        qDebug() << "[ERROR] Не удается обность количество звезд программы " << db.lastError().text();
        return "ERROR";
    }

    db.commit();
    return "Success";
}

QString sql_database::add_id_users_star_app(QString login, QString app_name, QString new_id)
{
    QString list_user = get_list_id_star_app(login, app_name);

    if (list_user.size() > 0)
        list_user.push_back(";" + new_id);
    else
        list_user.push_back(new_id);

    str_requests = "UPDATE " + app_table + " SET id_users_star = ('%1') WHERE app_name = ('%2') and author = ('%3');";
    if(!sql.exec(str_requests.arg(list_user).arg(app_name).arg(login)))
    {
        qDebug() << "[ERROR] Не удается обновить вписов id пользователей поставивших звезду программе " << db.lastError().text();
        return "ERROR";
    }

    db.commit();
    return "Success";
}

int sql_database::get_id_user(QString login)
{
    str_requests = "SELECT id FROM " + user_table + " WHERE login = ('%1');";
    if (!sql.exec(str_requests.arg(login)))
    {
        qDebug() << "[ERROR] Не удается получить id пользователя " << db.lastError().text();
        return 0;
    }

    QSqlRecord get_data = sql.record();
    int user_id;
    while (sql.next())
        user_id = sql.value(get_data.indexOf("id")).toInt();

    return user_id;
}

QString sql_database::get_list_id_star_app(QString login, QString app_name)
{
    str_requests = "SELECT id_users_star FROM " + app_table + " WHERE app_name = ('%1') and author = ('%2');";
    if (!sql.exec(str_requests.arg(app_name).arg(login)))
    {
        qDebug() << "[ERROR] Не удается получить id пользователей поставивших звезду программе " << db.lastError().text();
        return "ERROR";
    }

    QSqlRecord get_data = sql.record();
    QString list_user;
    while (sql.next())
        list_user = sql.value(get_data.indexOf("id_users_star")).toString();

    return list_user;
}

QString sql_database::check_id_in_id_star_app(QString login, QString app_name, QString user_id)
{
    QString list_user = get_list_id_star_app(login, app_name);

    bool result = list_user.contains(user_id);

    if (result == true)
        return "OK";
    else
        return "NOT";
}
