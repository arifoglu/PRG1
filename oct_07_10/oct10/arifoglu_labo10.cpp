// abdulkadir arifoglu 10.10.2024 Laboratoire 10
/*
Le but :
- Écrire une fonction qui permet d’estimer la valeur de π tirant aléatoirement et uniformément des points dans un carré unité
- La proportion de points dont la distance à l’origine est inférieure à l’unité permet de déduire une approximation de π.
- La fonction prend comme paramètre le nombre de tirages aléatoires à faire et retourne l’estimation de π.
- Le programme principal affichera les estimations obtenues pour toutes les puissances de 2 représentables par les int.
- La bibliothèque <random> met à disposition divers outils pour la génération de nombres aléatoires.
- 
*/

#include <iostream>
#include <cstdlib>
#include <random>

using namespace std;

double estime_pi(int n ,mt19937 gen_mersenne);

int main() {    
    //random_device fournit une graine aléatoire obtenue à partir du matériel de l'ordinateur  
    random_device rd; 
    // Pour génère à chaque fois une séquence de nombres différente
    mt19937 gen_mersenne(rd());

    //Combien de fois il va detecter(ex : 5)
    double pi_estimes = estime_pi(5,gen_mersenne); 

    cout << pi_estimes << endl;

    return EXIT_SUCCESS;
}


double estime_pi(int nombre_total_tirages,mt19937 gen_mersenne){
    /* 
    - Pour choisir un nombre aléatoire et avec une probabilité égale entre (1,100)
    1)  uniform_int_distribution<int> val(1,100);
      Pour choisir un nombre aléatoire et avec une probabilité égale entre (0.0,1.0)
    2)  uniform_real_distribution<double> val(0.0,1.0);
    */
    // Nous allons selectionner des points dans un carré unité 
    // Nous avons besoin des valeurs en double , des points doivent être entre 0.0 - 1.0 
    uniform_real_distribution<double> val(0.0,1.0);

    //Le rayon du cercle à l’intérieur du carré unitaire est = 1 . (r = 1)
    //La distance à l’origine doit être inférieure à 1. => A(x,y) => (x^2 + y^2 <= r)
    //La formule pour carré unité: r = 1 => x^2 + y^2 <= 1

    // Compteur pour  des points détectés
    int compteur_dans_cercle = 0;

    // n fois corriger des points 
    for(int i = 0;i < nombre_total_tirages;++i){
        // Il nous faut deux coordonnées aléatoire
         double x = val(gen_mersenne);
         double y = val(gen_mersenne);
        
        // x^2 + y^2
        double distance_carre = (x * x) + (y * y);

        if(distance_carre <= 1.0)
        {
            cout << "("<<x << ","<< y <<")" << " à l'interieur du carré "<<endl;

            // si des points à l'interieur du carée le compteur augmentera
            compteur_dans_cercle++;
        }
    }

    // La formule => π / 4 = compteur_dans_cercle /nombre_total_tirages
    double calcul_pi = 4.0 * compteur_dans_cercle / nombre_total_tirages;

    return calcul_pi ;
}
