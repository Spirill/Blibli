#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void connection();
    void lecture();

private:
    Ui::MainWindow *ui;
    QTcpServer *tcpServer;
    QTcpSocket *clientConnection ;
};

#endif // MAINWINDOW_H
