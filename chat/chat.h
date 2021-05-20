#ifndef CHAT_H
#define CHAT_H

#include <QDialog>
#include <QTime>
#include <QListWidgetItem>
#include <QThread>
#include "client.h"
#include "../developper_app/developper_app.h"

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
	void read_message();
	
private:
    Ui::chat *ui;
	Client client;
	sql_database database;
};

#endif // CHAT_H
