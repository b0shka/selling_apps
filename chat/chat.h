#ifndef CHAT_H
#define CHAT_H

#include <QDialog>
#include <QTime>
#include <QListWidgetItem>
#include <QMessageBox>
#include <QMouseEvent>
#include <QPoint>
#include "client.h"
#include "thread_add_info.h"
#include "thread_chat.h"
#include "thread_online.h"

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
	void on_pushButton_3_clicked();
	void on_pushButton_4_clicked();
	void on_pushButton_8_clicked();
	void on_pushButton_9_clicked();
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
	void add_message_to_listwidget(QString message);
	void add_message_from_server(QString message);
	void restore_chat();
	void restore_new_messages();
	void on_listWidget_itemClicked(QListWidgetItem *item);
	void add_online_in_chat(int status);
	
private:
    Ui::chat *ui;
	Client client;
	sql_database database;
	QString login_dev, message_name;
	QPoint m_mousePoint;
	QThread thread_read, thread_button, thread_info;
	thread_add_info info;
	thread_chat thread;
	thread_online online;
};

#endif // CHAT_H
