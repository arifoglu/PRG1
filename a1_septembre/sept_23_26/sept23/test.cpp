#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    double x ;
    int n,p;
    p = 7;
    x = 2.5;
    n = 10;

    cout << .5 *  n << endl;         //resultat 5.0 mais cout ignore 0 apres le virgule.affichage 5
    cout << .5 * (double) n << endl; //resultat 5.0 mais cout ignore 0 apres le virgule.affichage 5

    return EXIT_SUCCESS;
}