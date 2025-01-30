/*
Ecrire une fonction qui prend 2 paramètres de type char et qui affiche, sur une même ligne, tous les caractères non accentués compris entre deux paramètres debut et fin, bornes comprises.

!!! Rien n'est affiché si debut > fin.

*/
#include <cstdlib>
#include <iostream>


bool listerCaracteres(char debut,char fin);

using namespace std;

int main() {
    char c1,c2;
    
    cout << "Saisissez une caracter : ";
    cin >> c1;
    cout << "Saisissez une caracter : ";
    cin >> c2;
    
    listerCaracteres(c1,c2);

    return EXIT_SUCCESS;
}

bool listerCaracteres(char debut,char fin){
    if(debut > fin){return false;}
    
    for (char i = debut; i <= fin; ++i) {
        cout << i;
    }
    cout << endl;
    
    return true;
}

