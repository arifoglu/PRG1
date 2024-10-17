#include "vecteur.hpp"
#include <iostream>
using namespace std;

////////
// +=
Vecteur & operator+=(Vecteur & gauche,const Vecteur & droit){
    gauche.x += droit.x ;gauche.y += droit.y;
    return gauche;
}
// +
Vecteur operator+(const Vecteur &gauche,const Vecteur &droit){
    return {gauche.x + droit.x ,gauche.y + droit.y};
}
///////
///////
// -=
Vecteur & operator-=(Vecteur & gauche,const Vecteur & droit){
    gauche.x -= droit.x ;gauche.y -= droit.y;
    return gauche;
}

// -
Vecteur operator-(const Vecteur &gauche,const Vecteur &droit){
    return {gauche.x - droit.x ,gauche.y - droit.y};
}

// /
Vecteur operator/(const Vecteur &gauche,const Vecteur &droit){
    return {gauche.x / droit.x , gauche.y / droit.y};
}

// *
Vecteur operator*(const Vecteur &gauche,const Vecteur &droit){
    return {gauche.x * droit.x ,gauche.y * droit.y};
}

/////
Vecteur perpendiculaire(Vecteur v){
    return {-v.y, v.x};
}

void printVecteur(const Vecteur &v){
    cout << "("<<v.x << ", " << v.y << ")"<<endl;
}