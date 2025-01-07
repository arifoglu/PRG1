#include <iostream>
using namespace std;

class Vect{
    int nelem;
    int* adr;
    public:
        Vect(int);
        ~Vect();
        int& operator[](int);
};

class Vect_limite{};

Vect::Vect (int n) : nelem(n), adr(new int [n]){}
Vect::~Vect() {delete[] adr;}
int& Vect::operator[](int i){
    if(i < 0 || i >= nelem){
        Vect_limite limite;
        throw (limite);
    }
    return adr[i];
}

int main() {
    try{
        Vect v(10);
        v[9] = 5;
    }
    catch(Vect_limite limite){
        cerr << "indice incorrect!!!\n";
        exit (-1);
    }

}