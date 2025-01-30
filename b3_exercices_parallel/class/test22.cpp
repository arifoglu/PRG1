#include <iostream>
#include <cstdlib>
using namespace std;


class Point{
    private:
        int  x, y;
    public:
        Point(int abscisse = 0, int ordonee = 0) : x(abscisse) , y(ordonee) {} ;   

        bool coincide(Point);
   
};
bool Point::coincide(Point pt){
    return (pt.x == x) && (pt.y == y);
}


int main() {
    Point a, b(1), c(1,0);

    cout << "a et b : " << a.coincide(b) << " ou " << b.coincide(a) <<endl;
    cout << "b et c : " << b.coincide(c) << " ou " << c.coincide(b) <<endl;

    return EXIT_SUCCESS;
}

