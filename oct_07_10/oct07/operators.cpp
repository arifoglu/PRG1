// VarLocStatiques
#include <iostream>
using namespace std;

struct Vecteur{double x;double y;};

Vecteur operator-(const Vecteur & gauche,const Vecteur & droit){
    return {gauche.x - droit.x,gauche.y - droit.y};
}
Vecteur operator+(const Vecteur & gauche,const Vecteur & droit){
    return {gauche.x + droit.x,gauche.y + droit.y};
}
Vecteur operator/(const Vecteur &gauche ,double facteur){
    return {gauche.x/facteur ,gauche.y/facteur};
}
Vecteur perpendiculaire(Vecteur v){
    return {-v.y,v.x};
} 
void dessine(Vecteur depart,Vecteur arrivee,int niveau){
    if(niveau == 0)
    {
       cout  << " newpath "<< depart.x  << ' ' << depart.y
             << "moveto "  << arrivee.x << ' ' << arrivee.y
             << "lineto stroke\n";
    }
    else{
        Vecteur delta = arrivee - depart, 
        a = delta/ 3,
        b = delta / 2 + perpendiculaire(a),
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