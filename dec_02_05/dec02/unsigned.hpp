#ifndef UNSIGNED_HPP
#define UNSIGNED_HPP

#include <iostream>
#include <string>
#include <bitset>
#include <compare>
using namespace std;

class Unsigned {
    private :
        string format_binaire;

    public  :
        Unsigned(const string & binaire);
        Unsigned(uint64_t nombre);
        Unsigned();

        friend ostream& operator<<(ostream &out,const Unsigned &u);
        
        Unsigned operator+(const Unsigned & autre) const;
        Unsigned operator-(const Unsigned & autre) const;
        Unsigned operator*(const Unsigned & autre) const; 
        Unsigned operator/(const Unsigned & autre) const; 
        Unsigned operator%(const Unsigned & autre) const;
        Unsigned& operator+=(const Unsigned & autre);
        Unsigned& operator-=(const Unsigned & autre);
        Unsigned& operator*=(const Unsigned & autre);

        bool operator==(const Unsigned & autre) const ;
        bool operator!=(const Unsigned & autre) const ;
        bool operator< (const Unsigned & autre) const ;
        bool operator> (const Unsigned & autre) const;
        bool operator<=(const Unsigned & autre) const;
        bool operator>=(const Unsigned & autre) const;

        strong_ordering operator<=>(const Unsigned& autre)const;
        Unsigned fibonacci(unsigned long long n) const;

};

#endif