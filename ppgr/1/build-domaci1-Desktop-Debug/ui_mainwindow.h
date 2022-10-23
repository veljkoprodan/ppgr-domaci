/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qlabel_pixel_pos.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    qlabel_pixel_pos *imageLabel;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *t1;
    QLabel *t2;
    QLabel *t3;
    QLabel *t4;
    QLabel *t5;
    QLabel *t6;
    QLabel *t7;
    QLabel *t8;
    QPushButton *Undo;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(941, 505);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 631, 441));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 0, 10, 0);
        imageLabel = new qlabel_pixel_pos(verticalLayoutWidget);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setMouseTracking(true);
        imageLabel->setFrameShape(QFrame::Box);
        imageLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(imageLabel);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(630, 0, 281, 441));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        t1 = new QLabel(verticalLayoutWidget_2);
        t1->setObjectName(QString::fromUtf8("t1"));

        verticalLayout_2->addWidget(t1);

        t2 = new QLabel(verticalLayoutWidget_2);
        t2->setObjectName(QString::fromUtf8("t2"));

        verticalLayout_2->addWidget(t2);

        t3 = new QLabel(verticalLayoutWidget_2);
        t3->setObjectName(QString::fromUtf8("t3"));

        verticalLayout_2->addWidget(t3);

        t4 = new QLabel(verticalLayoutWidget_2);
        t4->setObjectName(QString::fromUtf8("t4"));

        verticalLayout_2->addWidget(t4);

        t5 = new QLabel(verticalLayoutWidget_2);
        t5->setObjectName(QString::fromUtf8("t5"));

        verticalLayout_2->addWidget(t5);

        t6 = new QLabel(verticalLayoutWidget_2);
        t6->setObjectName(QString::fromUtf8("t6"));

        verticalLayout_2->addWidget(t6);

        t7 = new QLabel(verticalLayoutWidget_2);
        t7->setObjectName(QString::fromUtf8("t7"));

        verticalLayout_2->addWidget(t7);

        t8 = new QLabel(verticalLayoutWidget_2);
        t8->setObjectName(QString::fromUtf8("t8"));

        verticalLayout_2->addWidget(t8);

        Undo = new QPushButton(verticalLayoutWidget_2);
        Undo->setObjectName(QString::fromUtf8("Undo"));

        verticalLayout_2->addWidget(Undo);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 941, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        imageLabel->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Load Image", nullptr));
        t1->setText(QApplication::translate("MainWindow", "t1 = ", nullptr));
        t2->setText(QApplication::translate("MainWindow", "t2 = ", nullptr));
        t3->setText(QApplication::translate("MainWindow", "t3 = ", nullptr));
        t4->setText(QApplication::translate("MainWindow", "t4 = ?", nullptr));
        t5->setText(QApplication::translate("MainWindow", "t5 = ", nullptr));
        t6->setText(QApplication::translate("MainWindow", "t6 = ", nullptr));
        t7->setText(QApplication::translate("MainWindow", "t7 = ", nullptr));
        t8->setText(QApplication::translate("MainWindow", "t8 = ", nullptr));
        Undo->setText(QApplication::translate("MainWindow", "Undo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
