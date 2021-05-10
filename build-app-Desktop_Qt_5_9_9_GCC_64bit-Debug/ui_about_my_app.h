/********************************************************************************
** Form generated from reading UI file 'about_my_app.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_MY_APP_H
#define UI_ABOUT_MY_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_about_my_app
{
public:
    QPushButton *pushButton_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *about_my_app)
    {
        if (about_my_app->objectName().isEmpty())
            about_my_app->setObjectName(QStringLiteral("about_my_app"));
        about_my_app->resize(336, 410);
        about_my_app->setStyleSheet(QLatin1String("background-color: #2a2a2a;\n"
"color: white;\n"
""));
        pushButton_2 = new QPushButton(about_my_app);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 370, 211, 31));
        pushButton_2->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        label = new QLabel(about_my_app);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(15, 65, 96, 21));
        label->setStyleSheet(QStringLiteral("font-size: 18px;"));
        lineEdit = new QLineEdit(about_my_app);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 60, 211, 31));
        lineEdit->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        label_2 = new QLabel(about_my_app);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(15, 20, 296, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("font-size: 22px;"));
        lineEdit_2 = new QLineEdit(about_my_app);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 100, 211, 31));
        lineEdit_2->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        label_3 = new QLabel(about_my_app);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(15, 105, 61, 21));
        label_3->setStyleSheet(QStringLiteral("font-size: 18px;"));
        label_4 = new QLabel(about_my_app);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(15, 145, 96, 21));
        label_4->setStyleSheet(QStringLiteral("font-size: 18px;"));
        textEdit = new QTextEdit(about_my_app);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(120, 140, 211, 221));
        textEdit->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        pushButton = new QPushButton(about_my_app);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 370, 101, 31));
        pushButton->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: black;\n"
"background-color: #ffb0be;\n"
"border-radius: 5px;"));

        retranslateUi(about_my_app);

        QMetaObject::connectSlotsByName(about_my_app);
    } // setupUi

    void retranslateUi(QDialog *about_my_app)
    {
        about_my_app->setWindowTitle(QApplication::translate("about_my_app", "Dialog", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("about_my_app", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", Q_NULLPTR));
        label->setText(QApplication::translate("about_my_app", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", Q_NULLPTR));
        label_2->setText(QApplication::translate("about_my_app", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", Q_NULLPTR));
        label_3->setText(QApplication::translate("about_my_app", "\320\246\320\265\320\275\320\260", Q_NULLPTR));
        label_4->setText(QApplication::translate("about_my_app", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", Q_NULLPTR));
        pushButton->setText(QApplication::translate("about_my_app", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class about_my_app: public Ui_about_my_app {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_MY_APP_H
