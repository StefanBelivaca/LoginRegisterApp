#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include<QMessageBox>

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
    // Salveaz datele utilizatorului într-un fișier local și afișați un mesaj de înregistrare reușită sau nu.
    QFile file("user_data.txt");
        if (file.open(QIODevice::Append | QIODevice::Text)) {
            QTextStream out(&file);
            out << username << ":" << password << ":" << email << "\n";
            file.close();
            QMessageBox::information(this, "Succes", "Înregistrare reușită!");
            ui->lineEditRegisterUsername->clear();
            ui->lineEditRegisterPassword->clear();
            ui->lineEditRegisterEmail->clear();

        } else {
            QMessageBox::warning(this, "Eroare", "Nu s-a putut salva înregistrarea.");
        }
}

void MainWindow::login() {
    QString username = ui->lineEditLoginUsername->text();
    QString password = ui->lineEditLoginPassword->text();
    // Verific autentificarea utilizatorului și afișați un mesaj corespunzător.
    // Deschid fișierul pentru citire
        QFile file("user_data.txt");
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            bool loginSuccessful = false;

            while (!in.atEnd()) {
                QString line = in.readLine();
                QStringList parts = line.split(":");
                if (parts.size() == 3) {  // Verifica dacă linia are date valide (username:password:email)
                    QString savedUsername = parts[0];
                    QString savedPassword = parts[1];

                    if (savedUsername == username && savedPassword == password) {
                        loginSuccessful = true;
                        break;
                    }
                }
            }

            file.close();

            if (loginSuccessful) {
                QMessageBox::information(this, "Succes", "Autentificare reușită!");
                ui->lineEditLoginUsername->clear();
                ui->lineEditLoginPassword->clear();
            } else {
                QMessageBox::warning(this, "Eroare", "Nume de utilizator sau parolă incorectă!");
            }
        } else {
            QMessageBox::warning(this, "Eroare", "Nu s-a putut deschide fișierul de date.");
        }

}



MainWindow::~MainWindow()
{
    delete ui;
}

