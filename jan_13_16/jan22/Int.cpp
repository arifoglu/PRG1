#include "Int.hpp"
#include <iostream>
#include <stdexcept>

//constructor par défaut
Int::Int() : valeur_absolue(0), est_negatif(false){}

//constructor entier (int)
Int::Int(int nombre) : valeur_absolue(abs(nombre)), est_negatif(nombre < 0){}

//constructor string
Int::Int(const string & str){
    if(str.empty()){
        throw invalid_argument("Chaine vide pour Int");
    }
    if(str[0] == '-'){
        est_negatif = true;
        string decimal_part = str.substr(1);
        valeur_absolue = Unsigned(stoull(decimal_part));
        
    }else{
        est_negatif = false;
        valeur_absolue = Unsigned(stoull(str));
    }
}

//operator <<
ostream& operator<<(ostream& os,const Int & i){
    std::ios_base::fmtflags flags = os.flags();

   // Ajoute un '+' si showpos est activé et le nombre n'est pas négatif
    if (flags & std::ios_base::showpos && !i.est_negatif) {
        os << '+';
    }

    // Ajoute un '-' si le nombre est négatif
    if (i.est_negatif) {
        os << '-';
    }

    // Affiche la valeur absolue
    os << i.valeur_absolue;

    // Applique la largeur spécifiée avec cout.width()
    std::streamsize largeur = os.width();
    if (largeur > 0) {
        os.width(largeur); 
    }
    return os;
}

//2)
// Opérateurs de comparaison

// Opérateur ==
bool Int::operator==(const Int &autre) const {
    return est_negatif == autre.est_negatif && valeur_absolue == autre.valeur_absolue;
}

// Opérateur !=
bool Int::operator!=(const Int &autre) const {
    return !(*this == autre);
}

// Opérateur <
bool Int::operator<(const Int &autre) const {
    if (est_negatif != autre.est_negatif) {
        return est_negatif;
    }
    if (est_negatif) {
        return valeur_absolue > autre.valeur_absolue; 
    }
    return valeur_absolue < autre.valeur_absolue;
}

// Opérateur >
bool Int::operator>(const Int &autre) const {
    return autre < *this;
}

// Opérateur <=
bool Int::operator<=(const Int &autre) const {
    return !(autre < *this);
}

// Opérateur >=
bool Int::operator>=(const Int &autre) const {
    return !(*this < autre);
}

//Opérateurs d'affectation arithmétique

// Opérateur +=
Int &Int::operator+=(const Int &autre) {
    if (est_negatif == autre.est_negatif) {
        valeur_absolue += autre.valeur_absolue;
    } else {
        if (valeur_absolue >= autre.valeur_absolue) {
            valeur_absolue -= autre.valeur_absolue;
        } else {
            valeur_absolue = autre.valeur_absolue - valeur_absolue;
            est_negatif = autre.est_negatif;
        }
    }
    return *this;
}

// Opérateur -=
Int &Int::operator-=(const Int &autre) {
    if (est_negatif != autre.est_negatif) {
        valeur_absolue += autre.valeur_absolue;
    } else {
        if (valeur_absolue >= autre.valeur_absolue) {
            valeur_absolue -= autre.valeur_absolue;
        } else {
            valeur_absolue = autre.valeur_absolue - valeur_absolue;
            est_negatif = !est_negatif;
        }
    }
    return *this;
}

// Opérateur *=
Int &Int::operator*=(const Int &autre) {
    est_negatif = (est_negatif != autre.est_negatif); 
    valeur_absolue *= autre.valeur_absolue;          
    return *this;
}

//3)
//Opérateurs arithmétiques (de façon canonique)

// Opérateur + 
Int Int::operator+(const Int &autre) const {
    Int resultat = *this;  
    resultat += autre;     
    return resultat;       
}

// Opérateur - 
Int Int::operator-(const Int &autre) const {
    Int resultat = *this;  
    resultat -= autre;     
    return resultat;     
}

// Opérateur * 
Int Int::operator*(const Int &autre) const {
    Int resultat = *this;  
    resultat *= autre;     
    return resultat;       
}

// Opérateur / 
Int Int::operator/(const Int &autre) const {
    if (autre.valeur_absolue == Unsigned("0")) {
        throw std::runtime_error("Division par zéro");
    }

    Int resultat;
    resultat.valeur_absolue = valeur_absolue / autre.valeur_absolue;
    resultat.est_negatif = est_negatif != autre.est_negatif; 
    return resultat;
}

// Opérateur % 
Int Int::operator%(const Int &autre) const {
    if (autre.valeur_absolue == Unsigned("0")) {
        throw std::runtime_error("Modulo par zéro");
    }

    Int resultat;
    resultat.valeur_absolue = valeur_absolue % autre.valeur_absolue;
    resultat.est_negatif = est_negatif; 
    return resultat;
}

//4)
//Opérateurs d'incrémentation et de décrémentation

// Pré-incrémentation (++i)
Int &Int::operator++() {
    if (est_negatif) {
        valeur_absolue -= Unsigned(1); 
        if (valeur_absolue == Unsigned(0)) {
            est_negatif = false; 
        }
    } else {
        valeur_absolue += Unsigned(1); 
    }
    return *this;
}

// Pré-décrémentation (--i)
Int &Int::operator--() {
    if (valeur_absolue == Unsigned(0)) {
        est_negatif = true;
        valeur_absolue = Unsigned(1); 
    } else if (est_negatif) {
        valeur_absolue += Unsigned(1); 
    } else {
        valeur_absolue -= Unsigned(1); 
    }
    return *this;
}

// Post-incrémentation (i++)
Int Int::operator++(int) {
    Int temp = *this;
    ++(*this); 
    return temp;
}

// Post-décrémentation (i--)
Int Int::operator--(int) {
    Int temp = *this;
    --(*this); 
    return temp;
}

//5)
// Fonction fibonacci
Int Int::fibonacci(unsigned int n) {
    Unsigned fib = Unsigned::fibonacci(n); 
    return Int(static_cast<std::string>(fib.data())); 
}
// Fonction factorielle
Int Int::factorielle(unsigned int n) {
    Unsigned fact = Unsigned::factorielle(n);
    return Int(static_cast<std::string>(fact.data())); 
}
