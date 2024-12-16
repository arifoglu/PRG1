#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Point{
    private:
        T x, y;
    public:
        Point(T abs , T ord);
        void deplace(T dx, T dy);
        void affiche()const; 
};
template<typename T>
Point<T>::Point(T abs ,T ord){
    x = abs;
    y = ord;
}
template<typename T>
void Point<T>::deplace(T dx,T dy){
    x += dx;
    y += dy;
}
template<typename T>
void Point<T>::affiche() const{
    cout << "(" << x << ","<< y << ")" <<endl;
}

int main(){
    Point<int> p(3,6);
    p.affiche();

    Point<double> p2(3.5,6.8);
    p2.affiche();

    return EXIT_SUCCESS;
}
