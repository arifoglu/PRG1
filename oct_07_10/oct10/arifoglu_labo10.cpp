// abdulkadir arifoglu 10.10.2024 Laboratoire 10
/*
Le but :
- Écrire une fonction qui permet d’estimer la valeur de π tirant aléatoirement et uniformément des points dans un carré unité
- La proportion de points dont la distance à l’origine est inférieure à l’unité permet de déduire une approximation de π.
- La fonction prend comme paramètre le nombre de tirages aléatoires à faire et retourne l’estimation de π.
*/
#include <iostream>
#include <cstdlib>
#include <random>

using namespace std;

double estime_Pi(int n ,mt19937& gen_mersenne);

int main() {   
    // Il faut initialiser la génération aléatoire d’un nombre une seule fois
    // random_device fournit une graine aléatoire obtenue à partir du matériel de l'ordinateur  
    random_device rd; 
    // Pour génère à chaque fois une séquence de nombres différente
    mt19937 gen_mersenne(rd());

    //On va essayer jusqu'à 2^19
    for(int i = 1;i < 524288 ; i *= 2){
        double pi_estimes = estime_Pi(i,gen_mersenne); 
        cout << "π ~ " << pi_estimes << endl;
    }
    return EXIT_SUCCESS;
}

double estime_Pi(int total_tirages,mt19937& gen_mersenne){
    /* 
    - Pour choisir un nombre aléatoire et avec une probabilité égale entre (1,100)
    1)  uniform_int_distribution<int> val(1,100);
      Pour choisir un nombre aléatoire et avec une probabilité égale entre (0.0,1.0)
    2)  uniform_real_distribution<double> val(0.0,1.0);
    */
    
    // Nous allons selectionner des points dans un carré unité 
    // Nous avons besoin des valeurs en double , des points doivent être entre 0.0 - 1.0 
    uniform_real_distribution<double> val(0.0,1.0);

    //Le rayon du cercle à l’intérieur du carré unitaire est = 1 . => (r = 1)
    //La distance à l’origine doit être inférieure à 1.            =>  A(x,y) => (x^2 + y^2 <= r)
    //La formule pour carré unité:                           r = 1 =>  x^2 + y^2 <= 1

    // Compteur pour  des points détectés
    int compteur_dans_cercle = 0;

    // total_tirages fois corriger des points 
    for(int i = 0;i < total_tirages;++i){
        // Il nous faut deux coordonnées aléatoire
         double x = val(gen_mersenne);
         double y = val(gen_mersenne);
        
        // x^2 + y^2
        double distance_au_carre = (x * x) + (y * y);

        if(distance_au_carre <= 1.0)
        {
            //cout << "("<<x << ","<< y <<")" << " à l'interieur du carré "<<endl;

            // si le point à l'interieur du cercle le compteur augmentera
            compteur_dans_cercle++;
        }
    }

    // La formule => π / 4 = compteur_dans_cercle /total_tirages
    // La formule utilise π / 4 car nous travaillons dans un quart de cercle à l'interieur du carré unité
    double calcul_pi = 4.0 * compteur_dans_cercle / total_tirages;

    return calcul_pi ;
}
