#include <iostream>
#include <string>
using namespace std;

//coord
template<typename T>
class Coord{
    private:
        T x, y;
    public:
        Coord(T abs = 0 ,T ord = 0): x(abs), y(ord){}
        void afficher()const;
        T getX()const{return x;};
        T getY()const{return y;};
        void setCoord(double,double);
        void deplacer(double,double);
};
template<typename T>
void Coord<T>::afficher()const{
    cout << "(" << x << "," << y << ")" ;
}   
template<typename T>
void Coord<T>::setCoord(double dx, double dy){
    this->x = dx;
    this->y = dy;
}
template<typename T>
void Coord<T>::deplacer(double dx, double dy){
    this->x += dx;
    this->y += dy;
}

template<typename T>
class Point{
    private:
        string nom;
        Coord<T> coord;
    public:
        Point():nom(){}
        Point(const string& name): nom(name){} 
        Point(const string& name,Coord<T> crd): nom(name), coord(crd){}
        Point(const string& name,double dx,double dy): nom(name), coord(dx,dy){}

        void setNom(const string&);
        void setCoord(Coord<T> crd);

        string getNom()const{return nom;}
        Coord<T> getCoord()const{return coord;}

        void deplacer(T dx,T dy);
        void afficher()const;

};
template<typename T>
void Point<T>::afficher()const{
    cout << nom ;
    coord.afficher();
}
template<typename T>
void Point<T>::setNom(const string& str){
    nom = str;
}
template<typename T>
void Point<T>::setCoord(Coord<T> crd){
    coord = crd;
}
template<typename T>
void Point<T>::deplacer(T dx,T dy){
    coord.deplacer(dx,dy);
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
    cout << p1.getNom() << " " << p1.getCoord().getX();
    return EXIT_SUCCESS;
}
