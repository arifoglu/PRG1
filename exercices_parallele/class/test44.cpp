#include <iostream>
#include <cstdlib>
using namespace std;

class Point{
    private:
        int x, y;
    public:
        Point(int abs = 0, int ord = 0) : x(abs) , y(ord) {} ;
    
    friend ostream& operator<<(ostream& os,const Point & p){
        os << p.x << p.y ;
        return os;
    }
    friend istream& operator>>(istream& is, Point & p){
        is >> p.x >> p.y;
        return is;
    }

};


int main() {
    Point a(3,4);
    cout << a; 
    return EXIT_SUCCESS;
}


