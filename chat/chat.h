#ifndef CHAT_H
#define CHAT_H

#include <QDialog>
#include <QTime>
#include <QListWidgetItem>
#include "client.h"
#include "../developper_app/developper_app.h"
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
	
private slots:
	void on_pushButton_clicked();
	void on_pushButton_2_clicked();
	void add_message_to_listwidget(QString message);
	
private:
    Ui::chat *ui;
	Client client;
	sql_database database;
	thread_chat read_msg;
	QString login_dev;
};

#endif // CHAT_H
