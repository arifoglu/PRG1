//abdulkadir arifoglu - 19.09.2024 - Laboratoire 2
//programme de transformation d'unite
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){  
    int input_secondes,secondes,minutes,heures,jours,semaines;

    cout << "Entrez secondes : ";
    cin >> input_secondes;

    // une semaine = 7 jours * 24 heures * 60 minutes * 60 secondes
    semaines = input_secondes / (60 * 60 * 24 * 7);

    // atteindre les numeros des jours utilise modulus %
    jours = (input_secondes % (60 * 60 * 24 * 7)) / (60 * 60 * 24);
    heures = (input_secondes % (60 * 60 * 24)) / (60 * 60) ;
    minutes = (input_secondes % (60 * 60)) / 60;
    secondes = input_secondes % 60;

    cout << semaines << " semaines " << heures << " heures "<< jours << " jours " << minutes << " minutes " << secondes << " seconde "<<endl;

    return 0;
}