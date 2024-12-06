#include <iostream>
#include <cstdlib>
using namespace std;

class Point {
    private:
        int x, y;
    public:
        Point(int abs = 0, int ord = 0) : x(abs), y(ord) {};
        
        // operator + (surcharge)
        Point operator+(const Point& autre){
            return Point(x + autre.x, y + autre.y);
        }

        void affiche() const {
            cout << "(" << x << ", " << y << ")" << endl;
        }    
};


int main() {
    Point p1(2,3);
    Point p2(4,5);

    Point p3 = p1 + p2;
    p3.affiche();

    return EXIT_SUCCESS;
}


