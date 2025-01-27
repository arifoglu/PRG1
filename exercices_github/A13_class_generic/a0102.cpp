#include <iostream>
#include <string>
using namespace std;

template<typename T>
class Coord{
    private:
        T x, y;
    public:
        Coord();
        Coord(T abs, T ord);
        void afficher()const; 
        T getX()const;
        T getY()const;
        void setCoord(T dx, T dy);  
        void deplacer(T dx, T dy); 
    
};
template<typename T>
Coord<T>::Coord() : x(0.0), y(0.0){};

template<typename T>
Coord<T>::Coord(T abs , T ord): x(abs) , y(ord){};

template<typename T>
void Coord<T>::afficher()const{
    cout << "(" << x << "," << y << ")";
}
template<typename T>
T Coord<T>::getX()const{return this->x;};
template<typename T>
T Coord<T>::getY()const{return this->y;};

template<typename T>
void Coord<T>::setCoord(T dx, T dy){
    this->x = dx;
    this->y = dy;
};

template<typename T>
void Coord<T>::deplacer(T dx, T dy){
    this->x += dx;
    this->y += dy;
} 
template<typename T>
class Point{
    private:
        string nom;
        Coord<T> coord;
    public:
        Point();
        Point(const string& name);
        Point(const string& name,Coord<T> coord);
        Point(const string&name , double a, double b);
        
        void afficher()const;
        
        string getNom()const{return this->nom;}
        void setNom(const string& name);
        
        Coord<T> getCoord()const;
        void setCoord(const Coord<T>& new_coord);
        void deplacer(T dx, T dy);

};
template<typename T>
Point<T>::Point(){}

template<typename T>
Point<T>::Point(const string& name): nom(name) {}

template<typename T>
Point<T>::Point(const string& name, Coord<T> coord) : nom(name), coord(coord){}

template<typename T>
Point<T>::Point(const string& name, double a, double b): nom(name), coord(a,b){}

template<typename T>
void Point<T>::afficher()const{
    cout << nom ;
    coord.afficher();
}
template<typename T>
void Point<T>::setNom(const string& name){
    this->nom = name;
}
template<typename T>
Coord<T> Point<T>::getCoord()const{
    return coord;
}
template<typename T>
void Point<T>::setCoord(const Coord<T>& new_coord){
    coord = new_coord;
}

template<typename T>
void Point<T>::deplacer(T dx, T dy){
    this->coord.deplacer(dx,dy);
}
int main(){
    const Point<int> origin;
    
    cout << "p1       : ";
    Point<int> p1("p1"s);
    p1.afficher();
    cout << endl;
    
    cout << "p2       : ";
    Point<double> p2("p2"s, Coord(1.2, 3.4));
    p2.afficher();
    cout << endl;
    
    cout << "p3       : ";
    Point<double> p3("p3"s, 1.2, 3.4);
    p3.afficher();
    cout << endl;
    
    cout << "p3.1     : ";
    p3.setNom("p3.1"s);
    p3.afficher();
    cout << endl;
    
    cout << "p1(-1, 1): ";
    p1.setCoord(Coord(-1, 1));
    p1.afficher();
    cout << endl;
    
    cout << "p1->     : ";
    p1.deplacer(-1, 1);
    p1.afficher();
    cout << endl;
    
    cout << "p1(x)    : ";
    cout << p1.getNom() << " " << p1.getCoord().getX()<<endl;
    return EXIT_SUCCESS;
}
