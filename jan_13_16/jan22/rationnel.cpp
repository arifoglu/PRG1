#include "rationnel.hpp"

// Constructeur par défaut
template<typename T>
Rationnel<T>::Rationnel() : numerateur(0), denominateur(1) {}

// Constructeur avec paramètres
template<typename T>
Rationnel<T>::Rationnel(T num, T den) {
    if (den == 0) {
        throw std::invalid_argument("Dénominateur ne peut pas être 0");
    }
    numerateur = num;
    denominateur = den;
    // Simplification automatique
    simplifie();
}

// Fonction de simplification
template<typename T>
void Rationnel<T>::simplifie() {
    if constexpr (std::is_integral<T>::value) 
    {
        // Si T est un type entier, utiliser std::gcd pour simplifier
        T mygcd = std::gcd(numerateur, denominateur);
        numerateur /= mygcd;
        denominateur /= mygcd;
    } 
    else 
    {
        // Si T est un type flottant, faire une simplification approximative
        T factor = (numerateur > denominateur) ? numerateur : denominateur;
        numerateur /= factor;
        denominateur /= factor;
    }

    // Assurer que le dénominateur est toujours positif
    if (denominateur < 0) {
        numerateur = -numerateur;
        denominateur = -denominateur;
    }
}

// Opérations arithmétiques

// Surcharge de l'opérateur +
template<typename T>
Rationnel<T> Rationnel<T>::operator+(const Rationnel<T>& autre)const{
    T num = numerateur * autre.denominateur + autre.numerateur * denominateur;
    T den = denominateur * autre.denominateur;
    return Rationnel(num,den);
}
// Surcharge de l'opérateur -
template<typename T>
Rationnel<T> Rationnel<T>::operator-(const Rationnel<T>& autre) const {
    T num = numerateur * autre.denominateur - autre.numerateur * denominateur;
    T den = denominateur * autre.denominateur;
    return Rationnel(num, den);
}
// Surcharge de l'opérateur *
template<typename T>
Rationnel<T> Rationnel<T>::operator*(const Rationnel<T>& autre)const{
    T num = numerateur * autre.numerateur;
    T den = denominateur * autre.denominateur;
    return Rationnel(num,den);
}
// Surcharge de l'opérateur /
template<typename T>
Rationnel<T> Rationnel<T>::operator/(const Rationnel<T>& autre)const{
    if(autre.numerateur == 0){
        throw std::invalid_argument("Division par zéro !");
    }
    T num = numerateur * autre.denominateur;
    T den = denominateur * autre.numerateur;
    return Rationnel(num,den);

}

// l'opérateur  -= 
template<typename T>
Rationnel<T>& Rationnel<T>::operator-=(const Rationnel<T>& autre) {
    *this = *this - autre;
    return *this;
}

// l'opérateur += 
template<typename T>
Rationnel<T>& Rationnel<T>::operator+=(const Rationnel<T>& autre) {
    *this = *this + autre;
    return *this;
}

//l'opérateur  *= 
template<typename T>
Rationnel<T>& Rationnel<T>::operator*=(const Rationnel<T>& autre) {
    *this = *this * autre;
    return *this;
}

// l'opérateur /= 
template<typename T>
Rationnel<T>& Rationnel<T>::operator/=(const Rationnel<T>& autre) {
    *this = *this / autre;
    return *this;
}

// Surcharge de l'opérateur ==
template<typename T>
bool Rationnel<T>::operator==(const Rationnel<T>& autre) const {
    return (numerateur * autre.denominateur == autre.numerateur * denominateur);
}

// Surcharge de l'opérateur !=
template<typename T>
bool Rationnel<T>::operator!=(const Rationnel<T>& autre) const {
    return !(*this == autre);
}

// Surcharge de l'opérateur <
template<typename T>
bool Rationnel<T>::operator<(const Rationnel<T>& autre) const {
    return (numerateur * autre.denominateur < autre.numerateur * denominateur);
}

// Surcharge de l'opérateur >
template<typename T>
bool Rationnel<T>::operator>(const Rationnel<T>& autre) const {
    return (numerateur * autre.denominateur > autre.numerateur * denominateur);
}

// Surcharge de l'opérateur <=
template<typename T>
bool Rationnel<T>::operator<=(const Rationnel<T>& autre) const {
    return (*this < autre || *this == autre);
}

// Surcharge de l'opérateur >=
template<typename T>
bool Rationnel<T>::operator>=(const Rationnel<T>& autre) const {
    return (*this > autre || *this == autre);
}


//Explicit instantiation
template class Rationnel<int>;
template class Rationnel<double>;
template class Rationnel<long>;







