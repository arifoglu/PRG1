#include <iostream>
#include <cstdlib>
#include <utility>

using namespace std;

class Point{
    private:
        double x, y;   
    public :
          void afficher() const ;
          void deplacer(double dx, double dy);

          void setX(double x);
          double getX() const;  

          void setY(double y);
          double getY() const;

};
void Point::afficher() const {
    cout << "(" << x << "," << y << ") " << endl; 
}
void Point::deplacer(double dx,double dy){
    x += dx;
    y += dy;
}

void Point::setX(double x){
    this->x = x;
}
double Point::getX() const {
    return this->x;
}

void Point::setY(double y){
    this->y = y;
}
double Point::getY() const {
    return this-> y;
}

int main() {
    Point centre;
    centre.setX(0);
    centre.setY(0);
    centre.afficher();

    Point p;
    p.setX(1.2);
    p.setY(2.4);
    p.afficher();
    
    p.deplacer(0.8, 0.6);
    p.afficher();

    p.setX(5.5);
    p.setY(10.3);
    cout << p.getX() << " -- " << p.getY() << endl;
}