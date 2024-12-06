#include <iostream>
#include <cstdlib>
using namespace std;

class Point{
    private :
        int x, y;
    public:
        Point(int abs = 0, int ord = 0) : x(abs) , y(ord) {};    

        friend Point& operator+=(Point & p1, const Point & p2); 

        void affiche () const {
                    cout << "(" << x << "," << y << ")\n";
                }  
};

Point& operator+=(Point & p1, const Point & p2){
        p1.x += p2.x, p1.y += p2.y;
    return p1;
} 



int main() {
    Point a(6,12); 
    Point b(2,3);
    a += b;
    a.affiche(); 


    return EXIT_SUCCESS;
}


