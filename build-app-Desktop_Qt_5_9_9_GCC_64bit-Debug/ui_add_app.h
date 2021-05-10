/********************************************************************************
** Form generated from reading UI file 'add_app.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_APP_H
#define UI_ADD_APP_H

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

class Ui_add_app
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *textEdit;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *add_app)
    {
        if (add_app->objectName().isEmpty())
            add_app->setObjectName(QStringLiteral("add_app"));
        add_app->resize(336, 400);
        add_app->setStyleSheet(QLatin1String("color: white;\n"
"background-color: #2a2a2a;"));
        pushButton = new QPushButton(add_app);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(215, 360, 111, 31));
        pushButton->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        lineEdit = new QLineEdit(add_app);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 55, 196, 31));
        lineEdit->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        label = new QLabel(add_app);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(15, 15, 251, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("font-size: 18px;"));
        label_2 = new QLabel(add_app);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 91, 21));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("font-size: 15px;"));
        lineEdit_2 = new QLineEdit(add_app);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 240, 196, 31));
        lineEdit_2->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        label_3 = new QLabel(add_app);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 105, 91, 21));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("font-size: 15px;"));
        label_4 = new QLabel(add_app);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 245, 91, 21));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("font-size: 15px;"));
        textEdit = new QTextEdit(add_app);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(130, 100, 191, 131));
        textEdit->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        label_5 = new QLabel(add_app);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(15, 375, 186, 17));
        label_6 = new QLabel(add_app);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 285, 106, 21));
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral("font-size: 15px;"));
        lineEdit_3 = new QLineEdit(add_app);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 280, 196, 31));
        lineEdit_3->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));

        retranslateUi(add_app);

        QMetaObject::connectSlotsByName(add_app);
    } // setupUi

    void retranslateUi(QDialog *add_app)
    {
        add_app->setWindowTitle(QApplication::translate("add_app", "Add app", Q_NULLPTR));
        pushButton->setText(QApplication::translate("add_app", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", Q_NULLPTR));
        label->setText(QApplication::translate("add_app", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", Q_NULLPTR));
        label_2->setText(QApplication::translate("add_app", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", Q_NULLPTR));
        label_3->setText(QApplication::translate("add_app", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", Q_NULLPTR));
        label_4->setText(QApplication::translate("add_app", "\320\246\320\265\320\275\320\260", Q_NULLPTR));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("add_app", "\320\242\320\265\321\205\320\275\320\276\320\273\320\276\320\263\320\270\320\270", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add_app: public Ui_add_app {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_APP_H
