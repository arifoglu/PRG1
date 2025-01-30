#include <iostream>
#include <cstdlib>
using namespace std;

template<typename T>
class Coord{
    private:
        T x, y;
    public:
        Coord();
        Coord(T abs,T ord);
        void afficher()const;
        void deplacer(T dx,T dy);
        
        T getX()const;
        T getY()const;

        void setCoord(T d1,T d2);


};
template<typename T>
Coord<T>::Coord(){
    x = 0;
    y = 0;
}
template<typename T>
Coord<T>::Coord(T abs,T ord){
    x = abs;
    y = ord;
}

template<typename T>
void Coord<T>::afficher()const{
    cout << "(" << x << "," << y << ")";
}
template<typename T>
T Coord<T>::getX()const{
    return x;
}
template<typename T>
T Coord<T>::getY()const{
    return y;
}
template<typename T>
void Coord<T>::setCoord(T dx, T dy){
    x = dx;
    y = dy;
}
template<typename T>
void Coord<T>::deplacer(T dx,T dy){
    x += dx;
    y += dy;
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
    cout << "(" << p2.getX() << ", " << p2.getY() << ")";
    cout << endl;

    return EXIT_SUCCESS;
}