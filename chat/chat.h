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
    explicit chat(QString login_dev, QWidget *parent = nullptr);
    ~chat();
	void add_message_to_listwidget(QString message);
	
private slots:
	void on_pushButton_clicked();
	void on_pushButton_2_clicked();
	
private:
    Ui::chat *ui;
	Client client;
	sql_database database;
	thread_chat read_msg;
};

#endif // CHAT_H
