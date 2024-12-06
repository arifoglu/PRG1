#include <iostream>
#include <cstdlib>
using namespace std;

class Compteur{
    private:
        static int ctr;
    public :
        Compteur()
        {
            cout << "++ construction : il y a maintenant " << ++ctr << " objets\n"; 
        }    
        ~Compteur()
        {
            cout << "-- destruction  : il y a maintenant " << --ctr << " objets\n"; 
        }    
};
int Compteur::ctr = 0;

void f();

int main() {
    Compteur a;
    f();

    return EXIT_SUCCESS;
}

void f(){
    Compteur k, l;
}
