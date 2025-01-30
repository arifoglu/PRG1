// abdulkadir arifoglu 24.09.2024 Laboratoire 4
// montre mécanique 
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    const int min_par_tour = 60 ;       // 1 tour 60 min
    const int degre_comple_tour = 3600; // 1 tour complet 3600 degree
    const int minute_depart = 15;       // 0° 15.min

    //prendre l'angle d'utilisateur
    int angle;
    cout << "Entrez l'angle: ";
    cin >> angle;

    //calculation
    // detecter total secondes 
    // position d'angle = 3600° - angle 
    // total secondes = position d'angle % 3600
     int total_secondes = (degre_comple_tour - angle) % degre_comple_tour; 

    // detecter minutes
    int minutes = (minute_depart + total_secondes / 60) % min_par_tour;
    int secondes = total_secondes % 60;

    // affichage le resultat
    cout << minutes << "min et " << secondes << " s"<<endl; 

    return EXIT_SUCCESS;
}