// abdulkadir arifoglu 08.10.2024 laboratoire 9
/*
- La suite de Syracuse consiste à répéter les opérations suivantes sur un nombre entier positif tant qu’on n’arrive pas à 1 :
- si le nombre est pair, le diviser par 2
- s’il est impair, le multiplier par 3 et ajouter 1
- Par exemple, à partir de 17, on trouve la suite de valeurs : 52 26 13 40 20 10 5 16 8 4
2 1.
*/
#include <iostream>
#include <cstdlib>

using namespace std;

// Cette fonction permet de calculer la suite de Syracuse.
int suite_syracuse(int n);

int main() {
    // Pour calculer la suite de Syracuse on prends un nombre entier d'utilisateur
    int nombre ;
    cout << "Saisissez un nombre : ";
    cin >> nombre;
    
    //Nous allons calculer et s'afficher la valeur donnée par l’utilisateur dans cette fonction. 
    cout << suite_syracuse(nombre) << endl;
    
    return EXIT_SUCCESS;
}

int suite_syracuse(int n){
    // Si utilisateur saisis une valeur inferieur 0 ,functions se terminera  
    if(n <= 0 )return 0;

    // nombre de transactions 
    int compteur = 0; 

    do
    {
        if(n % 2 == 0)
        {
            // si n est pair
            n /= 2; 
        }
        else if(n % 2 != 0)
        {
            // si n est impair
            n = n * 3 + 1;
        }
        // n est après le proces
        cout << n << " ";       
        compteur++;
    }while( n != 1);
    cout << endl;
    
    return compteur;
}
