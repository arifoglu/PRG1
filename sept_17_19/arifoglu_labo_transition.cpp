//abdulkadir arifoglu - 19.09.2024 - Laboratoire 2
//programme de transformation d'unite
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    const int pouce_par_pied = 12;         // 1 pied = 12 pouce 
    const double metre_par_pouce = 0.0254; // 1 pouce = 0.0254 metre

    double longeur; // longeur entre par l'utilisateur
    cout << "Longeur en metres a transformer en pieds et pouce: "<<endl;
    cin >> longeur;

    //arrondir la longeur en pouces uniquement
    int pouces  = int(longeur / metre_par_pouce + (0.5));

    // calculer le nombre de pieds
    int pieds = pouces / pouce_par_pied;

    // soustraire les pieds aux pouces
    pouces = pouces % pouce_par_pied;

    // afficher le resultat
    cout << pieds << " pieds et " <<pouces <<" pouces " << 
    ( pieds * pouce_par_pied + pouces ) * metre_par_pouce <<" metres"<<endl;

}