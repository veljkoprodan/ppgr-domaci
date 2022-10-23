/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
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
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(961, 504);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 631, 441));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(10, 0, 10, 0);
        imageLabel = new qlabel_pixel_pos(verticalLayoutWidget);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        imageLabel->setMouseTracking(true);
        imageLabel->setFrameShape(QFrame::Box);
        imageLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(imageLabel);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(630, 0, 371, 441));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        t1 = new QLabel(verticalLayoutWidget_2);
        t1->setObjectName(QStringLiteral("t1"));

        verticalLayout_2->addWidget(t1);

        t2 = new QLabel(verticalLayoutWidget_2);
        t2->setObjectName(QStringLiteral("t2"));

        verticalLayout_2->addWidget(t2);

        t3 = new QLabel(verticalLayoutWidget_2);
        t3->setObjectName(QStringLiteral("t3"));

        verticalLayout_2->addWidget(t3);

        t4 = new QLabel(verticalLayoutWidget_2);
        t4->setObjectName(QStringLiteral("t4"));

        verticalLayout_2->addWidget(t4);

        t5 = new QLabel(verticalLayoutWidget_2);
        t5->setObjectName(QStringLiteral("t5"));

        verticalLayout_2->addWidget(t5);

        t6 = new QLabel(verticalLayoutWidget_2);
        t6->setObjectName(QStringLiteral("t6"));

        verticalLayout_2->addWidget(t6);

        t7 = new QLabel(verticalLayoutWidget_2);
        t7->setObjectName(QStringLiteral("t7"));

        verticalLayout_2->addWidget(t7);

        t8 = new QLabel(verticalLayoutWidget_2);
        t8->setObjectName(QStringLiteral("t8"));

        verticalLayout_2->addWidget(t8);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 961, 22));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        imageLabel->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Load Image", Q_NULLPTR));
        t1->setText(QApplication::translate("MainWindow", "t1 = ", Q_NULLPTR));
        t2->setText(QApplication::translate("MainWindow", "t2 = ", Q_NULLPTR));
        t3->setText(QApplication::translate("MainWindow", "t3 = ", Q_NULLPTR));
        t4->setText(QApplication::translate("MainWindow", "t4 = ?", Q_NULLPTR));
        t5->setText(QApplication::translate("MainWindow", "t5 = ", Q_NULLPTR));
        t6->setText(QApplication::translate("MainWindow", "t6 = ", Q_NULLPTR));
        t7->setText(QApplication::translate("MainWindow", "t7 = ", Q_NULLPTR));
        t8->setText(QApplication::translate("MainWindow", "t8 = ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
