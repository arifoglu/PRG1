#include "points2.hpp"

Point::Point(float abs,float ord){
    x = abs;
    y = ord;
}
float Point::abscisse()const{
    return x;
}
float Point::ordonnee()const{
    return y;
}
void Point::deplace(float dx, float dy){
    x += dx;
    y += dy;
}