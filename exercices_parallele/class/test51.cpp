#include <iostream>
using namespace std;

template<typename T>
class Point {
    private:
        T x, y;
    public:
        Point(T abscisse, T ordonnee);      // constructor
        void deplace(T dx, T dy);
        void affiche();

};

int main() {


    return EXIT_SUCCESS;
}


