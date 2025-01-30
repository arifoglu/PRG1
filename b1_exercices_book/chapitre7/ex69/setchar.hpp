#ifndef SETCHAR_HPP
#define SETCHAR_HPP

#include <cstring>
using namespace std;

const int N_CAR_MAX = 256;

class set_char {
    unsigned char ens[N_CAR_MAX];

    public:
        set_char();

        void ajoute(unsigned char);

        int appartient(unsigned char);        

        int cardinal();

};

#endif