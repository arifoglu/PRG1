#include <iostream>
using namespace std;

class Point{
    private:
        int x, y;
    public:
        Point(int abs = 0, int ord = 0) : x(abs), y(ord) {}

        auto operator<=>(const Point& autre) const = default;

};



int main() {
    Point a(1), b{1,0}, c{1,1};

    auto result = a<=>b;


    return EXIT_SUCCESS;
}


