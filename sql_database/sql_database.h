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
    void get_min_price_app();
    QString add_app_to_favorite(QString login, QString app_name);
    QString get_id_app(QString login, QString app_name);
    QString get_id_favorite_app();
    QList<QList<QString>> get_list_favorite_app();
    QList<QString> get_info_app_id(int app_id);
    QString check_app_favorite(QString app_id);
    QString delete_app_to_favorite(QString login, QString app_name);
    QString delete_app_star(QString login, QString app_name);
    QString delete_id_users_star_app(QString login, QString app_name, QString delete_id);
	void change_status_online(QString login);
	void add_client_id(int client, QString login);
	int get_id_socket_user(QString login);
	void add_id_server(int id_socket, QString login);
	int get_id_server(QString login);
	int get_status_online(QString login);
	void start_dialog(QString login, QString login_dev);
	void start_chat(QString login, QString login_dev);
	QString get_dialogs(QString login);
	QString get_correspondence(QString login, QString login_dev);
	void add_to_chat(QString login, QString login_dev, QString messages);
	void add_new_message_to_database(QString login, QString login_dev, QString message);
	QString get_new_messages(QString login, QString login_dev);
	void new_messages_to_all_messages(QString login, QString login_dev);
	int check_new_messages(QString login);
	void delete_chat(QString login, QString login_dev);
	void delete_message(QString login, QString login_dev, QString message);

private:
    QSqlDatabase db;
    QSqlQuery sql;
    QString user_table = "users";
    QString app_table = "apps";
	QString chats_table = "chats";
    QString str_requests;
};

#endif // SQL_DATABASE_H
