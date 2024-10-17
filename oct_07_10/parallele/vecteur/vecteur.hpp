#ifndef VECTEUR_HPP
#define VECTEUR_HPP

//struct Vecteur{ const double x;const double y;};
// Il faut changer la structure de struct pour utiliser ces operators  =>  += et -=  
struct Vecteur{ double x;double y;};

// +=
Vecteur & operator+=(Vecteur & gauche,const Vecteur & droit);
// +
Vecteur operator+(const Vecteur &gauche,const Vecteur &droit);

// -=
Vecteur & operator-=(Vecteur & gauche,const Vecteur & droit);
// -
Vecteur operator-(const Vecteur &gauche,const Vecteur &droit);

// /
Vecteur operator/(const Vecteur &gauche,const Vecteur &droit);

// *
Vecteur operator*(const Vecteur &gauche,const Vecteur &droit);

Vecteur perpendiculaire(Vecteur v);

void printVecteur(const Vecteur &v);

#endif