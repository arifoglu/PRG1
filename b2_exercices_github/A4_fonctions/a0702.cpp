#include <iostream>
#include <cstdlib>

using namespace std;

void afficher();

int main(){
    for(int i = 0 ;i < 3;++i){
        afficher();
    }
    return EXIT_SUCCESS;
}

void afficher(){
    static int compteur;
    cout <<"Appel no " << ++compteur <<endl;
}

