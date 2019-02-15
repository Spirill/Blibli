#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tcpServer = new QTcpServer(this);
    clientConnection = new QTcpSocket(this);

    QObject::connect(tcpServer,SIGNAL(newConnection()),this,SLOT(connection()));
    QObject::connect(clientConnection,SIGNAL(readyRead()),this, SLOT(lecture()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int port  = 4000;
    tcpServer->listen(QHostAddress::Any,4000);
   clientConnection = tcpServer->nextPendingConnection();
        // si on reçoit des données, le slot lecture() est appelé
}

void MainWindow::connection()
{
    ui->textEdit->setText("marche");
}

void MainWindow::lecture()
{
    QByteArray ligne;
    ligne = clientConnection->readAll();// on lit une ligne
    ui->textEdit->append(ligne.data());
     if (ligne == "livre")
     {
         ui->textEdit->setText("okay");
     }
     else
     {
       ui->textEdit->setText("false");
     }

}
