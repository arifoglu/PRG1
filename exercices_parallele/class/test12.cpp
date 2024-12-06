#include <iostream>
#include <cstdlib>
using namespace std;

class Point {
    private:
        int x, y ;
    public:
        Point(int abscisse, int ordonnee) : x(abscisse) , y(ordonnee) {};

        void affiche() const {
            cout << "(" << x << "," << y << ")\n" ;
        }    
};

int main() {
    Point a(5,2);
    a.affiche();

    return EXIT_SUCCESS;
}
