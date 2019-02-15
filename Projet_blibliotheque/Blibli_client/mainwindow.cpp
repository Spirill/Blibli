#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tcpClient = new QTcpSocket(this);
    QObject::connect(tcpClient,SIGNAL(connected()),this,SLOT(clientConnecter()));

}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::clientconnecter()
{
    ui->textEdit->setText("connected");
}

void MainWindow::on_pushButton_clicked()
{
  tcpClient->connectToHost("127.0.0.1",4000);

  if(ui->FilmsCheck->isChecked())
    {
     tcpClient->write("film");
    }
  if(ui->Livrecheck->isChecked())
    {
    tcpClient->write("Livre");
    }
  if(ui->Musiquecheck->isChecked())
    {
      tcpClient->write("Music");
    }

}
