#include <iostream>
using namespace std;

template<typename T, typename U = double, typename V = T >
class Point{
    public:
        void affiche() const{
            cout << "T : "   << typeid(T).name() 
                 << "\nU : " << typeid(U).name() 
                 << "\nV : " << typeid(V).name()
                 <<endl;
         }
};

int main() {
    Point<int> a1;
    a1.affiche();                // int double int

    Point<int,char> a2;
    a2.affiche();                //  int char  int 

    Point<int,char,double> a3; 
    a3.affiche();               //   int char  double

    Point<double> a4;
    a4.affiche();               // double double double
    
    return EXIT_SUCCESS;
}


