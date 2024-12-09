#include <iostream>
using namespace std;

template<typename T> class Point;
template<typename T> ostream& operator<<(ostream& ,const Point<T>&);

template<typename T> 
class Point{
    private:
        T x, y;
    public:
        Point(T abs = 0, T ord = 0) : x(abs) , y(ord) {}

        friend ostream& operator<< <T> (ostream& , const Point<T>& ); 

        Point<T> & operator+=(const Point<T>& );   
};

template<typename T>
ostream& operator<<(ostream& os, const Point<T>& p){
    os << "(" << p.x << "," << p.y << ")" ;
    return os;
}

template<typename T>
Point<T> & Point<T> ::operator+=(const Point<T>& autre){
    x += autre.x;
    y += autre.y;
    return *this;
}

int main() {
    Point<double> p{2.4,4.5};
    cout << p << endl;

    p += {1.1,1.0};
    cout << p << endl;
    
    return EXIT_SUCCESS;
}


