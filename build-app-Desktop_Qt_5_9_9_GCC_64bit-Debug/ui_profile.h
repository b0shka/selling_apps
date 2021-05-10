/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

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

class Ui_profile
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *profile)
    {
        if (profile->objectName().isEmpty())
            profile->setObjectName(QStringLiteral("profile"));
        profile->resize(326, 404);
        profile->setStyleSheet(QStringLiteral("background-color: #2a2a2a;"));
        label = new QLabel(profile);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(15, 20, 196, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("font-size: 18px;\n"
"color: white;"));
        pushButton = new QPushButton(profile);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 365, 146, 31));
        pushButton->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: black;\n"
"background-color: #ffb0be;\n"
"border-radius: 5px;"));
        label_2 = new QLabel(profile);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 20, 56, 21));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("font-size: 16px;\n"
"color: white;"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3 = new QLabel(profile);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(225, 20, 31, 21));
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("font-size: 16px;\n"
"color: white;"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_2 = new QPushButton(profile);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 325, 176, 31));
        pushButton_2->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        lineEdit = new QLineEdit(profile);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 60, 186, 31));
        lineEdit->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        label_4 = new QLabel(profile);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 65, 61, 21));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        label_5 = new QLabel(profile);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 105, 61, 21));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        lineEdit_2 = new QLineEdit(profile);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 100, 186, 31));
        lineEdit_2->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        lineEdit_3 = new QLineEdit(profile);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 140, 186, 31));
        lineEdit_3->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        label_6 = new QLabel(profile);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 145, 71, 21));
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        pushButton_3 = new QPushButton(profile);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(165, 365, 156, 31));
        pushButton_3->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        pushButton_4 = new QPushButton(profile);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(195, 325, 126, 31));
        pushButton_4->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));

        retranslateUi(profile);

        QMetaObject::connectSlotsByName(profile);
    } // setupUi

    void retranslateUi(QDialog *profile)
    {
        profile->setWindowTitle(QApplication::translate("profile", "Profile", Q_NULLPTR));
        label->setText(QApplication::translate("profile", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214", Q_NULLPTR));
        pushButton->setText(QApplication::translate("profile", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\260\320\272\320\272\320\260\321\203\320\275\321\202", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("profile", "id:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("profile", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", Q_NULLPTR));
        label_4->setText(QApplication::translate("profile", "Login", Q_NULLPTR));
        label_5->setText(QApplication::translate("profile", "Email", Q_NULLPTR));
        label_6->setText(QApplication::translate("profile", "Number", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("profile", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\260", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("profile", "\320\234\320\276\320\270 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class profile: public Ui_profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
