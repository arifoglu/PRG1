#include <iostream>
#include <cstdlib>
using namespace std;

class Point{
    private:
        int x;
    public:
        Point(int num = 0) : x(num) {} ;

    friend ostream& operator<<(ostream& os,const Point&);
    friend istream& operator>>(istream& is,Point&);            
    
};
ostream& operator<<(ostream& os, const Point & p){
    os << p.x ;
    return os;
}
istream& operator>>(istream& is,Point& p){
    is >> p.x;
    return is;
}

int main() {
    Point a;
    cin >> a;
    cout << "This objet : " << a << endl;
     
    return EXIT_SUCCESS;
}


