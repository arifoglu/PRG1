#ifndef RATIONNEL_HPP
#define RATIONNEL_HPP

#include <iostream>
#include <stdexcept>   //(std::invalid_argument) 
#include <numeric>     //(std::gcg)
#include <type_traits> //(std::is_integral)

template<typename T>
class Rationnel {
    public:
        T numerateur;
        T denominateur;

        Rationnel();
        Rationnel(T num, T den);

        void simplifie();

        template<typename U>
        friend std::ostream& operator<<(std::ostream& os, const Rationnel<U>& r);
        
        template<typename U>
        friend std::istream& operator>>(std::istream& is, Rationnel<U>& r);
        // Opérations arithmétiques
        Rationnel operator+(const Rationnel& autre) const;
        Rationnel operator-(const Rationnel& autre) const;
        Rationnel operator*(const Rationnel& autre) const;
        Rationnel operator/(const Rationnel& autre) const;

        // Opérateurs d'affectation 
        Rationnel& operator-=(const Rationnel& autre);
        Rationnel& operator+=(const Rationnel& autre);
        Rationnel& operator*=(const Rationnel& autre);
        Rationnel& operator/=(const Rationnel& autre);

        bool operator==(const int& valeur) const {return numerateur == 0;}

        // Opérateurs de comparaison
        bool operator==(const Rationnel& autre) const;
        bool operator!=(const Rationnel& autre) const;
        bool operator<(const Rationnel& autre) const;
        bool operator>(const Rationnel& autre) const;
        bool operator<=(const Rationnel& autre) const;
        bool operator>=(const Rationnel& autre) const;
};

// Surcharge de l'opérateur << (utiliser ici pour éviter les erreurs de linkage)
template<typename T>
std::ostream& operator<<(std::ostream& os, const Rationnel<T>& r){
    os << r.numerateur << " / " << r.denominateur;
    return os;
}

// operator >>
template<typename T>
std::istream& operator>>(std::istream& is, Rationnel<T>& r) {
    T num, den;
    is >> num >> den;
    r = Rationnel<T>(num, den);
    return is;
}
namespace std {
    template<typename T>
    Rationnel<T> abs(const Rationnel<T>& r) {
        return Rationnel<T>(std::abs(r.numerateur), std::abs(r.denominateur));
    }
}

#endif

