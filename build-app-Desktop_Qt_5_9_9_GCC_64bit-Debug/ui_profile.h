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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_profile
{
public:
    QFrame *frame;
    QLabel *label_9;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label_7;
    QLabel *label_5;
    QFrame *frame_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_13;

    void setupUi(QDialog *profile)
    {
        if (profile->objectName().isEmpty())
            profile->setObjectName(QStringLiteral("profile"));
        profile->resize(318, 433);
        profile->setMinimumSize(QSize(3, 433));
        profile->setMaximumSize(QSize(328, 433));
        profile->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(profile);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(5, 5, 311, 426));
        frame->setMinimumSize(QSize(311, 426));
        frame->setMaximumSize(QSize(311, 426));
        frame->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 5px;\n"
"background-color: #2a2a2a;\n"
"color: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_9 = new QLabel(frame);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(180, 245, 86, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_9->setFont(font);
        label_9->setStyleSheet(QLatin1String("font-size: 16px;\n"
"color: white;"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(215, 210, 86, 21));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 16px;\n"
"	background-color: #2a2a2a;\n"
"	border: none;\n"
"	text-align: left;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"	color: silver;\n"
"}"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 385, 131, 31));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 14px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 120, 181, 31));
        lineEdit_2->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(15, 40, 101, 21));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("font-size: 18px;\n"
"color: white;"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(265, 385, 36, 31));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"	padding-bottom: 3px;\n"
"	font-size: 20px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(15, 85, 61, 21));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 160, 181, 31));
        lineEdit_3->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(245, 40, 56, 21));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("font-size: 16px;\n"
"color: white;"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_10 = new QLabel(frame);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(15, 245, 161, 21));
        label_10->setFont(font);
        label_10->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 40, 31, 21));
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("font-size: 16px;\n"
"color: white;"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 385, 116, 31));
        pushButton->setStyleSheet(QLatin1String("font-size: 14px;\n"
"color: black;\n"
"background-color: #ffb0be;\n"
"border-radius: 5px;"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(15, 165, 71, 21));
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 80, 181, 31));
        lineEdit->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(15, 210, 196, 21));
        label_7->setFont(font);
        label_7->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(15, 125, 61, 21));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(0, 0, 311, 26));
        frame_5->setStyleSheet(QLatin1String("QFrame{\n"
"	border-bottom-left-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
"	background-color: #404040;\n"
"}"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        pushButton_8 = new QPushButton(frame_5);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(290, 5, 16, 16));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 20px;\n"
"	background-color: #f73643;\n"
"	border-radius: 8px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #d63a44;\n"
"	color: black;\n"
"}"));
        pushButton_9 = new QPushButton(frame_5);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(265, 5, 16, 16));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
"	padding-bottom: 4px;\n"
"	font-size: 20px;\n"
"	background-color: #47fc65;\n"
"	border-radius: 8px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #49cc5f;\n"
"}"));
        label_13 = new QLabel(frame_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(130, 5, 56, 16));
        label_13->setFont(font);
        label_13->setStyleSheet(QLatin1String("font-size: 14px;\n"
"color: white;"));

        retranslateUi(profile);

        QMetaObject::connectSlotsByName(profile);
    } // setupUi

    void retranslateUi(QDialog *profile)
    {
        profile->setWindowTitle(QApplication::translate("profile", "Profile", Q_NULLPTR));
        label_9->setText(QString());
        pushButton_4->setText(QString());
        pushButton_2->setText(QApplication::translate("profile", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", Q_NULLPTR));
        label->setText(QApplication::translate("profile", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("profile", "\342\215\207", Q_NULLPTR));
        label_4->setText(QApplication::translate("profile", "\320\230\320\274\321\217", Q_NULLPTR));
        label_2->setText(QString());
        label_10->setText(QApplication::translate("profile", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\267\320\262\321\221\320\267\320\264", Q_NULLPTR));
        label_3->setText(QApplication::translate("profile", "id:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("profile", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        label_6->setText(QApplication::translate("profile", "\320\235\320\276\320\274\320\265\321\200", Q_NULLPTR));
        label_7->setText(QApplication::translate("profile", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274", Q_NULLPTR));
        label_5->setText(QApplication::translate("profile", "\320\237\320\276\321\207\321\202\320\260", Q_NULLPTR));
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        label_13->setText(QApplication::translate("profile", "Profile", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class profile: public Ui_profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
