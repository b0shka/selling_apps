#ifndef CHAT_H
#define CHAT_H

#include <QDialog>
#include <QTime>
#include <QListWidgetItem>
#include <QMessageBox>
#include <QMouseEvent>
#include <QPoint>
#include <QThread>
#include "thread_add_info.h"
//#include "thread_chat.h"
#include "thread_online.h"
//#include "thread_send.h"
#include "send_message.h"
#include "client.h"

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
	void on_pushButton_4_clicked();
	void on_pushButton_8_clicked();
	void on_pushButton_9_clicked();
	void on_lineEdit_3_returnPressed();
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
	void add_message_to_listwidget(QString message);
	void add_message_from_server(QString message);
	void restore_chat(QString all_message);
	void restore_new_messages(QString new_messages);
	void on_listWidget_itemClicked(QListWidgetItem *item);
	void add_online_in_chat(int status);
	
private:
    Ui::chat *ui;
	Client client;
	sql_database database;
	QString login_dev, message_name;
	QPoint m_mousePoint;
	//QThread thread_read, thread_send_msg;
	QThread thread_button, thread_info, thread_signal_msg, thread_send_msg;
	thread_add_info info;
	//thread_chat thread;
	thread_online online;
	//thread_send send;
	send_message read_msg;
	send_message send_msg;
};

#endif // CHAT_H
