#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <iostream>
#include <QtGui>
#include <QtCore>
#include <QPainter>

#include "geometrija.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void draw_dot(point t);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void mouse_current_pos();

    void on_Undo_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
