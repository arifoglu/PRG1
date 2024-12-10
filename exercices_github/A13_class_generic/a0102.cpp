#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

//class Coord
template<typename T>
class Coord{
    private:
        T x, y;
    public: 
        Coord(T abs = 0, T ord = 0) : x(abs) , y(ord){}    

        T getX() const;
        T getY() const;

        void setCoord(T abs, T ord);
        void afficher()const;
};
//class Point
template<typename T>
class Point{
    private:
        string nom;     // noktanin adi
        Coord<T> coord; // koordinat bilgisi
    public:
        Point() : nom("origin"), coord(0,0){};
        Point(string nom, T abs = 0, T ord = 0) : nom(nom), coord(abs,ord) {}    

        string getNom()const;       // nokta adi al
        Coord<T> getCoord() const;  // koordinat al

        void setNom(string new_nom);
        void setCoord(T abs, T ord);

        void afficher() const;

};


int main () {
    cout << "p1       : ";
    Point<int> p1("p1"s);
    p1.afficher();
    cout << endl;
    
    return EXIT_SUCCESS;
}
//class Coord
template<typename T>
T Coord<T>::getX()const{
    return x;
}
template<typename T>
T Coord<T>::getY()const {
    return y;
}
template<typename T>
void Coord<T>::setCoord(T abs,T ord){
    x = abs;
    y = ord;
}
template<typename T>
void Coord<T>::afficher()const{
    cout << "(" << x << "," << y << ")";
}

// class Point
template<typename T>
string Point<T>::getNom()const{
    return nom;
}
template<typename T>
Coord<T> Point<T>::getCoord()const{
    return coord;
}
template<typename T>
void Point<T>::setNom(string new_nom){
    nom = new_nom;
}
template<typename T>
void Point<T>::setCoord(T abs, T ord){
    coord.setCoord(abs,ord);
}
template<typename T>
void Point<T>::afficher()const{
    cout << nom;
    coord.afficher();
}