#ifndef CHAT_H
#define CHAT_H

#include <QDialog>
#include <QTime>
#include <QListWidgetItem>
#include <QMessageBox>
#include "client.h"
#include "thread_chat.h"
#include "thread_start.h"
#include <QThread>

namespace Ui {
class chat;
}

class chat : public QDialog
{
    Q_OBJECT

public:
    explicit chat(QString login_dev, QWidget *parent = nullptr);
    ~chat();
	
private slots:
	void on_pushButton_clicked();
	void on_pushButton_2_clicked();
	void add_message_to_listwidget(QString message);
	void add_message_from_server(QString message);
	void restore_chat();
	void restore_new_messages();
	void on_pushButton_4_clicked();
	void on_listWidget_itemClicked(QListWidgetItem *item);
	void on_pushButton_3_clicked();
	
private:
    Ui::chat *ui;
	Client client;
	sql_database database;
	//thread_chat read_msg;
	QThread thread_read;
	thread_start thread;
	QString login_dev, message_name;
	char buffer[BUFFER];
};

#endif // CHAT_H
