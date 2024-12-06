#include <iostream>
#include <cstdlib>
using namespace std;

class Point {
    int x, y;

    public:
        Point(int abscisse = 0, int ordonee = 0) : x(abscisse), y(ordonee) {}
        
        void affiche() {
            cout << "(" << x << "," << y << ")\n" ;
        }
};

int main() {
    Point a = 3;     // initialisation par copie ,appel implicite
    a.affiche();     // (3,0) 

    a = {4,5};       // initialisation direct ,appel explicite   
    a.affiche();     // (4,5) 

    Point b(3);
    b.affiche();     // (3,0)

    Point c(4.5);    // conversion double => int    
    c.affiche();     //  (4,0)

    Point d{7};      // initialisation direct 
    d.affiche();     //  (7,0)

    // Point e{6.8};    // {} ile conversion yapilmiyor.    
    // e.affiche();     // {} ile direct baslatma oldugu icin
    
    return EXIT_SUCCESS;
}


