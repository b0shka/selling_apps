/********************************************************************************
** Form generated from reading UI file 'developper_app.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVELOPPER_APP_H
#define UI_DEVELOPPER_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_developper_app
{
public:
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_9;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *developper_app)
    {
        if (developper_app->objectName().isEmpty())
            developper_app->setObjectName(QStringLiteral("developper_app"));
        developper_app->resize(330, 419);
        developper_app->setStyleSheet(QLatin1String("color: white;\n"
"background-color: #2a2a2a;"));
        label_5 = new QLabel(developper_app);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(25, 100, 61, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        label_3 = new QLabel(developper_app);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 15, 31, 21));
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("font-size: 16px;\n"
"color: white;"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(developper_app);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(265, 15, 56, 21));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("font-size: 16px;\n"
"color: white;"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label = new QLabel(developper_app);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 15, 96, 21));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("font-size: 18px;\n"
"color: white;"));
        label_4 = new QLabel(developper_app);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(25, 60, 61, 21));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        label_6 = new QLabel(developper_app);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(25, 140, 71, 21));
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        pushButton = new QPushButton(developper_app);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(175, 380, 146, 31));
        pushButton->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        pushButton_2 = new QPushButton(developper_app);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 380, 156, 31));
        pushButton_2->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        pushButton_3 = new QPushButton(developper_app);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 340, 311, 31));
        pushButton_3->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        label_9 = new QLabel(developper_app);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(110, 140, 206, 21));
        label_9->setFont(font);
        label_9->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        label_7 = new QLabel(developper_app);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(110, 60, 206, 21));
        label_7->setFont(font);
        label_7->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        label_8 = new QLabel(developper_app);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(110, 100, 206, 21));
        label_8->setFont(font);
        label_8->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));

        retranslateUi(developper_app);

        QMetaObject::connectSlotsByName(developper_app);
    } // setupUi

    void retranslateUi(QDialog *developper_app)
    {
        developper_app->setWindowTitle(QApplication::translate("developper_app", "Dialog", Q_NULLPTR));
        label_5->setText(QApplication::translate("developper_app", "Email:", Q_NULLPTR));
        label_3->setText(QApplication::translate("developper_app", "id:", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QApplication::translate("developper_app", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214", Q_NULLPTR));
        label_4->setText(QApplication::translate("developper_app", "Login:", Q_NULLPTR));
        label_6->setText(QApplication::translate("developper_app", "Number:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("developper_app", "\320\237\320\276\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\267\320\262\320\265\320\267\320\264\321\203", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("developper_app", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("developper_app", "\320\235\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272\321\203", Q_NULLPTR));
        label_9->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class developper_app: public Ui_developper_app {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVELOPPER_APP_H
