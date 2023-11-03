/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditRegisterUsername;
    QLineEdit *lineEditRegisterPassword;
    QLineEdit *lineEditRegisterEmail;
    QPushButton *Register;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEditLoginUsername;
    QLineEdit *lineEditLoginPassword;
    QPushButton *Login;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(754, 520);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 50, 351, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 150, 261, 151));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lineEditRegisterUsername = new QLineEdit(widget);
        lineEditRegisterUsername->setObjectName("lineEditRegisterUsername");

        verticalLayout->addWidget(lineEditRegisterUsername);

        lineEditRegisterPassword = new QLineEdit(widget);
        lineEditRegisterPassword->setObjectName("lineEditRegisterPassword");

        verticalLayout->addWidget(lineEditRegisterPassword);

        lineEditRegisterEmail = new QLineEdit(widget);
        lineEditRegisterEmail->setObjectName("lineEditRegisterEmail");

        verticalLayout->addWidget(lineEditRegisterEmail);


        verticalLayout_2->addLayout(verticalLayout);

        Register = new QPushButton(widget);
        Register->setObjectName("Register");

        verticalLayout_2->addWidget(Register);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 50, 351, 31));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(80, 190, 241, 101));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEditLoginUsername = new QLineEdit(widget1);
        lineEditLoginUsername->setObjectName("lineEditLoginUsername");

        verticalLayout_3->addWidget(lineEditLoginUsername);

        lineEditLoginPassword = new QLineEdit(widget1);
        lineEditLoginPassword->setObjectName("lineEditLoginPassword");

        verticalLayout_3->addWidget(lineEditLoginPassword);

        Login = new QPushButton(widget1);
        Login->setObjectName("Login");

        verticalLayout_3->addWidget(Login);


        horizontalLayout->addWidget(groupBox_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Register", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        lineEditRegisterUsername->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lineEditRegisterPassword->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        lineEditRegisterEmail->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        Register->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        lineEditLoginUsername->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lineEditLoginPassword->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        Login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
