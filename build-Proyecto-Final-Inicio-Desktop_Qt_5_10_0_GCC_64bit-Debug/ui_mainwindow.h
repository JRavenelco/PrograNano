/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *Close;
    QLabel *Lab_Fondo;
    QLabel *LabSetpicture;
    QLabel *LabResult;
    QPushButton *Choosepic;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1055, 629);
        MainWindow->setMouseTracking(false);
        QIcon icon(QIcon::fromTheme(QStringLiteral("UAQ")));
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Close = new QPushButton(centralWidget);
        Close->setObjectName(QStringLiteral("Close"));
        Close->setGeometry(QRect(740, 40, 131, 33));
        Close->setCursor(QCursor(Qt::PointingHandCursor));
        Lab_Fondo = new QLabel(centralWidget);
        Lab_Fondo->setObjectName(QStringLiteral("Lab_Fondo"));
        Lab_Fondo->setGeometry(QRect(0, 0, 1050, 550));
        Lab_Fondo->setPixmap(QPixmap(QString::fromUtf8("../../Proyecto Final/Fondo.jpg")));
        Lab_Fondo->setScaledContents(true);
        LabSetpicture = new QLabel(centralWidget);
        LabSetpicture->setObjectName(QStringLiteral("LabSetpicture"));
        LabSetpicture->setGeometry(QRect(60, 100, 400, 250));
        LabSetpicture->setCursor(QCursor(Qt::CrossCursor));
        LabSetpicture->setAutoFillBackground(true);
        LabSetpicture->setScaledContents(true);
        LabResult = new QLabel(centralWidget);
        LabResult->setObjectName(QStringLiteral("LabResult"));
        LabResult->setGeometry(QRect(600, 100, 400, 250));
        LabResult->setCursor(QCursor(Qt::CrossCursor));
        LabResult->setAutoFillBackground(true);
        LabResult->setScaledContents(true);
        Choosepic = new QPushButton(centralWidget);
        Choosepic->setObjectName(QStringLiteral("Choosepic"));
        Choosepic->setGeometry(QRect(860, 480, 91, 33));
        Choosepic->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setCentralWidget(centralWidget);
        Lab_Fondo->raise();
        Close->raise();
        LabSetpicture->raise();
        LabResult->raise();
        Choosepic->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1055, 29));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(Choosepic, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Procesamiento digital de im\303\241genes para el an\303\241lisis de micrograf\303\255as", nullptr));
        Close->setText(QApplication::translate("MainWindow", "Choose Image", nullptr));
        Lab_Fondo->setText(QString());
        LabSetpicture->setText(QString());
        LabResult->setText(QString());
        Choosepic->setText(QApplication::translate("MainWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
