#include <iostream>
#include <cstdlib>
#include <compare>
using namespace std;

class Point{
    private:
        int x, y;
    public:
        Point(int abs = 0, int ord = 0) : x(abs) ,y(ord) {};

        auto operator<=>(const Point& autre) const = default;
};

int main() {
    Point a(1), b{1,0}, c, d{1,1};
    
    auto result = a <=> b;
    if(result == 0)     {cout << "a = b" << endl;}
    else if(result < 0) {cout << "a < b" << endl;}
    else                {cout << "a > b" << endl;}

    return EXIT_SUCCESS;
}


