#include <iostream>
using namespace std;

template<typename T>
class Point {
    private:
        T x, y;
    public:
        Point(T abs, T ord) : x(abs), y(ord) {}      // constructor
        void affiche() const;

};
template<typename T> 
void Point<T>::affiche() const{
    cout << "(" << x << "," << y << ")\n";
}

int main() {
    Point<int> ai(3, 5);
    ai.affiche();

    Point<char> ac('d', 'e');
    ac.affiche();

    Point<double> ad(3.5,5.7);
    ad.affiche();

    return EXIT_SUCCESS;
}


