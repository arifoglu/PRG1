#include <iostream>
#include "points3.hpp"
using namespace std;


int main () {
    Point p(2,5);
    cout << "p(" << p.abscisse() << "," << p.ordonnee() << ")" << endl;    
   
    p.homothetie(2);
    cout << "p(" << p.abscisse() << "," << p.ordonnee() << ")" << endl;    

    p.rotation(30);
    cout << "p(" << p.abscisse() << "," << p.ordonnee() << ")" << endl;    

    cout << "p(" << p.rho() << "," << p.theta() << ")" << endl;    
    
    return EXIT_SUCCESS;
}

