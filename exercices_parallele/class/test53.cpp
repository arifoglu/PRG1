#include <iostream>
using namespace std;

template<typename T>
class Point {
    private:
        T x, y;
    public:
        Point(T abs, T ord) : x(abs), y(ord) {}      // constructor

      template<typename U>  
      friend ostream& operator<<(ostream& os,const Point<U>& p);

};

template<typename T>
ostream& operator<<(ostream& os, const Point<T>& p){
    os << "(" << p.x << "," << p.y << ")";
    return os; 
}

int main() {
    Point<int> ai(3, 5);
    Point<char> ac('d', 'e');
    Point<double> ad(3.5,5.7);

    cout << ai << endl;
    cout << ac << endl;
    cout << ad << endl;


    return EXIT_SUCCESS;
}


