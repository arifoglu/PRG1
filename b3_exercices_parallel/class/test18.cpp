#include <iostream>
#include <cstdlib>
using namespace std;

class Point{
    private:
        int x, y;
    public:
        // constructor 1 sans argument
        Point();             
        // constructor 2 (un argument)
        Point(int);          
        // constructor 3 (2 arguments)
        Point(int, int);     

        // fonction affiche 1 (sans arguments)
        void affiche() {
            cout << "(" << x << "," << y << ")\n" ;
        }   
        // fonction affiche 2 (un argument chaine)   
        void affiche(string);
  
};

int main() {
    Point a();    // appel constructor 1
    Point b(2);   // appel constructor 2 
    Point c(3,4); // appel constructor 3
    
    b.affiche();  // affiche 1
    return EXIT_SUCCESS;
}

