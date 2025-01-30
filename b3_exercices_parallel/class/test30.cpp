#include <iostream>
#include <cstdlib>
using namespace std;

class Point {
    private:
        int x, y;
    public:
        Point(int abs = 0, int ord = 0) : x(abs), y(ord) {};
        
        // operator + (surcharge) friend version
        friend Point operator+(const Point & p1, const Point & p2);

        void affiche() const {
            cout << "(" << x << ", " << y << ")" << endl;
        }    
};
Point operator+(const Point& p1, const Point & p2){
    return Point(p1.x + p2.x, p1.y + p2.y);
}

int main() {
    Point p1(2,3);
    Point p2(4,5);

    Point p3 = p1 + p2;
    p3.affiche();

    return EXIT_SUCCESS;
}


