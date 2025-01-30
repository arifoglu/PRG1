#ifndef INT_HPP
#define INT_HPP

#include "unsigned.hpp"
#include <iostream>
#include <string>
using namespace std;

class Int{
    private:
        //La valeur absolue du nombre
        Unsigned valeur_absolue;  
        //Indique si le nombre est negatif
        bool est_negatif;
    public: 
        //Constructors   
        Int();
        explicit Int(int nombre);
        explicit Int(const string& str);

        //operator <<
        friend ostream& operator<<(ostream& os,const Int & i);

        //operator de comparaison
        bool operator==(const Int &autre) const;
        bool operator!=(const Int &autre) const;
        bool operator< (const Int &autre) const;
        bool operator> (const Int &autre) const;
        bool operator<=(const Int &autre) const;
        bool operator>=(const Int &autre) const;

        //Opérateurs d'affectation arithmétique
        Int &operator+=(const Int &autre);
        Int &operator-=(const Int &autre);
        Int &operator*=(const Int &autre);

        //// Opérateurs arithmétiques (de façon canonique)
        Int operator+(const Int &autre) const; 
        Int operator-(const Int &autre) const; 
        Int operator*(const Int &autre) const; 
        
        // Opérateurs de division et modulo
        Int operator/(const Int &autre) const;
        Int operator%(const Int &autre) const; 

        // Opérateurs d'incrémentation et de décrémentation
        Int &operator++();       
        Int &operator--();       
        Int operator++(int);      
        Int operator--(int);     

        static Int fibonacci(unsigned int n);
        static Int factorielle(unsigned int n);

        Int operator-() const {
        Int result = *this;           
        result.est_negatif = !est_negatif; 
        return result;                  
        }
        friend Int abs(const Int& value);
        
};

inline Int abs(const Int& value) {
    Int result = value;
    result.est_negatif = false; 
    return result;
}

#endif