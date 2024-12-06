#include <iostream>
#include <cstdlib>
using namespace std;

class Point{
    int x, y;

    public:
        Point(int abscisse = 0, int ordonnee = 0) : x(abscisse) , y(ordonnee) {} ;

        void affiche() {
            cout << "(" << x << "," << y << ")\n" ;
        }
};



int main() {
    Point p, q, r;
    int i = 4;

    p = Point(3);
    p.affiche();         // (3,0)

    q = i;
    q.affiche();        //  (4,0)

    p = {5,6};
    p.affiche();        //  (5,6)

    p = 3.85 + i;
    p.affiche();        //  (7,0)

    return EXIT_SUCCESS;
}

