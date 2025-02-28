#include <iostream>
#include <cstdlib>
#include <numbers>

using namespace std;

int main() {
    double r1, r2, h1, h2, h3, volume_cylindre1,volume_cylindre2, volume_cone, contenance;

    cout << "Entrez le rayon du cylindre 1   [cm] :";
    cin >> r1 ;
    cout << "Entrez le rayon du cylindre 2   [cm] :";
    cin >> r2 ; 
    cout << "Entrez la hauteur du cylindre 1 [cm] :";
    cin >> h1 ;
    cout << "Entrez la hauteur du cylindre 2 [cm] :";
    cin >> h2 ;
    cout << "Entrez la hauteur du tronc de cone [cm] :";
    cin >> h3 ;
    
    volume_cylindre1 = numbers::pi * r1 * r1 * h1;
    volume_cylindre2 = numbers::pi * r2 * r2 * h2;
    volume_cone = ((((r1 * r1) + (r2 * r2 )) + (r1 * r2)) * h3 * numbers::pi ) / 3;
    contenance = volume_cylindre1 + volume_cylindre2 + volume_cone;
    
    cout << "La contenance de la bouteille est de " <<  contenance << " cm3 " << "= " << contenance / 1000 << " litre" << endl;

    return EXIT_SUCCESS;
}