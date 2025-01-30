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

enum class Quadrant{I, II, III, IV};
template<typename T, Quadrant q>
bool est_dans_quadrant(Point<T> const& p){
    switch(q){
        case Quadrant::I   : return p.getCoord().getX() > 0 && p.getCoord().getY() > 0;
        case Quadrant::II  : return p.getCoord().getX() < 0 && p.getCoord().getY() > 0;
        case Quadrant::III : return p.getCoord().getX() < 0 && p.getCoord().getY() < 0;
        case Quadrant::IV  : return p.getCoord().getX() > 0 && p.getCoord().getY() < 0;
    }
}

template<typename T>
void listerPoints(const vector<Point<T>>& v){
    for(const Point<T>& p : v){
        p.afficher();
        cout << endl;
    }
}

int main(){
    vector<Point<int>> dessin {{"p1",  1,  2},
                               {"p2",  4,  2},
                               {"p3",  9,  8},
                               {"p4", -1,  5},
                               {"p5",  3, -1},
                               {"p6",  7,  0}};
    cout << count_if(dessin.begin(),dessin.end(),est_dans_quadrant<int,Quadrant::I>);
    
    listerPoints(dessin);

    int dx = 10;
    int dy = 20;
    for_each(dessin.begin(),dessin.end(),[dx,dy](Point<int>& p){
        p.deplacer(dx,dy);
    });
    return EXIT_SUCCESS;
}
