#include <iostream>
#include <cstdlib>
using namespace std;

class Point{
    private :
        int x, y;
    public:
        Point(int abs = 0, int ord = 0) : x(abs) , y(ord) {};    

        Point& operator-=(const Point & autre){
            x -= autre.x; y -= autre.y;
            
            return *this;
        }

        void affiche () const {
                    cout << "(" << x << "," << y << ")\n";
                }  
};

int main() {
    Point a(4,11); 
    Point b(3,1);
    a -= b;
    a.affiche(); 
    
    return EXIT_SUCCESS;
}


