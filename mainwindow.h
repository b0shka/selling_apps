#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>

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

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
    void add_name_app_from_db();
    void search_result(QString search);
    int check_error(QString search, QString name_main);
    int check_word_in_word(QString search, QString name_main);
    void add_search_result(vector<QString> list_result);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
