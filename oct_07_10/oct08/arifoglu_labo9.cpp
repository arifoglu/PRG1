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

int suite_syracuse(int n);

int main() {

    int nombre ;
    cout << "Saisissez un nombre : ";
    cin >> nombre;
    
    suite_syracuse(nombre);

    return EXIT_SUCCESS;
}

int suite_syracuse(int n){
    if(n <= 0 )return 0;// 
        int count = 0; // nombre de transactions
    do
    {
        if(n % 2 == 0)
        {
            n /= 2; // si n est pair
        }
        else if(n % 2 != 0)
        {
            n = n * 3 + 1;// si n est impair
        }
        cout << n << " ";// n est après le proces
        count++;
    }while( n != 1);
    cout << endl;
    cout << "Nombre de transactions : " << count <<endl;

    return EXIT_SUCCESS;    
}
