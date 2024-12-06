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
            cout << "-- destruction  : il reste maintenant" << --ctr << " objets\n"; 
        } 
        static void compte()
        {
            cout << "-- destruction  : il y a             " << ctr << " objets\n"; 
        }   
};
int Compteur::ctr = 0;

int main() {
    Compteur a;
    

    return EXIT_SUCCESS;
}


