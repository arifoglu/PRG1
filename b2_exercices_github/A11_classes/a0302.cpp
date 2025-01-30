#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

class Point{
    private :
        double x, y, maxX, maxY;

        bool x_valide(double x) const;
        bool y_valide(double y) const;

    public:
        Point();
        Point(double x, double y, double maxX = 100., double maxY = 100.)
        : x(x) , y(y) , maxX(max(x,maxX)), maxY(max(y,maxY))  {};    

        void afficher() const;
        void deplacer(double,double);
        void setX(double);
        void setY(double);
        double getX() const;
        double getY() const;

};

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

int main() {
   Point p1(1.2, 2.4);
   cout << "p1"; p1.afficher();
   p1.deplacer(1., 3.);
   cout << "p1"; p1.afficher();
   p1.setX(4.);
   cout << "p1"; p1.afficher();
   p1.setY(7.);
   cout << "p1"; p1.afficher();

   Point p2(3., 4.2, 10., 10.);
   cout << "p2"; p2.afficher();
   p2.deplacer(15, 2);
   cout << "p2"; p2.afficher();
   p2.deplacer(3, 2);
   cout << "p2"; p2.afficher();
   p2.setX(-3);
   cout << "p2"; p2.afficher();
   p2.setY(12);
   cout << "p2"; p2.afficher();

}