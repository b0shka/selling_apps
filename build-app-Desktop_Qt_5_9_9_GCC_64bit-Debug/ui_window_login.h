/********************************************************************************
** Form generated from reading UI file 'window_login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_LOGIN_H
#define UI_WINDOW_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_window_login
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QLabel *label_3;

    void setupUi(QDialog *window_login)
    {
        if (window_login->objectName().isEmpty())
            window_login->setObjectName(QStringLiteral("window_login"));
        window_login->resize(404, 270);
        window_login->setMinimumSize(QSize(404, 270));
        window_login->setMaximumSize(QSize(404, 270));
        window_login->setStyleSheet(QLatin1String("color: white;\n"
"background-color: #2a2a2a;"));
        window_login->setModal(false);
        pushButton = new QPushButton(window_login);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(135, 155, 136, 31));
        pushButton->setStyleSheet(QLatin1String("background-color: #404040;\n"
"border-radius: 5px;\n"
"padding:2px 5px;\n"
"font-size: 14px;\n"
"color: white;"));
        label = new QLabel(window_login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 25, 171, 26));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(true);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("font-size: 22px;"));
        lineEdit = new QLineEdit(window_login);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 70, 226, 31));
        lineEdit->setAutoFillBackground(false);
        lineEdit->setStyleSheet(QLatin1String("background-color: #404040;\n"
"border-radius: 5px;\n"
"padding:2px 5px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;"));
        lineEdit->setClearButtonEnabled(true);
        lineEdit_2 = new QLineEdit(window_login);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 110, 226, 31));
        lineEdit_2->setStyleSheet(QLatin1String("background-color: #404040;\n"
"border-radius: 5px;\n"
"padding:2px 5px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_2->setClearButtonEnabled(true);
        pushButton_2 = new QPushButton(window_login);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 195, 186, 31));
        pushButton_2->setStyleSheet(QLatin1String("background-color: #404040;\n"
"border-radius: 5px;\n"
"padding:2px 5px;\n"
"font-size: 14px;\n"
"color: white;"));
        label_3 = new QLabel(window_login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 240, 366, 21));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("font-size: 14px;"));
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(window_login);

        QMetaObject::connectSlotsByName(window_login);
    } // setupUi

    void retranslateUi(QDialog *window_login)
    {
        window_login->setWindowTitle(QApplication::translate("window_login", "Login", Q_NULLPTR));
        pushButton->setText(QApplication::translate("window_login", "\320\222\320\276\320\271\321\202\320\270", Q_NULLPTR));
        label->setText(QApplication::translate("window_login", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("window_login", "\320\233\320\276\320\263\320\270\320\275", Q_NULLPTR));
        lineEdit_2->setPlaceholderText(QApplication::translate("window_login", "\320\237\320\260\321\200\320\276\320\273\321\214", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("window_login", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("window_login", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\320\265 \320\277\320\276\320\273\321\217 \320\260\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\320\270", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class window_login: public Ui_window_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_LOGIN_H
