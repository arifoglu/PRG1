#include <iostream>
using namespace std;

template<typename T>
class Point{
    private:
        T x, y;
    public:
        Point(T abs = 0, T ord = 0) : x(abs), y(ord) {}
        
        void affiche() const;    
};

template<typename T>
void Point<T>::affiche() const{
    cout << "(" << x << "," << y << ")";
}

template<> 
void Point<char>::affiche() const{
    cout << "(" << (int)x << "," << (int)y << ")";
}


int main() {
    Point<int> ai(3,5);
    ai.affiche();

    Point<char> ac('d','e');
    ac.affiche();

    return EXIT_SUCCESS;
}


