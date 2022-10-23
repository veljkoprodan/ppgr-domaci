#include "qlabel_pixel_pos.h"

qlabel_pixel_pos::qlabel_pixel_pos(QWidget *parent) :
    QLabel(parent)
{

}

void qlabel_pixel_pos::mousePressEvent(QMouseEvent *ev)
{
    this->count++;
    this->x = ev->x();
    this->y = ev->y();

    emit Mouse_Pos();
}
