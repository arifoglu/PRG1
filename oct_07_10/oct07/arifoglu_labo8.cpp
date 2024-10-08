// abdulkadir arifoglu 07.10.2024 Laboratoire 8
// Écrire un programme, sans utiliser de tableaux, qui imprime des carrés imbriqués
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    /* 

    //    ┌ ─────────────── ┐
    //    └ ─────────────── ┘
    
    // Avec des caractères (-) (|)

                           15
    => 15   ┌ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ┐ 
            |              11               |
    => 11   |   ┌ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ┐   |
            |   |           7           |   |
    => 7    |   |   ┌ ─ ─ ─ ─ ─ ─ ─ ┐   |   |
            |   |   |       3           |   |
    => 3    |   |   |   ┌ ─ ─ ─ ┐       |   |
           7|  5|  3|  1|   ◼️   |       |   |
    => 1    |                           |   |
    
            └ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ┘
    */

    // caracter unicode  caré => ⏹ => // \u25A0
    const char gauche_haut_coin = '┌';// \u250c
    const char droit_haut_coin = '┐'; // \u2510
    const char gauche_bas_coin = '└'; // \u2514
    const char droit_bas_coin = '┘';  // \u2518
    const char trace = '-';           // \u2500
    const char slash = '|';           // \u2502

    int nombre_care;
    cout << "Combien de carrés ? : ";
    cin >> nombre_care;

    if(nombre_care == 1){
       cout << "\u25A0" << endl; 
    }
    if(nombre_care > 1){
            cout << "┌";
               // for (int i = 0; i < 3; i++) { 
               //     cout << trace;
               // }
            cout << "┐" << endl;
    }
    return 0;
}

