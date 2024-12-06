#include <iostream>
#include <cstdlib>
#include <utility>
using namespace std;

class Point{
    private:
        double x, y;
    public:
        Point(double abs = 0, double ord = 0) : x(abs) , y(ord) {} ;   

        double getX() const;
        double getY() const;

        void setX(double);
        void setY(double);

        void afficher() const;
        void deplacer(double , double);
};

void Point::afficher() const{
    cout << "(" << x << "," << y << ")\n";
}
void Point::deplacer(double dx, double dy){
    x += dx;
    y += dy;
}

double Point::getX() const{
    return this->x;
}
double Point::getY() const{
    return this->y;
}
void Point::setX(double x){
    this->x = x;
}
void Point::setY(double y){
    this->y = y;
}


int main() {
    Point centre;
    centre.afficher();

    Point p(1.2,2.4);
    p.afficher();
    
    p.deplacer(0.8, 0.6);
    p.afficher();

    p.setX(5.5);
    p.setY(10.3);
    cout << p.getX() << " -- " << p.getY() << endl;

}