#include <iostream>
#include <cstdlib>
#include <compare>
using namespace std;

class Point{
    private:
        int x, y;
    public:
        Point(int abs = 0, int ord = 0) : x(abs) , y(ord) {}

        operator int() const { 
            return x;
        }

        Point operator+(Point rhs){
            rhs.x += x;
            rhs.y += y;
            return rhs;
        }
};

int main() {
    Point p = 3.5;
    Point q(5.5,6);
    Point r{4};

    int i = int(p);
    cout << i <<endl;

    i = 7 + p;
    cout << i << endl;

    return EXIT_SUCCESS;
}


