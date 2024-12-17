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
        Coord(T abs = 0, T ord = 0);
        void afficher()const;    
};
template<typename T>
Coord<T>::Coord(T abs, T ord) : x(abs), y(ord){}

template<typename T>
void Coord<T>::afficher()const{
    cout << "(" << x << "," << y << ")";
}

//class Point
template<typename T>
class Point{
    private:
        string nom;
        Coord<T> coord;
    public:
        Point(const string& name = "origin");
        Point(const string& nom,Coord<T> coord);
        Point(const string&nom, double a,double b);

        void afficher()const;    

};
template<typename T>
Point<T>::Point(const string& name ) : nom(name) {};

template<typename T>
void Point<T>::afficher()const{
    cout << nom;
    coord.afficher();
}

template<typename T>
Point<T>::Point(const string& nom,double a, double b){  
    coord.x = a;
    coord.y = b;
}
int main () {
    const Point<int> origin;

    cout << "p1       : ";
    Point<int> p1("p1"s);
    p1.afficher();
    cout << endl;

    cout << "p2       : ";
    Point<double> p2("p2"s, Coord(1.2, 3.4));
    p2.afficher();
    cout << endl;
    
    //cout << "p3       : ";
    //Point<double> p3("p3"s, 1.2, 3.4);
    //p3.afficher();
    //cout << endl;
    
    //cout << "p3.1     : ";
    //p3.setNom("p3.1"s);
    //p3.afficher();
    //cout << endl;
    
    //cout << "p1(-1, 1): ";
    //p1.setCoord(Coord(-1, 1));
    //p1.afficher();
    //cout << endl;
    
    //cout << "p1->     : ";
    //p1.deplacer(-1, 1);
    //p1.afficher();
    //cout << endl;
    
    //cout << "p1(x)    : ";
    //cout << p1.getNom() << " " << p1.getCoord().getX();
    //return EXIT_SUCCESS;
}
