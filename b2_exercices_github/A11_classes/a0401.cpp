#include <iostream>
#include <cstdlib>
#include <utility>
#include <iomanip>
using namespace std;

class Point{
    private:
        double x, y;
    public:
        Point(double abs = 0.0, double ord = 0.0) : x(abs), y(ord) {};    

        friend ostream& operator<<(ostream& os, const Point &);

        friend Point operator+(const Point &,const Point &);

        friend Point operator*(const Point&, double);
        friend Point operator*(double, const Point&);

        friend bool operator==(const Point& , const Point&);
     
};

bool operator==(const Point& p1, const Point& p2){
    return (p1.x == p2.x && p1.y == p2.y);
}

ostream& operator<<(ostream& os, const Point & p){
    os << "(" << p.x << "," << p.y << ")";
    return os;
}
Point operator+(const Point & p1,const Point& p2){
    return Point(p1.x + p2.x , p1.y + p2.y);
}
Point operator*(const Point& p, double d){
    return Point(p.x * d, p.y * d);
}
Point operator*(double d,const Point & p){
    return Point(d * p.x, d*p.y);
}

int main() {

   Point p1(1.2, 2.4);
   Point p2(3., 4.2);

   cout << "p1" << p1 << ", p2" << p2 << endl;

   cout << "p1 + p2 = " << p1 + p2 << endl;
   cout << "p2 + p1 = " << p2 + p1 << endl;

   cout << "p1 * 2. = " << p1 * 2. << endl;
   cout << "3. * p1 = " << 3. * p1 << endl;

   cout << (p1 == p2 ? "p1 == p2" : "p1 != p2") << endl;
   Point p3(p1);
   cout << (p1 == p3 ? "p1 == p3" : "p1 != p3") << endl;
}