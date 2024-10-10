// VarLocStatiques
#include <iostream>
#include "Vecteur.hpp"

using namespace std;

void dessine(const Vecteur & depart,const Vecteur & arrivee,int niveau){
    if(niveau == 0)
    {
       cout  << arrivee.x << ' ' << arrivee.y
             << "linetoc";
    }
    else{
        Vecteur delta = arrivee - depart, 
        a = depart + delta/ 3,
        b = depart + delta / 2 + perpendiculaire(a),
        c = delta/3;

            dessine(depart     ,depart + a, niveau - 1);
            dessine(depart + a ,depart + b, niveau- 1);
            dessine(depart + b ,depart + c, niveau- 1);
            dessine(depart + c ,arrivee,niveau- 1);
        }
}
int main() {
 // Vecteur debut = {100,200}, fin = {500,700};
 //fin - debut;

 dessine({100,200},{500,700},1);
 cout << "showpage\n";

}

