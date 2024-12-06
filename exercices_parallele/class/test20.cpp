#include <iostream>
#include <cstdlib>
using namespace std;

class Point{
    private:
        int x, y;
    public:
        Point(int abscisse, int ordonnee) : x(abscisse) , y(ordonnee) {};

        Point(int coord) : Point(coord , coord) {}  ;  
     
        Point() : Point(0,0) {};

        void affiche() {
            cout << "(" << x << "," << y << ")\n" ;
        } 
};

int main() {
    Point a(3,4); // Point (3,4) appel constructor 1
    a.affiche();
    
    Point b(5);   // Point (5,5) appel constructor 2
    b.affiche();

    Point c;      //  Point (0,0) appel constructor 3
    c.affiche();


    return EXIT_SUCCESS;
}

