#include <iostream>
#include <cstdlib>
#include <compare>
using namespace std;

class Point{
    private:
        int x, y;
    public:
        Point(int abs = 0, int ord = 0): x(abs), y(ord) {}

        operator int()const { return x;};

        Point operator+(Point rhs){
            rhs.x += x;
            rhs.y += y;
            return rhs;
        }    

        void affiche()const {
            cout << "(" << x << "," << y << ")";
        }
};

int main() {
    Point p = 3.5;          // conversion implicit double => int
    p.affiche();            // (3,0)

    Point q(5.5,6);         // conversion implicit double => int
    q.affiche();            // (5,0)

    Point r{6};             // 
    r.affiche();            // (6,0)

    int i = 6;

    i = int(p);             //
    cout << i <<endl;      // 3

    i = 7 + p;
    cout << i << endl;     // 10

    p = 7 + q;             // Point(7 + int(q))
    p.affiche();           // (10,0) 

    p = Point(7) + q;      // Point(7,0) + (5.5,6)     
    p.affiche();           // (12,6) 

    q = p % q;             // Point(3,0) % (5.5,6) 
    q.affiche();           // (0,0) 


    return EXIT_SUCCESS;
}


