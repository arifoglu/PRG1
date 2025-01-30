#include <iostream>
#include <cstdlib>
using namespace std;

class Point {
        int x, y;
        
    public:
        Point(int abscisse, int ordonnee = 0) : x(abscisse) , y(ordonnee) {
            cout << "++ appel constructor " << "(" << x << "," << y << ")" << endl;
        } 
        Point(const Point & p) : x(p.x), y(p.y) {
            cout << "++ appel constructor copie " << "(" << x << "," << y << ")" << endl;
        }
};

int main() {
    Point p1(1, 2);                               // constructor 1

    //Point courbe1[3] { {1, 1} , 2, {3, 3} } ;   // constructor 1

    //Point p2[2] = {{3,4},{5,6}};                // constructor 1

    //Point courbe[2] = {p1, Point(5,6)} ;        // constructor 1

    //vector<Point> courbe4 {p1, {2,2} , 3};      // constructor 1 && constructor copie (en son 3 defa copie)

    
    return EXIT_SUCCESS;
}


