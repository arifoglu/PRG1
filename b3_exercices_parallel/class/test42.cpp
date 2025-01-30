#include <iostream>
#include <cstdlib>
using namespace std;

class Point {
    private:
        int x;
    public:
        Point(int num = 0) : x(num) {};

        friend istream& operator>>(istream& is,Point& obj){
            is >> obj.x;
            return is;
        }

        friend ostream& operator<<(ostream& os, const Point& obj){
            os << obj.x;
            return os;
        }

};


int main() {
    Point a;
    cin >> a ;
    cout << "This objet : " << a << endl;
     
    return EXIT_SUCCESS;
}


