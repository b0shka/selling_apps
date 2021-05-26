#ifndef CHAT_H
#define CHAT_H

#include <QDialog>
#include <QTime>
#include <QListWidgetItem>
#include <QMessageBox>
#include "client.h"
#include "thread_chat.h"

namespace Ui {
class chat;
}

class chat : public QDialog
{
    Q_OBJECT

public:
    explicit chat(QWidget *parent = nullptr);
    ~chat();
	void start(QString login_dev);
	void add_message_from_server(QString message);
	void read_message();
	
private slots:
	void on_pushButton_clicked();
	void on_pushButton_2_clicked();
	void add_message_to_listwidget(QString message);
	void restore_chat();
	void restore_new_messages();
	void on_pushButton_4_clicked();
	void on_listWidget_itemClicked(QListWidgetItem *item);
	
private:
    Ui::chat *ui;
	Client client;
	sql_database database;
	thread_chat read_msg;
	QString login_dev, message_name;
	char buffer[BUFFER];
};

#endif // CHAT_H
