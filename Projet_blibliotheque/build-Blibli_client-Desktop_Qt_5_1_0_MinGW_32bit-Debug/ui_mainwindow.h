/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCheckBox *FilmsCheck;
    QLabel *label;
    QCheckBox *Musiquecheck;
    QCheckBox *Livrecheck;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QLineEdit *Titre;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(394, 269);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        FilmsCheck = new QCheckBox(centralWidget);
        FilmsCheck->setObjectName(QStringLiteral("FilmsCheck"));
        FilmsCheck->setGeometry(QRect(40, 90, 70, 17));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 0, 91, 20));
        Musiquecheck = new QCheckBox(centralWidget);
        Musiquecheck->setObjectName(QStringLiteral("Musiquecheck"));
        Musiquecheck->setGeometry(QRect(270, 90, 70, 17));
        Livrecheck = new QCheckBox(centralWidget);
        Livrecheck->setObjectName(QStringLiteral("Livrecheck"));
        Livrecheck->setGeometry(QRect(150, 90, 70, 17));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 140, 104, 71));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 150, 91, 31));
        Titre = new QLineEdit(centralWidget);
        Titre->setObjectName(QStringLiteral("Titre"));
        Titre->setGeometry(QRect(100, 20, 161, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 394, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        FilmsCheck->setText(QApplication::translate("MainWindow", "FILMS", 0));
        label->setText(QApplication::translate("MainWindow", "Nom du document", 0));
        Musiquecheck->setText(QApplication::translate("MainWindow", "MUSIQUE", 0));
        Livrecheck->setText(QApplication::translate("MainWindow", "LIVRE", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Recherche", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
