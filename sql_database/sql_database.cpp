﻿#include "sql_database.h"

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
                                                      "number_phone VARCHAR (20),"
                                                      "favorite_app TEXT,"
													  "status_online integer,"
													  "id_server integer,"
													  "id_socket integer,"
													  "dialogs TEXT"
                                                      ");";
        if (!sql.exec(str_requests))
        {
            qDebug() << "[ERROR] Не удается создать таблицу с пользователями: " << db.lastError().text();
            return;
        }
        db.commit();
		qDebug() << "[INFO] Создана таблица с пользователями";

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
		
		str_requests = "CREATE TABLE " + chats_table + " ("
													   "id integer PRIMARY KEY NOT NULL,"
													   "login VARCHAR (32) NOT NULL,"
													   "login_dev VARCHAR (32) NOT NULL,"
													   "messages TEXT,"
													   "new_messages TEXT"
													   ");";
        if (!sql.exec(str_requests))
        {
            qDebug() << "[ERROR] Не удается создать таблицу с переписками: " << db.lastError().text();
            return;
        }
        db.commit();
        qDebug() << "[INFO] Создана таблица с переписками";
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

    str_requests = "DELETE FROM " + app_table + " WHERE author = ('%1');";
    if (!sql.exec(str_requests.arg(login)))
    {
        qDebug() << "[ERROR] Не получается удалить все программы пользователя при удалении аккаунта " << db.lastError().text();
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

QString sql_database::add_star_to_app(QString login, QString app_name)
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
        qDebug() << "[ERROR] Не удается обновить количество звезд программы " << db.lastError().text();
        return "ERROR";
    }

    db.commit();

    int user_id = get_id_user(g_user_name);
    QString result_update_list_star = add_id_users_star_app(login, app_name, QString::number(user_id));
    if (result_update_list_star == "ERROR")
    {
        qDebug() << "[ERROR] Не удается обновить список id которые поставили звезду программе " << db.lastError().text();
        return "ERROR";
    }

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
        qDebug() << "[ERROR] Не удается обновить список id пользователей поставивших звезду программе " << db.lastError().text();
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

QString sql_database::get_all_star_for_profile(QString login)
{
    str_requests = "SELECT app_star FROM " + app_table + " WHERE author = ('%1');";
    if (!sql.exec(str_requests.arg(login)))
    {
        qDebug() << "[ERROR] Не удается получить количество звезд с одного профиля " << db.lastError().text();
        return "ERROR";
    }

    QSqlRecord get_data = sql.record();
    int count_star = 0;
    while (sql.next())
        count_star += sql.value(get_data.indexOf("app_star")).toInt();

    return QString::number(count_star);
}

void sql_database::get_max_price_app()
{
    str_requests = "SELECT app_price FROM " + app_table + " ;";
    if (!sql.exec(str_requests))
        qDebug() << "[ERROR] Не удалется получить все цены программ для определения g_max_price " << db.lastError().text();

    QSqlRecord get_data = sql.record();
    QString app_price;

    while (sql.next())
    {
        app_price = sql.value(get_data.indexOf("app_price")).toString();
        if (app_price.toInt() > g_max_price)
            g_max_price = app_price.toInt();
    }
}

void sql_database::get_min_price_app()
{
    str_requests = "SELECT app_price FROM " + app_table + " ;";
    if (!sql.exec(str_requests))
        qDebug() << "[ERROR] Не удалется получить все цены программ для определения g_min_price " << db.lastError().text();

    QSqlRecord get_data = sql.record();
    QList<QString> app_price;
    while (sql.next())
        app_price.push_back(sql.value(get_data.indexOf("app_price")).toString());

    if (app_price.size() > 0)
    {
        g_min_price = app_price[0].toInt();
        for (QString i : app_price)
        {
            if (i.toInt() < g_min_price)
                g_min_price = i.toInt();
        }
    }
    else
        g_min_price = 0;
}

QString sql_database::get_id_app(QString login, QString app_name)
{
    str_requests = "SELECT id FROM " + app_table + " WHERE app_name = ('%1') and author = ('%2');";
    if (!sql.exec(str_requests.arg(app_name).arg(login)))
        return "ERROR";

    QSqlRecord get_data = sql.record();
    QString app_id;
    while (sql.next())
        app_id = sql.value(get_data.indexOf("id")).toString();

    return app_id;
}

QString sql_database::add_app_to_favorite(QString login, QString app_name)
{
    QString favorite_app = get_id_favorite_app();
    QString new_favorite_app = get_id_app(login, app_name);
    if (new_favorite_app == "ERROR")
    {
        qDebug() << "[ERROR] Не удается получить id программы " << db.lastError().text();
        return "ERROR";
    }

    if (favorite_app.size() > 0)
        favorite_app.push_back(";" + new_favorite_app);
    else
        favorite_app.push_back(new_favorite_app);

    str_requests = "UPDATE " + user_table + " SET favorite_app = ('%1') WHERE login = ('%2');";
    if (!sql.exec(str_requests.arg(favorite_app).arg(g_user_name)))
    {
        qDebug() << "[ERROR] Не удается изменить список избранных программ " << db.lastError().text();
        return "ERROR";
    }
    db.commit();
    return "Success";
}

QString sql_database::get_id_favorite_app()
{
    str_requests = "SELECT favorite_app FROM " + user_table + " WHERE login = ('%1');";
    if (!sql.exec(str_requests.arg(g_user_name)))
    {
        qDebug() << "[ERROR] Не удается получить id избранных программ " << db.lastError().text();
        return "ERROR";
    }

    QSqlRecord get_data = sql.record();
    QString favorite_app;
    while (sql.next())
        favorite_app = sql.value(get_data.indexOf("favorite_app")).toString();

    return favorite_app;
}

QList<QList<QString>> sql_database::get_list_favorite_app()
{
    QList<QString> favorite_app = get_id_favorite_app().split(";");
    QList<QList<QString>> data_apps = {};

    if (favorite_app.at(0).size() > 0)
    {
        for (QString i : favorite_app)
        {
            QList<QString> data_app = get_info_app_id(i.toInt());
            if (data_app.at(0) != "ERROR")
                data_apps.push_back(data_app);
        }
    }

    return data_apps;
}

QList<QString> sql_database::get_info_app_id(int app_id)
{
    str_requests = "SELECT app_name, author FROM " + app_table + " WHERE id = (%1);";
    if (!sql.exec(str_requests.arg(app_id)))
    {
        qDebug() << "[ERROR] Не удается получить информацию о программе для избранного: " << db.lastError().text();
        return {"ERROR"};
    }

    QList<QString> list_apps_name;
    QSqlRecord get_data = sql.record();
    QString app_name, app_author;
    while (sql.next())
    {
        app_name = sql.value(get_data.indexOf("app_name")).toString();
        app_author = sql.value(get_data.indexOf("author")).toString();
        list_apps_name = {app_name, app_author};
    }

    return list_apps_name;
}

QString sql_database::check_app_favorite(QString app_id)
{
    QString favorite_app = get_id_favorite_app();

    bool result = favorite_app.contains(app_id);

    if (result == true)
        return "OK";
    else
        return "NOT";
}


QString sql_database::delete_app_to_favorite(QString login, QString app_name)
{
    QString app_id = get_id_app(login, app_name);
    QString favorite_app = get_id_favorite_app();

    bool result = favorite_app.contains(";");
    if (result == true)
        favorite_app.remove(";" + app_id);
    else
        favorite_app.remove(app_id);

    str_requests = "UPDATE " + user_table + " SET favorite_app = ('%1');";
    if (!sql.exec(str_requests.arg(favorite_app)))
    {
        qDebug() << "[ERROR] Не получается удалить программу из избранного " << db.lastError().text();
        return "ERROR";
    }

    db.commit();
    return "Success";
}

QString sql_database::delete_app_star(QString login, QString app_name)
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

    count_star--;

    str_requests = "UPDATE " + app_table + " SET app_star = (%1) WHERE app_name = ('%2') and author = ('%3');";
    if (!sql.exec(str_requests.arg(count_star).arg(app_name).arg(login)))
    {
        qDebug() << "[ERROR] Не удается обновить количество звезд программы " << db.lastError().text();
        return "ERROR";
    }

    db.commit();

    int user_id = get_id_user(g_user_name);
    QString result_update_list_star = delete_id_users_star_app(login, app_name, QString::number(user_id));
    if (result_update_list_star == "ERROR")
    {
        qDebug() << "[ERROR] Не удается обновить список id которые поставили звезду программе " << db.lastError().text();
        return "ERROR";
    }
    return "Success";
}

QString sql_database::delete_id_users_star_app(QString login, QString app_name, QString delete_id)
{
    QString list_user = get_list_id_star_app(login, app_name);

    bool result = list_user.contains(";");
    if (result == true)
        list_user.remove(";" + delete_id);
    else
        list_user.remove(delete_id);

    str_requests = "UPDATE " + app_table + " SET id_users_star = ('%1') WHERE app_name = ('%2') and author = ('%3');";
    if(!sql.exec(str_requests.arg(list_user).arg(app_name).arg(login)))
    {
        qDebug() << "[ERROR] Не удается обновить список id пользователей поставивших звезду программе " << db.lastError().text();
        return "ERROR";
    }

    db.commit();
	return "Success";
}

void sql_database::change_status_online(QString login)
{
	str_requests = "UPDATE " + user_table + " SET status_online = ('%1') WHERE login = ('%2');";
	if (!sql.exec(str_requests.arg(g_status_online).arg(login)))
	{
		qDebug() << "[ERROR] Не удается изменить статус online " << db.lastError().text();
		return;
	}
	
	db.commit();
}

void sql_database::add_client_id(int client, QString login)
{
	str_requests = "UPDATE " + user_table + " SET id_socket = ('%1') WHERE login = ('%2');";
	if (!sql.exec(str_requests.arg(client).arg(login)))
	{
		qDebug() << "[ERROR] Не удалось добавить client в id_socket " << db.lastError().text();
		return;
	}
	
	db.commit();
}

int sql_database::get_id_socket_user(QString login)
{
	str_requests = "SELECT id_socket FROM " + user_table + " WHERE login = ('%1');";
	if (!sql.exec(str_requests.arg(login)))
	{
		qDebug() << "[ERROR] Не удается получить id_socket " << db.lastError().text();
		return 0;
	}
	
	QSqlRecord get_data = sql.record();
    int id_socket;
    while (sql.next())
        id_socket = sql.value(get_data.indexOf("id_socket")).toInt();
	
	return id_socket;
}

void sql_database::add_id_server(int id_socket, QString login)
{
	str_requests = "UPDATE " + user_table + " SET id_server = ('%1') WHERE login = ('%2');";
	if (!sql.exec(str_requests.arg(id_socket).arg(login)))
	{
		qDebug() << "[ERROR] Не удается обновить id_server " << db.lastError().text();
		return;
	}
	
	db.commit();
}

int sql_database::get_id_server(QString login)
{
	str_requests = "SELECT id_server FROM " + user_table + " WHERE login = ('%1');";
	if (!sql.exec(str_requests.arg(login)))
	{
		qDebug() << "[ERROR] Не удается получить id_server " << db.lastError().text();
		return 0;
	}
	
	QSqlRecord get_data = sql.record();
    int id_server;
    while (sql.next())
        id_server = sql.value(get_data.indexOf("id_server")).toInt();
	
	return id_server;
}

int sql_database::get_status_online(QString login)
{
	str_requests = "SELECT status_online FROM " + user_table + " WHERE login = ('%1');";
	if (!sql.exec(str_requests.arg(login)))
	{
		qDebug() << "[ERROR] Не удается получить статус online " << db.lastError().text();
		return 2;
	}
	
	QSqlRecord get_data = sql.record();
    int status_online;
    while (sql.next())
        status_online = sql.value(get_data.indexOf("status_online")).toInt();
	
	return status_online;
}

void sql_database::start_dialog(QString login, QString login_dev)
{
	str_requests = "SELECT dialogs FROM " + user_table + " WHERE login = ('%1');";
	if (!sql.exec(str_requests.arg(login)))
	{
		qDebug() << "[ERROR] Не удается получить dialogs " << db.lastError().text();
		return;
	}
	
	QSqlRecord get_data = sql.record();
    QString dialogs;
    while (sql.next())
        dialogs = sql.value(get_data.indexOf("dialogs")).toString();
	
	int result_check = dialogs.indexOf(login_dev);
	if (result_check == -1)
	{
		if (dialogs.size() == 0)
			dialogs += login_dev;
		else
			dialogs += ";" + login_dev;
		
		str_requests = "UPDATE " + user_table + " SET dialogs = ('%1') WHERE login = ('%2');";
		if (!sql.exec(str_requests.arg(dialogs).arg(login)))
		{
			qDebug() << "[ERROR] Не удается обновить dialogs " << db.lastError().text();
			return;
		}
		
		db.commit();
	}
	
	str_requests = "SELECT dialogs FROM " + user_table + " WHERE login = ('%1');";
	if (!sql.exec(str_requests.arg(login_dev)))
	{
		qDebug() << "[ERROR] Не удается получить dialogs " << db.lastError().text();
		return;
	}
	
	get_data = sql.record();
    while (sql.next())
        dialogs = sql.value(get_data.indexOf("dialogs")).toString();
	
	result_check = dialogs.indexOf(login);
	if (result_check == -1)
	{
		if (dialogs.size() == 0)
			dialogs += login;
		else
			dialogs += ";" + login;
		
		str_requests = "UPDATE " + user_table + " SET dialogs = ('%1') WHERE login = ('%2');";
		if (!sql.exec(str_requests.arg(dialogs).arg(login_dev)))
		{
			qDebug() << "[ERROR] Не удается обновить dialogs " << db.lastError().text();
			return;
		}
		
		db.commit();
		
		start_chat(login, login_dev);
	}
}

void sql_database::start_chat(QString login, QString login_dev)
{
	str_requests = "SELECT id FROM " + chats_table + " WHERE login = ('%1') and login_dev = ('%2');";
	if (!sql.exec(str_requests.arg(login).arg(login_dev)))
	{
		qDebug() << "[ERROR] Не удается получить id переписки " << db.lastError().text();
		return;
	}
	
	QSqlRecord get_data = sql.record();
    QString id_dialog;
    while (sql.next())
        id_dialog = sql.value(get_data.indexOf("id")).toString();
	
	if (id_dialog.size() == 0)
	{	
		int chat_id = generate_id(chats_table);
		
		str_requests = "INSERT INTO " + chats_table + " (id, login, login_dev) VALUES(%1, '%2', '%3');";
		if (!sql.exec(str_requests.arg(chat_id).arg(login).arg(login_dev)))
		{
			qDebug() << "[ERROR] Не получается создать запись с чатом " << db.lastError().text();
			return;
		}
		db.commit();
	}
	
	str_requests = "SELECT id FROM " + chats_table + " WHERE login = ('%1') and login_dev = ('%2');";
	if (!sql.exec(str_requests.arg(login_dev).arg(login)))
	{
		qDebug() << "[ERROR] Не удается получить id переписки " << db.lastError().text();
		return;
	}
	
	get_data = sql.record();
    while (sql.next())
        id_dialog = sql.value(get_data.indexOf("id")).toString();
	
	if (id_dialog.size() == 0)
	{
		int chat_id = generate_id(chats_table);
		
		str_requests = "INSERT INTO " + chats_table + " (id, login, login_dev) VALUES(%1, '%2', '%3');";
		if (!sql.exec(str_requests.arg(chat_id).arg(login_dev).arg(login)))
		{
			qDebug() << "[ERROR] Не получается создать запись с чатом " << db.lastError().text();
			return;
		}
		db.commit();
	}
}

QString sql_database::get_dialogs(QString login)
{
	str_requests = "SELECT dialogs FROM " + user_table + " WHERE login = ('%1');";
	if (!sql.exec(str_requests.arg(login)))
	{
		qDebug() << "[ERROR] Не удается получить dialogs " << db.lastError().text();
		return "ERROR";
	}
	
	QSqlRecord get_data = sql.record();
    QString dialogs;
    while (sql.next())
        dialogs = sql.value(get_data.indexOf("dialogs")).toString();
	
	return dialogs;
}

QString sql_database::get_correspondence(QString login, QString login_dev)
{
	str_requests = "SELECT messages FROM " + chats_table + " WHERE login = ('%1') and login_dev = ('%2');";
	if (!sql.exec(str_requests.arg(login).arg(login_dev)))
	{
		qDebug() << "[ERROR] Не удается получить переписку " << db.lastError().text();
		return "ERROR";
	}
	
	QSqlRecord get_data = sql.record();
    QString all_message;
    while (sql.next())
        all_message = sql.value(get_data.indexOf("messages")).toString();
	
	return all_message;
}

void sql_database::add_to_chat(QString login, QString login_dev, QString messages)
{
	str_requests = "SELECT messages FROM " + chats_table + " WHERE login = ('%1') and login_dev = ('%2');";
	if (!sql.exec(str_requests.arg(login).arg(login_dev)))
	{
		qDebug() << "[ERROR] Не удается получить message в chats " << db.lastError().text();
		return;
	}
	
	QSqlRecord get_data = sql.record();
    QString message;
    while (sql.next())
        message = sql.value(get_data.indexOf("messages")).toString();
	
	if (messages.size() != 0)
	{
		message += messages + ";";
		
		str_requests = "UPDATE " + chats_table + " SET messages = ('%1') WHERE login = ('%2') and login_dev = ('%3');";
		if (!sql.exec(str_requests.arg(message).arg(login).arg(login_dev)))
		{
			qDebug() << "[ERROR] Не получается обновить messages в chats " << db.lastError().text();
			return;
		}
		
		db.commit();
	}
}

void sql_database::add_new_message_to_database(QString login, QString login_dev, QString message)
{
	QString new_message = get_new_messages(login_dev, login);
	
	if (new_message != "ERROR")
	{
		new_message += message + ";";
		
		str_requests = "UPDATE " + chats_table + " SET new_messages = ('%1') WHERE login = ('%2') and login_dev = ('%3');";
		if (!sql.exec(str_requests.arg(new_message).arg(login_dev).arg(login)))
		{
			qDebug() << "Не удается обновить new_message " << db.lastError().text();
			return;
		}
		
		db.commit();
	}
}

QString sql_database::get_new_messages(QString login, QString login_dev)
{
	str_requests = "SELECT new_messages FROM " + chats_table + " WHERE login = ('%1') and login_dev = ('%2');";
	if (!sql.exec(str_requests.arg(login).arg(login_dev)))
	{
		qDebug() << "[ERROR] Не удается получить new_message " << db.lastError().text();
		return "ERROR";
	}
	
	QSqlRecord get_data = sql.record();
    QString new_message;
    while (sql.next())
        new_message = sql.value(get_data.indexOf("new_messages")).toString();
	
	return new_message;
}

void sql_database::new_messages_to_all_messages(QString login, QString login_dev)
{
	QString new_message = get_new_messages(login, login_dev);
	
	str_requests = "SELECT messages FROM " + chats_table + " WHERE login = ('%1') and login_dev = ('%2');";
	if (!sql.exec(str_requests.arg(login).arg(login_dev)))
	{
		qDebug() << "[ERROR] Не удается получить message в chats " << db.lastError().text();
		return;
	}
	
	QSqlRecord get_data = sql.record();
    QString message;
    while (sql.next())
        message = sql.value(get_data.indexOf("messages")).toString();
	
	if (new_message.size() != 0)
	{
		message += new_message;
		
		str_requests = "UPDATE " + chats_table + " SET messages = ('%1') WHERE login = ('%2') and login_dev = ('%3');";
		if (!sql.exec(str_requests.arg(message).arg(login).arg(login_dev)))
		{
			qDebug() << "[ERROR] Не получается обновить messages в chats " << db.lastError().text();
			return;
		}
		
		db.commit();
	}
	
	str_requests = "UPDATE " + chats_table + " SET new_messages = ('%1') WHERE login = ('%2') and login_dev = ('%3')";
	if (!sql.exec(str_requests.arg("").arg(login).arg(login_dev)))
	{
		qDebug() << "[ERROR] Не удается очистить new_messages " << db.lastError().text();
		return;
	}
	
	db.commit();
}

int sql_database::check_new_messages(QString login)
{
	str_requests = "SELECT new_messages FROM " + chats_table + " WHERE login = ('%1');";
	if (!sql.exec(str_requests.arg(login)))
	{
		qDebug() << "[ERROR] Не удается получить все new_messages " << db.lastError().text();
		return -1;
	}
	
	QSqlRecord get_data = sql.record();
    QString new_message;
    while (sql.next())
        new_message += sql.value(get_data.indexOf("new_messages")).toString();
	
	if (new_message.size() > 0)
		return 1;
	else
		return 0;
}

void sql_database::delete_chat(QString login, QString login_dev)
{
	str_requests = "DELETE FROM " + chats_table + " WHERE (login = ('%1') and login_dev = ('%2')) or (login = ('%2') and login_dev = ('%1'));";
	if (!sql.exec(str_requests.arg(login).arg(login_dev)))
	{
		qDebug() << "[ERROR] Не удается удалить чаты пользователя " << db.lastError().text();
		return;
	}
	db.commit();

	str_requests = "SELECT dialogs FROM " + user_table + " WHERE login = ('%1');";
	if (!sql.exec(str_requests.arg(login)))
	{
		qDebug() << "[ERROR] Не удается удалить получить пользователя " << db.lastError().text();
		return;
	}
	
	QSqlRecord get_data = sql.record();
    QString dialogs;
	QString new_dialogs = "";
    while (sql.next())
        dialogs = sql.value(get_data.indexOf("dialogs")).toString();
	
	for (QString i : dialogs.split(";"))
	{
		if (i != login_dev)
			new_dialogs += i + ";";
	}
	
	str_requests = "UPDATE " + user_table + " SET dialogs = ('%1') WHERE login = ('%2');";
	if (!sql.exec(str_requests.arg(new_dialogs).arg(login)))
	{
		qDebug() << "[ERROR] Не удается обновить dialogs " << db.lastError().text();
		return;
	}
	db.commit();
	
	str_requests = "SELECT dialogs FROM " + user_table + " WHERE login = ('%1');";
	if (!sql.exec(str_requests.arg(login_dev)))
	{
		qDebug() << "[ERROR] Не удается удалить получить пользователя " << db.lastError().text();
		return;
	}
	
	get_data = sql.record();
	new_dialogs = "";
    while (sql.next())
        dialogs = sql.value(get_data.indexOf("dialogs")).toString();
	
	for (QString i : dialogs.split(";"))
	{
		if (i != login)
			new_dialogs += i + ";";
	}
	
	str_requests = "UPDATE " + user_table + " SET dialogs = ('%1') WHERE login = ('%2');";
	if (!sql.exec(str_requests.arg(new_dialogs).arg(login_dev)))
	{
		qDebug() << "[ERROR] Не удается обновить dialogs " << db.lastError().text();
		return;
	}
	db.commit();
}

void sql_database::delete_message(QString login, QString login_dev, QString message)
{
	QString messages = get_correspondence(login, login_dev);
	QString new_messages = "";
	
	for (QString i : messages.split(";"))
	{
		if (i.mid(1) != message and i != "")
			new_messages += i + ";";
	}
	
	str_requests = "UPDATE " + chats_table + " SET messages = ('%1') WHERE login = ('%2') and login_dev = ('%3');";
	if (!sql.exec(str_requests.arg(new_messages).arg(login).arg(login_dev)))
	{
		qDebug() << "[ERROR] Не удается обновить messages " << db.lastError().text();
		return;
	}
	db.commit();
	
	messages = get_correspondence(login_dev, login);
	new_messages = "";
	
	for (QString i : messages.split(";"))
	{
		if (i.mid(1) != message and i != "")
			new_messages += i + ";";
	}
	
	str_requests = "UPDATE " + chats_table + " SET messages = ('%1') WHERE login = ('%2') and login_dev = ('%3');";
	if (!sql.exec(str_requests.arg(new_messages).arg(login_dev).arg(login)))
	{
		qDebug() << "[ERROR] Не удается обновить messages " << db.lastError().text();
		return;
	}
	db.commit();
}
