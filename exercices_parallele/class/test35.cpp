#include <iostream>
#include <cstdlib>
using namespace std;

class Point{
    private :
        int x, y;
    public:
        Point(int abs = 0, int ord = 0) : x(abs) , y(ord) {};    

        friend Point operator/(const Point & p1, const Point & p2); 

        void affiche () const {
                    cout << "(" << x << "," << y << ")\n";
                }  
};

Point operator/(const Point & p1, const Point & p2){
    return Point(p1.x / p2.x, p1.y / p2.y);
} 


int main() {
    Point a(6,12); 
    Point b(2,3);
    Point c = a / b;
    c.affiche(); 


    return EXIT_SUCCESS;
}


