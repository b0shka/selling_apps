#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QKeyEvent>
#include "about_app/about_app.h"
#include "sql_database/sql_database.h"
#include "../main_data/data.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    // для работы с авторизацией
    void change_mainwindow();

private slots:
    // функции для кнопок
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
    void keyPressEvent(QKeyEvent *event);
    void on_lineEdit_returnPressed();

    // функции для работы с записями и поиском
    void get_name_app_from_db();
    void search_result(QString search);
    int check_error(QString search, QString name_main);
    int check_word_in_word(QString search, QString name_main);
    int check_word_in_word_no_name(QString search, QString name_main);
    void add_apps_to_listWidget(QList<QList<QString>> list_result);

private:
    Ui::MainWindow *ui;
    sql_database database;
};
#endif // MAINWINDOW_H
