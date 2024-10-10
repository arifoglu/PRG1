#include "Vecteur.hpp"

struct Vecteur{double x;double y;};

// operator-
Vecteur operator-(const Vecteur & v) {
    return {-v.x, -v.y};
}

///////////////////////////
// operator+=
Vecteur & operator+=(Vecteur & gauche,const Vecteur & droit){
    gauche.x += droit.x; gauche.y += droit.y;
    return gauche;
}

// operator+
Vecteur operator+(Vecteur gauche,const Vecteur & droit){
    return gauche += droit;
}
// Vecteur operator+(const Vecteur & gauche,const Vecteur & droit){
//     // return {gauche.x + droit.x,gauche.y + droit.y};
// }
///////////////////////////
//operator-=
Vecteur & operator-=(Vecteur & gauche,const Vecteur & droit){
    return gauche += -droit;
}
// operator-
Vecteur & operator-(Vecteur & gauche,const Vecteur & droit){
    return gauche += -droit;
}
// operator-
Vecteur operator-(const Vecteur & gauche,const Vecteur & droit){
    return {gauche.x - droit.x,gauche.y - droit.y};
}

///////////////////////////////
// operator/
Vecteur operator/(const Vecteur &gauche ,double facteur){
    return {gauche.x/facteur ,gauche.y/facteur};
}

Vecteur perpendiculaire(Vecteur v){
    return {-v.y,v.x};
} 
//////////////////////////////

