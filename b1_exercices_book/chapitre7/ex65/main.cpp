#include <iostream>
#include "points2.hpp"
using namespace std;


int main(){
    Point p(3,5);
    cout<< "(" << p.abscisse() << "," << p.ordonnee() << ")" ;

    p.deplace(4,6);
    cout<< "(" << p.abscisse() << "," << p.ordonnee() << ")" ;

    return EXIT_SUCCESS;
}