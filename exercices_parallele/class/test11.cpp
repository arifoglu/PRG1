#include <iostream>
#include <cstdlib>
using namespace std;

class Point {
    private:
        int x, y ;
    public:
        Point(int abscisse, int ordonnee);

        void affiche() const {
            cout << "(" << x << "," << y << ")\n" ;
        }    
};
Point::Point(int abscisse, int ordonnee){
    x = abscisse;
    y = ordonnee;
}


int main() {
    Point a(5,2);
    a.affiche();
    Point b{3,4};
    b.affiche();
    Point c = {7,8};
    c.affiche();

    return EXIT_SUCCESS;
}
