/********************************************************************************
** Form generated from reading UI file 'window_registration.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_REGISTRATION_H
#define UI_WINDOW_REGISTRATION_H

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

class Ui_window_registration
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *window_registration)
    {
        if (window_registration->objectName().isEmpty())
            window_registration->setObjectName(QStringLiteral("window_registration"));
        window_registration->resize(404, 247);
        window_registration->setMinimumSize(QSize(404, 247));
        window_registration->setMaximumSize(QSize(404, 247));
        window_registration->setStyleSheet(QLatin1String("color: white;\n"
"background-color: #2a2a2a;"));
        pushButton = new QPushButton(window_registration);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 170, 151, 31));
        pushButton->setStyleSheet(QLatin1String("background-color: #404040;\n"
"border-radius: 5px;\n"
"padding:2px 5px;\n"
"font-size: 14px;\n"
"color: white;"));
        label = new QLabel(window_registration);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(135, 40, 146, 26));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(true);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("font-size: 22px;\n"
"letter-spacing: 5px;"));
        lineEdit = new QLineEdit(window_registration);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 85, 226, 31));
        lineEdit->setAutoFillBackground(false);
        lineEdit->setStyleSheet(QLatin1String("background-color: #404040;\n"
"border-radius: 5px;\n"
"padding:2px 5px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;"));
        lineEdit->setClearButtonEnabled(true);
        lineEdit_2 = new QLineEdit(window_registration);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 125, 226, 31));
        lineEdit_2->setStyleSheet(QLatin1String("background-color: #404040;\n"
"border-radius: 5px;\n"
"padding:2px 5px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_2->setClearButtonEnabled(true);

        retranslateUi(window_registration);

        QMetaObject::connectSlotsByName(window_registration);
    } // setupUi

    void retranslateUi(QDialog *window_registration)
    {
        window_registration->setWindowTitle(QApplication::translate("window_registration", "Registration", Q_NULLPTR));
        pushButton->setText(QApplication::translate("window_registration", "\320\227\320\260\321\200\320\265\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", Q_NULLPTR));
        label->setText(QApplication::translate("window_registration", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("window_registration", "\320\233\320\276\320\263\320\270\320\275", Q_NULLPTR));
        lineEdit_2->setPlaceholderText(QApplication::translate("window_registration", "\320\237\320\260\321\200\320\276\320\273\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class window_registration: public Ui_window_registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_REGISTRATION_H
