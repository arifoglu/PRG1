#ifndef UNSIGNED_HPP
#define UNSIGNED_HPP

#include <string>
#include <stdexcept>
#include <cstdint>
using namespace std;

class Unsigned {
    private:
        //Un nombre au format binaire
        string format_binaire; 
        //Vérifie si le format binaire est valide
        static bool est_binaire(const string &chaine);

    public:
        
        // Constructors
         Unsigned();
        // En format chaîne binaire
        explicit Unsigned(const string &binaire); 
        // uint64_t entier
        explicit Unsigned(uint64_t nombre);            

         ////   
         explicit operator uint64_t() const;
         Unsigned &operator=(uint64_t nombre);
         Unsigned& operator=(const std::string &binaire);
         Unsigned &operator+=(uint64_t autre);
        
        // Opérateurs de comparaison
        bool operator==(const Unsigned &autre) const;
        bool operator!=(const Unsigned &autre) const;
        bool operator <(const Unsigned &autre) const;
        bool operator >(const Unsigned &autre) const;
        bool operator<=(const Unsigned &autre) const;
        bool operator>=(const Unsigned &autre) const;

        // Opérateurs d'affectation arithmétique
        Unsigned &operator+=(const Unsigned &autre);
        Unsigned &operator-=(const Unsigned &autre);
        Unsigned &operator*=(const Unsigned &autre);

        // Opérateurs arithmétiques (de façon canonique)
        Unsigned operator+(const Unsigned &autre) const;
        Unsigned operator-(const Unsigned &autre) const;
        Unsigned operator*(const Unsigned &autre) const;

        // Opérateurs de division
        Unsigned operator/(const Unsigned &autre) const;
        Unsigned operator%(const Unsigned &autre) const;

        //Fonctions 
        static Unsigned fibonacci(unsigned int n);
        static Unsigned factorielle(unsigned int n);

        //////////////////////////////////////////////////
        //////////////laboratoire 25/////////////////////

        //fonction data()
        string data() const;

        // Opérateurs d'incrémentation et de décrémentation
        // Pré-incrémentation (++i)
        Unsigned &operator++(); 
        // Pré-décrémentation (--i)
        Unsigned &operator--();    
        // Post-incrémentation (i++)
        Unsigned operator++(int); 
        // Post-décrémentation (i--) 
        Unsigned operator--(int);  

        // Classe Setbase
        class Setbase {
            public:
                static void set_base(int base);
                static int base_affichage; // par défaut 10
        };

        // Opérateur <<
        friend ostream &operator<<(ostream &os, const Unsigned &u);


};

#endif


