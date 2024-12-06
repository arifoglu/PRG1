#include "point.hpp"
#include <iostream>
using namespace std;

void Point::deplace(int dx, int dy){
    x += dx;
    y += dy;
}
void Point::affiche() const {
    cout << "(" << x << "," << y << ")\n" << endl;
}