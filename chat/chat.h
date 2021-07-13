#ifndef CHAT_H
#define CHAT_H

#include <QDialog>
#include <QTime>
#include <QListWidgetItem>
#include <QMessageBox>
#include <QMouseEvent>
#include <QPoint>
#include <QThread>
#include "thread_in_chat.h"
#include "client.h"
#include "../popup/popup.h"
#include "../main_data/logger.h"

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
	popup *popUp;
	Client client;
	sql_database database;
	QString login_dev, message_name;
	QPoint m_mousePoint;
	int status_read_new_msg = 0;
	QThread thread_button, thread_info, thread_signal_msg, thread_send_msg;
	thread_in_chat read_msg, send_msg, info, online;
};

#endif // CHAT_H
