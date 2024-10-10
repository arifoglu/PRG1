struct Vecteur{double x;double y;};

Vecteur operator-(const Vecteur & v);
Vecteur & operator+=(Vecteur & gauche,const Vecteur & droit);
Vecteur operator+(Vecteur gauche,const Vecteur & droit);
Vecteur & operator-=(Vecteur & gauche,const Vecteur & droit);
Vecteur & operator-(Vecteur & gauche,const Vecteur & droit);
Vecteur operator/(const Vecteur &gauche ,double facteur);
Vecteur perpendiculaire(Vecteur v);