#include <iostream>
#include <cstdlib>
using namespace std;

class Point{
    private:
        int x, y;
    public:
        Point(int abs = 0, int ord = 0) : x(abs) , y(ord) {};
       
        Point operator+(const Point & autre){
            return Point(x + autre.x, y + autre.y);
        }
        Point operator-(const Point & autre){
            return Point(x - autre.x, y - autre.y);
        }
        Point operator*(const Point& autre){
            return Point(x * autre.x, y * autre.y);
        }
        Point operator/(const Point& autre){
            return Point(x / autre.x, y / autre.y);
        }
        Point& operator+=(const Point& autre){
            x += autre.x;
            y += autre.y;
            return *this;
        }
        Point& operator-=(const Point& autre){
            x -= autre.x;
            y -= autre.y;
            return *this;
        }
        Point& operator*=(const Point& autre){
            x *= autre.x;
            y *= autre.y;
            return *this;
        }

        void affiche() const {
            cout << "(" << x << "," << y << ")\n";
        }

};

int main() {
    Point a(3,4);
    a.affiche();
    Point b(5,6);
    b.affiche();
    
    Point c = a + b;
    c.affiche();

    Point d = a - b;
    d.affiche();

    Point e = a * b;
    e.affiche();

    Point f = a / b;
    f.affiche();

    a += b;
    a.affiche();

    a-= b;
    a.affiche();


    return EXIT_SUCCESS;
}


