#include <iostream>
#include <cstdlib>
using namespace std;

class exemple{
        static int commun;
        static const int commun2 = 5;

};
// Initialisation obligatoirement en dehors de la classe
int commun = 3;


int main() {
    cout << "commun : " << commun << endl;    
    

    return EXIT_SUCCESS;
}
