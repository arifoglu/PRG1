/*
Ecrire un programme C++ mettant à disposition une fonction permettant de calculer le volume d'une pyramide à base rectangulaire.

Appliquer la fonction pour calculer le volume des 2 pyramides suivantes :

Pyramide 1 : base de longueur 10 et de largeur 3.5; hauteur = 12
Pyramide 2 : base de longueur 3.6 et de largeur 2.4; hauteur = 2.7
Afficher les résultats avec un chiffre après la virgule.=> << fixed << setprecison(1)
*/
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <iomanip> // => std::setprecision()

using namespace std;

double calcul_volume_pyramide (double longeur, double largeur,double hauteur);

int main() {
    double base_de_longeur,base_de_largeur,hauteur;
    cout << "Saisissez les dimensions de la pyramide "<<endl;
    cout << "Base de longeur : ";
    cin  >> base_de_longeur;
    cout << "Base de largeur : ";
    cin  >> base_de_largeur;
    cout << "Hauteur : ";
    cin  >> hauteur;

    double volume_pyramide = calcul_volume_pyramide (base_de_longeur,base_de_largeur,hauteur);

    cout << "Volume pyramid : " << fixed << setprecision(1) <<  volume_pyramide << endl;

    return EXIT_SUCCESS;
}

double calcul_volume_pyramide (double longeur, double largeur,double hauteur){
    /* 
    - formula de la pramide rectangulaire
    - v = 1 / 3 * ( aire de la base ) * hauteur
    */
   // pour eviter des résultats negative il faut utiliser => static_cast<double>
   double volume = (static_cast<double>(1) / 3) * (longeur * largeur) * hauteur;

   return volume;
}