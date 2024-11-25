#include <iostream>
#include <cstdlib>
using namespace std;

//void fct (      int,          float)  {cout << "Fonction no 1" << endl;}
//void fct (      int,          double) {cout << "Fonction no 2" << endl;}
//void fct (      float&,       int&)   {cout << "Fonction no 3" << endl;}
//void fct (const float&, const int&)   {cout << "Fonction no 4" << endl;}


int main() {
    int       i = 1;
    int&     ri = i;
    char      c = 'A';
    float     f = 2.f;
    double    d = 3.0;
    const double& rdC = d;

    fct('a',rdC);
    
    return EXIT_SUCCESS;
}


