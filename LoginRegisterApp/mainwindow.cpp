#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include<QMessageBox>
#include <QSqlDatabase>
#include <QtSql>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{    
    ui->setupUi(this);
    connect(ui->Login, &QPushButton::clicked, this, &MainWindow::login);
    connect(ui->Register, &QPushButton::clicked, this, &MainWindow::registerUser);
}

void MainWindow::registerUser() {
    QString username = ui->lineEditRegisterUsername->text();
    QString password = ui->lineEditRegisterPassword->text();
    QString email = ui->lineEditRegisterEmail->text();

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/thest/OneDrive/Desktop/LoginRegisterApp/SQLite(test)/first.db");

    if (db.open()) {
        QSqlQuery query;
        query.prepare("INSERT INTO users (username, password, email) VALUES (:username, :password, :email)");
        query.bindValue(":username", username);
        query.bindValue(":password", password);
        query.bindValue(":email", email);

        if (query.exec()) {
            QMessageBox::information(this, "Succes", "Înregistrare reușită!");
            ui->lineEditRegisterUsername->clear();
            ui->lineEditRegisterPassword->clear();
            ui->lineEditRegisterEmail->clear();
        } else {
            QMessageBox::warning(this, "Eroare", "Nu s-a putut salva înregistrarea.");
        }
    } else {
        QMessageBox::warning(this, "Eroare", "Nu s-a putut deschide baza de date.");
    }
}

void MainWindow::login() {
    QString username = ui->lineEditLoginUsername->text();
    QString password = ui->lineEditLoginPassword->text();

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/thest/OneDrive/Desktop/LoginRegisterApp/SQLite(test)/first.db");

    if (db.open()) {
        QSqlQuery query;
        query.prepare("SELECT * FROM users WHERE username = :username AND password = :password");
        query.bindValue(":username", username);
        query.bindValue(":password", password);

        if (query.exec() && query.next()) {
            QMessageBox::information(this, "Succes", "Autentificare reușită!");
            ui->lineEditLoginUsername->clear();
            ui->lineEditLoginPassword->clear();
        } else {
            QMessageBox::warning(this, "Eroare", "Nume de utilizator sau parolă incorectă!");
        }
    } else {
        QMessageBox::warning(this, "Eroare", "Nu s-a putut deschide baza de date.");
    }
}



MainWindow::~MainWindow()
{
    delete ui;
}

