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
    QString register_new_user(const QString &user_login, const QString &user_password);
    QString check_login_user(const QString &user_login, const QString &user_password);
    QList<QString> get_info_for_profile(const QString &login);
    QString delete_user_from_db(const QString &login);
    QString save_change_in_profile(const QList<QString> &data_change);
	QString add_new_app(const QList<QString> &param_app, const QByteArray &image_bytes1, const QByteArray &image_bytes2,const QByteArray &image_bytes3);
    int generate_id(const QString &name_table);
    QList<QString> get_apps_for_list_profile(const QString &login);
    QList<QString> get_all_info_app_list_profile(const QList<QString> &param_app);
	QList<QByteArray> get_bytes_photo(const QString &app_name, const QString &login);
    QString delete_app_from_db(const int &app_id);
    QString save_change_app(const QList<QString> &data_change, const QByteArray &image_bytes1, const QByteArray &image_bytes2,const QByteArray &image_bytes3);
    QString get_count_apps(const QString &login);
    QString add_star_to_app(const QString &login, const QString &app_name);
    QString add_id_users_star_app(const QString &login, const QString &app_name, const QString &new_id);
    int get_id_user(const QString &login);
	int get_id_app(const QString &app_name, const QString &app_price, const QString &app_description, const QString &app_technologes);
    QString get_list_id_star_app(const QString &login, const QString &app_name);
    QString check_id_in_id_star_app(const QString &login, const QString &app_name, const QString &user_id);
    QString get_all_star_for_profile(const QString &login);
    void get_max_price_app();
    void get_min_price_app();
    QString add_app_to_favorite(const QString &login, const QString &app_name);
    QString get_id_app(const QString &login, const QString &app_name);
    QString get_id_favorite_app();
    QList<QList<QString>> get_list_favorite_app();
    QList<QString> get_info_app_id(const int &app_id);
    QString check_app_favorite(const QString &app_id);
    QString delete_app_to_favorite(const QString &login, const QString &app_name);
    QString delete_app_star(const QString &login, const QString &app_name);
    QString delete_id_users_star_app(const QString &login, const QString &app_name, const QString &delete_id);
	void change_status_online(const QString &login);
	void add_client_id(const int &client, const QString &login);
	int get_id_socket_user(const QString &login);
	int get_status_online(const QString &login);
	void start_dialog(const QString &login, const QString &login_dev);
	void start_chat(const QString &login, const QString &login_dev);
	QString get_dialogs(const QString &login);
	QString get_correspondence(const QString &login, const QString &login_dev);
	void add_to_chat(const QString &login, const QString &login_dev, const QString &messages);
	void add_new_message_to_database(const QString &login, const QString &login_dev, const QString &message);
	QString get_new_messages(const QString &login, const QString &login_dev);
	void new_messages_to_all_messages(const QString &login, const QString &login_dev);
	int check_new_messages(const QString &login);
	int check_new_message_in_chat(const QString &login_dev);
	void delete_chat(const QString &login, const QString &login_dev);
	void delete_message(const QString &login, const QString &login_dev, const QString &message);
	void add_app_photo(const QByteArray &image_bytes);

private:
    QSqlDatabase db;
    QSqlQuery sql;
    QString user_table = "users";
    QString app_table = "apps";
	QString chats_table = "chats";
    QString str_requests;
};

#endif // SQL_DATABASE_H
