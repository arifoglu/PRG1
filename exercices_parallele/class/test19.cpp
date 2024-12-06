#include <iostream>
#include <cstdlib>
using namespace std;

class Point{
    private:
        int x, y;
    public:
        // constructor 1 sans argument
        Point() : x(0) , y(0) {};

        // constructor 2 (un argument)
        Point(int coord) : x(coord) , y(coord) {};          
        
        // constructor 3 (2 arguments)
        Point(int abscisse, int ordonnee) : x(abscisse) , y(ordonnee) {};    

        // fonction affiche 1 (sans arguments)
        void affiche() {
            cout << "(" << x << "," << y << ")\n" ;
        }   
        // fonction affiche 2 (un argument chaine)   
        void affiche(string = "");
  
};

int main() {

    return EXIT_SUCCESS;
}

