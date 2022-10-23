#ifndef GEOMETRIJA_H
#define GEOMETRIJA_H

#include <tuple>
#include <string>
#include "qstring.h"

using point = std::tuple<double,double,double>;

point afinize(point);
point cross(point,point);
point invisible(point,point,point,point,point,point,point);
QString point_to_str(point);

#endif // GEOMETRIJA_H
