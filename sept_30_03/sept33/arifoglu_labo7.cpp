// abdulkadir arifoglu 03.10.2024 Laboratoire 7
/* 
- Cet programme qui va lire une suite de valeurs non négatives de type double et qui affiche leur moyenne et leur variance
- Pour indiquer qu’il a terminé l’introduction des données, l’utilisateur fournit un nombre négatif.
*/
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    // La moyen

    // La formul moyen => x = (1 / n) ∑'i=1 n' xi

    //la valeur initiale du nombre de nombre saisis  
    int count = 0;
    //la valeur initiale de la somme des nombres saisis
    double total = 0.0; 
    // la valeur initiale de la moyen des nombres saisis
    double moyen = 0.0;
    // saisie des nombres par l'utilisateur
    double numeros;

    //La somme des carrés des nombres
    double total_carre_des_numeros = 0.0;

    //la valeur initiale de la variance
    double variance = 0.0;

    cout << "Saisissez les valeurs pour calculer la moyenne. :\n";
    while(true){
       cin >> numeros;

       // une valeur negative ,la boucle se terminera
       if(numeros < 0){break;}

       /* 
       - À chaque fois va entre une valeur, elle sera ajoutée au total. 
       - Ensuite, le nombre d’entrées sera incrémenté d’une unité. 
       - La moyenne sera calculée en divisant la valeur totale par le nombre d’entrées
       */
        total += numeros;
        ++count;
        moyen = total / count ;
        
        /*
        -  la formul variance : v = (((∑'i=1 n' xi^2) - 1/n(∑'i=1 n' xi)^2)) / (n - 1);
        -  selon la formule =>  n == count;  
        */

        //  La somme des carrés des nombres saisis
        total_carre_des_numeros += pow(numeros,2); 

        // il nous faut au moins deux données pour calculer la variance
        if(count > 1){
            // selon la formul variance     
            variance = (total_carre_des_numeros - ((1.0 / count) * pow(total,2)))/ (count - 1.0);
        }
    }
    cout << "La moyenne des valeurs saisies : " << moyen <<endl;
    cout << "La variance des valeurs saisies : " << variance <<endl;
    
    return EXIT_SUCCESS;
}