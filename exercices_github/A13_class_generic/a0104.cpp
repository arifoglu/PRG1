#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

template<typename T>
class Coord{
    private:
        T x, y;
    public:
        Coord(T abs = 0, T ord = 0) : x(abs) , y(ord) {}

        T getX()const;
        T getY()const;
        void setCoord(const int,const int);
        void deplacer(T dx, T dy);
        void afficher()const;
            
};

template<typename T>
class Point{
    private:
        string nom;
        Coord<T> coord;
    public:
        Point(const string& name) : nom(name) {}
        Point(const string& name,const Coord<T>& coord) : nom(name), coord(coord){}
        Point(const string& name,double a, double b) : nom(name), coord(a,b){}
        
        string getNom()const;
        void setNom(const string& name);

        void setCoord(const Coord<T>& new_coord);

        Coord<T> getCoord() const;

        void deplacer(T dx, T dy);

        void afficher() const; 

};

template<typename T>
void listerPoints(const vector<Point<T>>& v){
    for(const Point<T>& p : v){
        p.afficher();
        cout << endl;
    }
}

int main () {
vector<Point<int>> dessin {{"p1",  1,  2},
                           {"p2",  4,  2},
                           {"p3",  9,  8},
                           {"p4", -1,  5},
                           {"p5",  3, -1},
                           {"p6",  7,  0}};

listerPoints(dessin);

    return EXIT_SUCCESS;
}
//afficher Point
template<typename T>
void Point<T>::afficher() const{
    cout << nom ;
    coord.afficher();
}
//afficher Coord
template<typename T>
void Coord<T>::afficher() const{
    cout << "(" << x << "," << y << ")";
}

//getNom setNom
template<typename T>
string Point<T>::getNom()const{
    return this->nom;
}
template<typename T>
void Point<T>::setNom(const string& name){
    this->nom = name;
}

// getCoord setCoord
template<typename T>
T Coord<T>::getX()const{
    return this->x; 
}
template<typename T>
T Coord<T>::getY()const{
    return this->y; 
}
template<typename T>
void Coord<T>::setCoord(const int a, const int b){
    this->x = a;
    this->y = b;
}

template<typename T>
void Point<T>::setCoord(const Coord<T>& new_coord){
    coord = new_coord;
}
// deplacer
template<typename T>
void Coord<T>::deplacer(T dx, T dy){
    this->x += dx;
    this->y += dy;
}
template<typename T>
void Point<T>::deplacer(T dx, T dy){
    this->coord.deplacer(dx,dy);
}

//
template<typename T>
Coord<T> Point<T>::getCoord() const{
    return coord;
}
