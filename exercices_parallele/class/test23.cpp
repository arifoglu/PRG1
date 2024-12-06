#include <iostream>
#include <cstdlib>
using namespace std;

class Point {
    int x, y;

    public :
        Point(int abscisse = 0, int ordonnee = 0) : x(abscisse) , y(ordonnee) {};
        
        void affiche() {
            cout << "(" << this << "," << this << ")\n" ;      //  (0x16d217314,0x16d217314)
            cout << "(" << this->x << "," << this->y << ")\n" ;// (5,0)
        }

};



int main() {
    Point a(5), b(4,12);
    a.affiche();           // (0x16d217314,0x16d217314)
    b.affiche();           // (0x16d21730c,0x16d21730c)

    return EXIT_SUCCESS;
}

