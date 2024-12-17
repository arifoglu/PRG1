#ifndef INT_HPP
#define INT_HPP

#include "unsigned.hpp"
#include <iostream>
#include <stdexcept>
#include <sstream>
#include <string>
using namespace std;

class Int{
    private:
        bool negatif;
        Unsigned valeur_absolue;
    public:
        Int();
        explicit Int(int64_t valeur);
        explicit Int(const string& valeur);

        string to_string()const;

        friend ostream& operator<<(ostream& os,const Int& i);
};

#endif