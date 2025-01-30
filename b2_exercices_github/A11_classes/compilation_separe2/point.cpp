#include "point.hpp"
#include <iostream>
using namespace std;

bool Point::x_valide(double x) const{
    return x >= 0 && x <= maxX;
}
bool Point::y_valide(double y) const{
    return y >= 0 && x <= maxY;
}

void Point::setX(double x){
    if(x_valide(x))
    this->x = x;
}
void Point::setY(double y){
    if(y_valide(y))
    this->y = y;
}

void Point::afficher() const {
   cout << "(" << x << "," << y << ")" << ", contraintes: [0," << maxX << "]x[0," << maxY << "]\n";
}
void Point::deplacer(double dx, double dy) {
   if (x_valide(x + dx) and y_valide(y + dy)) {
      x += dx;
      y += dy;
   }
}