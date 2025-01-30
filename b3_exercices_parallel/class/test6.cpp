#include <iostream>
#include <cstdlib>
using namespace std;

class Point {
        int x;
    public :
        int y; 
};


int main() {
    Point a, b;
    a.y = 3;    // valide
    b.y = 5;    // valide

    b = a;      // valide
    b.y = a.y;  // valide

    //a.x = 4;  // invalide => private area
    //b.x = 4;  // invalide => private area



    
    return EXIT_SUCCESS;
}
