#include <iostream>
#include <cstdlib>
using namespace std;

class Point {
    public :
        void initialise(int abscisse,int ordonnee);
        void deplace(int dx, int dy);
        void affiche();
    private:
        int x;
        int y;    
};

void Point::initialise(int abscisse,int ordonnee){
    x = abscisse;
    y = ordonnee;
}
void Point::deplace(int dx, int dy){
    x += dx ;
    y += dy;
}
void Point::affiche(){
    cout << "Je suis en " << x << " " << y << endl;
}


int main() {
    Point a, b;
    a.initialise(5, 2);
    a.deplace(-2,4);
    a.affiche();

    b.initialise(1,-1);
    b.affiche();
    
    return EXIT_SUCCESS;
}
