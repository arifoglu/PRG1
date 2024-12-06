#include <iostream>
#include <cstdlib>
#include <compare>
using namespace std;

class Point{
    private:
        int x, y;
    public:
        Point(int abs = 0, int ord = 0) : x(abs) , y(ord) {};

        int operator<=>(const Point& rhs) const{
            if( y < rhs.y) return -1;
            if( y > rhs.y) return  1;
            if( x < rhs.x) return -1;
            if( x > rhs.x) return  1;
            return 0;
        } 
        
        bool operator==(const Point& rhs){
             return (*this <=> rhs) == 0; 
        }      
};

int main() {
    Point p1(1,2), p2(1,2), p3(2,3);

    cout << "p1 == p2: " << (p1 == p2) <<endl;
    cout << "p1 == p3: " << (p1 == p3) <<endl;

    return EXIT_SUCCESS;
}


