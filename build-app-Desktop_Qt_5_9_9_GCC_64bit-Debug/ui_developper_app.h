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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_developper_app
{
public:
    QFrame *frame;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_9;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_13;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_12;
    QLabel *label_8;
    QPushButton *pushButton_3;
    QLabel *label_11;
    QFrame *frame_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_10;

    void setupUi(QDialog *developper_app)
    {
        if (developper_app->objectName().isEmpty())
            developper_app->setObjectName(QStringLiteral("developper_app"));
        developper_app->resize(319, 403);
        developper_app->setMinimumSize(QSize(4, 403));
        developper_app->setMaximumSize(QSize(3232, 403));
        developper_app->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(developper_app);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(5, 5, 311, 396));
        frame->setMinimumSize(QSize(311, 396));
        frame->setMaximumSize(QSize(311, 396));
        frame->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 5px;\n"
"background-color: #2a2a2a;\n"
"color: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 200, 76, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 16px;\n"
"	background-color: #2a2a2a;\n"
"	border: none;\n"
"	text-align: left;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"	color: silver;\n"
"}"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(105, 80, 196, 21));
        label_7->setFont(font);
        label_7->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(245, 40, 56, 21));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("font-size: 16px;\n"
"color: white;"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_9 = new QLabel(frame);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(105, 160, 196, 21));
        label_9->setFont(font);
        label_9->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 40, 31, 21));
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("font-size: 16px;\n"
"color: white;"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(15, 80, 61, 21));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        label_13 = new QLabel(frame);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(15, 235, 201, 21));
        label_13->setFont(font);
        label_13->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(15, 120, 61, 21));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(15, 40, 96, 21));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("font-size: 18px;\n"
"color: white;"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(15, 160, 71, 21));
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        label_12 = new QLabel(frame);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(220, 235, 76, 21));
        label_12->setFont(font);
        label_12->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(105, 120, 196, 21));
        label_8->setFont(font);
        label_8->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 350, 41, 36));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 30px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        label_11 = new QLabel(frame);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(15, 200, 201, 21));
        label_11->setFont(font);
        label_11->setStyleSheet(QLatin1String("font-size: 15px;\n"
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
        label_10 = new QLabel(frame_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(85, 5, 141, 16));
        label_10->setFont(font);
        label_10->setStyleSheet(QLatin1String("font-size: 14px;\n"
"color: white;"));

        retranslateUi(developper_app);

        QMetaObject::connectSlotsByName(developper_app);
    } // setupUi

    void retranslateUi(QDialog *developper_app)
    {
        developper_app->setWindowTitle(QApplication::translate("developper_app", "Dialog", Q_NULLPTR));
        pushButton_2->setText(QString());
        label_7->setText(QString());
        label_2->setText(QString());
        label_9->setText(QString());
        label_3->setText(QApplication::translate("developper_app", "id:", Q_NULLPTR));
        label_4->setText(QApplication::translate("developper_app", "\320\230\320\274\321\217:", Q_NULLPTR));
        label_13->setText(QApplication::translate("developper_app", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\267\320\262\321\221\320\267\320\264:", Q_NULLPTR));
        label_5->setText(QApplication::translate("developper_app", "\320\237\320\276\321\207\321\202\320\260:", Q_NULLPTR));
        label->setText(QApplication::translate("developper_app", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214", Q_NULLPTR));
        label_6->setText(QApplication::translate("developper_app", "\320\235\320\276\320\274\320\265\321\200:", Q_NULLPTR));
        label_12->setText(QString());
        label_8->setText(QString());
        pushButton_3->setText(QApplication::translate("developper_app", "\342\234\211", Q_NULLPTR));
        label_11->setText(QApplication::translate("developper_app", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274:", Q_NULLPTR));
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        label_10->setText(QApplication::translate("developper_app", "Profile developer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class developper_app: public Ui_developper_app {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVELOPPER_APP_H
