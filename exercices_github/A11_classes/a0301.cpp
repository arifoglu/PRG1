#include <iostream>
#include <cstdlib>
#include <utility>
using namespace std;

class Point{
    private :
        double x = 0.0 , y = 0.0;
    public  :
    
        Point(){}
        Point(double x,double y){
            this->x = x;
            this->y = y;
        }

        void afficher(){
                cout << "(" << x << "," << y << ")" <<endl;
            }   
        void deplacer(double dx, double dy){
            x += dx;
            y += dy;
        }

        //setX getX
        void setX(double x){
            this->x = x;
        }
        double getX() const {
            return x;
        }

        // setY getY
        void setY(double y){
            this->y = y;
        }
        double getY() const {
            return y;
        }
};

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