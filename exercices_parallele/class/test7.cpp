#include <iostream>
#include <cstdlib>
using namespace std;

class Point {
    public :
        Point(int abscisse, int ordonnee);   // constructeur
        void deplace(int dx, int dy);
        void afficher();
    private:
        int x , y ;    
};

Point::Point(int abscisse, int ordonnee){
    x = abscisse;
    y = ordonnee;
}

int main() {
    Point a(5,2);
    Point b{2,3};
    Point c = {7,8};

    return EXIT_SUCCESS;
}
