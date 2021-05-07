#include "about_app.h"
#include "ui_about_app.h"

about_app::about_app(QList<QString> param_app, QWidget *parent) : QDialog(parent), ui(new Ui::about_app)
{
    ui->setupUi(this);
    ui->label->setText(param_app[0]);
    ui->label_3->setText(param_app[1] + " руб");
    ui->label_6->setText(param_app[2]);
    ui->pushButton->setText(param_app[3]);
}

about_app::~about_app()
{
    delete ui;
}

void about_app::on_pushButton_clicked()
{
    developper_app profile_developer(ui->pushButton->text());
    profile_developer.setModal(true);
    profile_developer.exec();
}
