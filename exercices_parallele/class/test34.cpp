#include <iostream>
#include <cstdlib>
using namespace std;

class Point {
    private :
        int x, y;
    public :
        Point(int abs = 0, int ord = 0) : x(abs) , y (ord) {};

        Point operator*(const Point& autre){
            return Point(x * autre.x,y * autre.y);
        }

        void affiche () const {
            cout << "(" << x << "," << y << ")\n";
        }    
};


int main() {
    Point a(2,5); 
    Point b(6,3);
    Point c = a * b;
    c.affiche(); 


    return EXIT_SUCCESS;
}

