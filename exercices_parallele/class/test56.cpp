#include <iostream>
using namespace std;

template<typename T, size_t n>
class Tableau{
    private:
        T tab[n];
    public:
        Tableau(){
            cout << "constructor fonctionne . " << n << " elements. ";
        }

        T& operator[](int i){
            return tab[i];
        }    
};

class Point{
    private:
        int x, y;
    public:
        Point(int abs = 0, int ord = 0) : x(abs) , y(ord) {}

        friend ostream& operator<<(ostream&, const Point &);
};
ostream& operator<<(ostream& os, const Point& p){
    os << "(" << p.x << ","  << p.y << ")";
    return os;
}

int main() {
    Tableau<Point, 4> t;

    // tableau ya point classindan deger olusturuyoruz 
    for(int i = 0; i < 4; ++i){
       t[i] = Point(i, i+1);
    }

    for(int i = 0; i < 4 ;++i){
        cout << t[i];
    }
    cout << endl;

    return EXIT_SUCCESS;
}


