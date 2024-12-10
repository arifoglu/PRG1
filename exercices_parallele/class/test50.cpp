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
        }    

        void affiche()const {
            cout << "(" << x << "," << y << ")";
        }
};

int main() {
    Point p = 3.5;
    p.affiche();

    Point q(5.5,6);
    q.affiche();

    return EXIT_SUCCESS;
}


