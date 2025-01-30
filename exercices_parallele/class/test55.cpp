#include <iostream>
using namespace std;

template<typename T, size_t n>
class Tableau{
    private:
        T tab[n];
    public:
        Tableau(){
            cout << "constructor fonctionne. " << n << " elements : ";
        }
        T operator[](int i)const{ return tab[i];}// elements yazdirmak(const) 
        T& operator[](int i)    { return tab[i];}// elements eklemek 
};

class Point{
    int x, y;
    public:
        Point(int abs = 0, int ord = 0) : x(abs), y(ord){}
        void affiche() const{
            cout << "(" << x << "," << y << ")" ;
        }
};

int main() {
    Tableau<Point, 3> tp;           // Point array 3 elements

    for(int i = 0; i < 3; ++i){     
        tp[i] = Point(i, i + 1);   // array in her elemanina bir Point atanir
    }

    for(int i = 0; i < 3;++i){
        tp[i].affiche();
        cout << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}


