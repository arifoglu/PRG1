#include <iostream>
#include <cstdlib>
using namespace std;

class Point{
    private:
        int x , y;
    public:
        Point(int abs = 0, int cord = 0) : x(abs) , y(cord) {};

        friend Point operator-(const Point & p1, const Point & p2);

        void affiche() const {
            cout << "(" << x << "," << y << ")" ;
        }
};

Point operator-(const Point& p1, const Point& p2){
    return Point(p1.x - p2.x, p2.y - p2.y);
}

int main() {
    Point a(7,5);
    Point b(3,4);  
    Point c = a - b;

    return EXIT_SUCCESS;
}


