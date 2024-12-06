#include <iostream>
#include <cstdlib>
using namespace std;

class Point {
    private:
        int x , y;
    public:
        Point(int abs = 0, int ord = 0) : x(abs), y(ord) {} // constructor inline
        friend bool coincide(const Point &,const Point &);    
};
bool coincide(const Point& p, const Point & q){
    return (p.x == q.x) && (p.y == q.y);
}

int main() {
    Point a(1,0), b(1) , c;

    if(coincide(a,b)){
        cout << "a coincide avec b \n";
    }else{
        cout << "a et b sont differents\n";
    }
    if(coincide(a,c)){
        cout << "a coincide avec c \n";
    }else{
        cout << "a et c sont differents\n";
    }


    return EXIT_SUCCESS;
}


