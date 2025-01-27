#include <iostream>
#include <cstdlib>
using namespace std;

template<typename T>
concept Arithmetic = is_arithmetic<T>::value;

template<Arithmetic T>
class Coord{
    private:
        T x, y;
    public:
        Coord(T abs = 0, T ord = 0) : x(abs) , y(ord) {}

        T getX() const;
        T getY() const;

        void setCoord(T abs, T ord);
        void deplacer(T dx, T dy);
        void afficher() const;
};
template<Arithmetic T>
void Coord<T>::afficher() const{
    cout << "(" << x << "," << y << ")";
}
template<Arithmetic T>
void Coord<T>::deplacer(T dx, T dy){
    x += dx;
    y += dy;
}
template<Arithmetic T>
T Coord<T>::getX()const{
    return x;
}
template<Arithmetic T>
T Coord<T>::getY()const{
    return y;
}
template<Arithmetic T>
void Coord<T>::setCoord(T abs, T ord){
    x = abs;
    y = ord;
}

int main () {
    cout << "origine  : ";
    const Coord<int> origin;
    origin.afficher();
    cout << endl;

    cout << "p1       : ";
    Coord<int> p1;
    p1.setCoord(1, 2);
    p1.afficher();
    cout << endl;

    cout << "p2       : ";
    Coord<double> p2(3, 4);
    p2.afficher();
    cout << endl;

    cout << "p2->     : ";
    p2.deplacer(1, 1);   // conversion int => double
    cout << "(" << p2.getX() << "," << p2.getY() << ")";
    cout << endl;

    return EXIT_SUCCESS;
}