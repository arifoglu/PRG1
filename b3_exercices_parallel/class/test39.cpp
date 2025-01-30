#include <iostream>
#include <cstdlib>
using namespace std;


class Point{
    private:
        int x, y;
    public:
        Point(int abs = 0, int ord = 0) : x(abs), y(ord) {};

        friend Point operator+(const Point& , Point);

        void affiche() const {
            cout << "coordonnees : " << "(" << x << "," << y << ")\n" <<endl; 
        }    
};
Point operator+(const Point& a, Point b){
    b.x += a.x; b.y += a.y;
    return b;
}


int main() {
    Point a(1,2);
    a.affiche();
    const Point b(2,5);
    b.affiche();

    Point c = a + b;
    c.affiche();
    
    return EXIT_SUCCESS;
}


