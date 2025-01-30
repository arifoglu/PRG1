/*
Écrire un programme en C++ qui permet à l'utilisateur de saisir les données d'un.e étudiant.e, de calculer sa moyenne, et d'afficher un résumé de l'étudiant.e avec un formatage propre.

Le programme doit :

Demander à l'utilisateur de saisir
le nom,
l'âge,
la note en mathématiques (sur 6), et
la note en PRG1 (sur 6) de l'étudiant.e.
Calculer la moyenne de l'étudiant.e.
Déterminer si l'étudiant.e est admis.e (si la moyenne est supérieure ou égale à 3.8).
Afficher un tableau avec le nom, l'âge, les notes, la moyenne, et le statut d'admission de l'étudiant.e.
Un exemple de l'exécution du programme :

Entrez le nom de l'étudiant.e : Fouad Hanna
Entrez l'âge de l'étudiant.e : 19
Entrez la note en mathématiques (max. 6): 5.2
Entrez la note en PRG1 (max. 6): 5.3
Nom               Age  Note Math     Note PRG1    Admis
-------------------------------------------------------
Fouad Hanna        19        5.2           5.3     Oui
-------------------------------------------------------
Moyenne : 5.25
Résultat : Admis
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    const int w_col1 = 15;
    const int w_col2 = 6;
    const int w_col3 = 11;
    const int w_col4 = 14;
    const int w_col5 = 9;
    const int w_total = w_col1 + w_col2 + w_col3 + w_col4 + w_col5;

    string nom,admis;
    int age;
    double note_math,note_Prg1,moyenne;

    cout << "Entrez le nom de l'étudiant.e : ";
    getline(cin,nom);
    cout << "Entrez l'âge de l'étudiant.e : " ;
    cin >> age;
    cout << "Entrez la note en mathématiques (max. 6): ";
    cin >> note_math;
    cout << "Entrez la note en PRG1 (max. 6): ";
    cin >> note_Prg1;

    moyenne = (note_math + note_Prg1) / 2 ;

    moyenne >= 3.8 ? admis = "Oui" : admis = "Non";


    
    cout << setw(w_col1) << left  << "Nom" 
         << setw(w_col2) << right << "Age" 
         << setw(w_col3) << right << "Note Math" 
         << setw(w_col4) << right << "Note PRG1"  
         << setw(w_col5) << right << "Admis"
         << endl;
    
    // ?????
    cout << right << setw(w_total) << setfill('-') << ""<<"\n";

    cout << setw(w_col1) << left  << nom 
         << setw(w_col2) << right << age 
         << setw(w_col3) << right << note_math 
         << setw(w_col4) << right << note_Prg1  
         << setw(w_col5) << right<< admis
         << endl;

    cout << right << setw(w_total) << setfill('-') << ""<<"\n";

    cout << "Moyenne : " << moyenne  << endl;
    cout << "Résultat : " << (moyenne >= 3.8 ? "Admis\n" : "Non Admis\n");     

    return EXIT_SUCCESS;
}