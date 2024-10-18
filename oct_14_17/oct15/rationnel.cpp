#include "rationnel.hpp"
using namespace std;

// validite Rationnel
Rationnel validateRationnel(const Rationnel& r) {
    if (!(r.denominateur == 0)) {   
        return r;
    }else{
        cout << "Erreur! denominateur ne peut pas être 0. " << endl;
        return {0, 1};
    } 
}
// pour simplifier 
Rationnel simplifie(Rationnel r) {
    int mygcd = std::gcd(r.numerateur, r.denominateur);
    r.numerateur /= mygcd; 
    r.denominateur /= mygcd;

    if (r.denominateur < 0) {
        r.numerateur = -r.numerateur; 
        r.denominateur = -r.denominateur;
    }
    return r;
}

// les operateurs arithmétiques

// operator +  
Rationnel operator+(const Rationnel& a,const Rationnel& b){
    Rationnel resultat;
    // (a/b) + (c/d) = (a*d + c*b)/ b*d
    resultat.numerateur = a.numerateur * b.denominateur + b.numerateur * a.denominateur;
    resultat.denominateur = a.denominateur * b.denominateur;
    return simplifie(resultat);
}
// operator - 
Rationnel operator-(const Rationnel& a ,const Rationnel& b){
    Rationnel resultat;
    // (a/b) - (c/d) = (a*d - c*b)/ b*d
    resultat.numerateur = a.numerateur * b.denominateur - b.numerateur * a.denominateur;
    resultat.denominateur = a.denominateur * b.denominateur;
    return simplifie(resultat);
}
// operator *
Rationnel operator*(const Rationnel& a,const Rationnel& b){
    Rationnel resultat;
    // (a/b) * (c/d) = (a*c) / (b*d)
    resultat.numerateur = a.numerateur * b.numerateur;
    resultat.denominateur= a.denominateur * b.denominateur;
    return simplifie(resultat);
}
// operator /
Rationnel operator/(const Rationnel& a,const Rationnel& b){
    Rationnel resultat;
    // (a/b) / (c/d) = (a * d) / (b * c);
    resultat.numerateur = a.numerateur * b.denominateur;
    resultat.denominateur = a.denominateur * b.numerateur;
    return simplifie(resultat);
}

// les operateurs comparaisons

// operator ==
bool operator==(const Rationnel& a,const Rationnel& b){
    return (a.numerateur * b.denominateur == a.denominateur * b.numerateur);
}
// operator !=
bool operator!=(const Rationnel& a,const Rationnel& b){
    return !(a == b);
}
// operator >
bool operator>(const Rationnel& a, const Rationnel& b) {
    return (a.numerateur * b.denominateur > b.numerateur * a.denominateur);    
}
// operator >=
bool operator>=(const Rationnel& a, const Rationnel& b) {
    return (a.numerateur * b.denominateur >= b.numerateur * a.denominateur);    
}
// operator <
bool operator<(const Rationnel& a, const Rationnel& b) {
    return (a.numerateur * b.denominateur < b.numerateur * a.denominateur);    
}
// operator <=
bool operator<=(const Rationnel& a, const Rationnel& b) {
    return (a.numerateur * b.denominateur <= b.numerateur * a.denominateur);    
}

// pour imprimer 
void print_Rationnel(const Rationnel& r) {
    cout << r.numerateur << " / " << r.denominateur << endl;
}







