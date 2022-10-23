#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "qlabel_pixel_pos.h"
#include "geometrija.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->imageLabel, SIGNAL(Mouse_Pos()), this, SLOT(mouse_current_pos()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Choose"),"", tr("Images (*.jpg *.jpeg *.png)"));
    if(QString::compare(filename, QString())){
        QImage image;
        bool valid = image.load(filename);
        if(valid){
            image = image.scaled(ui->imageLabel->width(),ui->imageLabel->height() , Qt::KeepAspectRatio);
            ui->imageLabel->setFixedSize(image.width(), image.height());
            ui->imageLabel->setPixmap(QPixmap::fromImage(image));
        }
        else{
            std::cerr << "Error\n";
        }
    }
}

void MainWindow::mouse_current_pos()
{
    switch(ui->imageLabel->count){
        case 1:
            ui->t1->setText(QString("t1 = (%1, %2, 1)").arg(ui->imageLabel->x).arg(ui->imageLabel->y));
            ui->imageLabel->t1 = std::make_tuple(ui->imageLabel->x, ui->imageLabel->y, 1);
        break;
        case 2:
            ui->t2->setText(QString("t2 = (%1, %2, 1)").arg(ui->imageLabel->x).arg(ui->imageLabel->y));
            ui->imageLabel->t2 = std::make_tuple(ui->imageLabel->x, ui->imageLabel->y, 1);
        break;
        case 3:
            ui->t3->setText(QString("t3 = (%1, %2, 1)").arg(ui->imageLabel->x).arg(ui->imageLabel->y));
            ui->imageLabel->t3 = std::make_tuple(ui->imageLabel->x, ui->imageLabel->y, 1);
        break;
        case 4:
            ui->t5->setText(QString("t5 = (%1, %2, 1)").arg(ui->imageLabel->x).arg(ui->imageLabel->y));
            ui->imageLabel->t5 = std::make_tuple(ui->imageLabel->x, ui->imageLabel->y, 1);
        break;
        case 5:
            ui->t6->setText(QString("t6 = (%1, %2, 1)").arg(ui->imageLabel->x).arg(ui->imageLabel->y));
            ui->imageLabel->t6 = std::make_tuple(ui->imageLabel->x, ui->imageLabel->y, 1);
        break;
        case 6:
            ui->t7->setText(QString("t7 = (%1, %2, 1)").arg(ui->imageLabel->x).arg(ui->imageLabel->y));
            ui->imageLabel->t7 = std::make_tuple(ui->imageLabel->x, ui->imageLabel->y, 1);
        break;
        case 7:
            ui->t8->setText(QString("t8 = (%1, %2, 1)").arg(ui->imageLabel->x).arg(ui->imageLabel->y));
            ui->imageLabel->t8 = std::make_tuple(ui->imageLabel->x, ui->imageLabel->y, 1);

            ui->imageLabel->t4 = invisible(ui->imageLabel->t1,
                                           ui->imageLabel->t2,
                                           ui->imageLabel->t3,
                                           ui->imageLabel->t5,
                                           ui->imageLabel->t6,
                                           ui->imageLabel->t7,
                                           ui->imageLabel->t8);

            ui->t4->setText(QString("t4 = ") + point_to_str(ui->imageLabel->t4));

        break;
    }
}

void MainWindow::on_Undo_clicked()
{
    switch(ui->imageLabel->count){
        case 1:
            ui->t1->setText(QString("t1 = "));
        break;
        case 2:
            ui->t2->setText(QString("t2 = "));
        break;
        case 3:
            ui->t3->setText(QString("t3 = "));
        break;
        case 4:
            ui->t5->setText(QString("t5 = "));
        break;
        case 5:
            ui->t6->setText(QString("t6 = "));
        break;
        case 6:
            ui->t7->setText(QString("t7 = "));
        break;
        case 7:
            ui->t8->setText(QString("t8 = "));
            ui->t4->setText(QString("t4 = ?"));
        break;

    }
    if(ui->imageLabel->count > 0)
        ui->imageLabel->count--;
}
