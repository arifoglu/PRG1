/*
Indiquer ce que va afficher chacune des séquences d'instructions suivantes :

Il se peut qu'une séquence provoque une erreur à la compilation ou à l'exécution, voire ait un comportement indéfini. Le cas échéant, répondez "Erreur à la compilation", "Erreur à l'exécution" ou "Comportement indéfini"
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    //no1
    //vector<int> v(2,3); // = {3,3}
    //for(auto e : v)
    //cout << e << ' ' << endl; //3 3  

    //no2
    //vector<int> v(4); // = {0,0,0,0}
    //for(auto e : v )
    //cout << e << ' ' << endl; // 0 0 0 0

    //no3
    //vector<int> v{1,2,3}; // = {1,2,3}
    //for(auto e : v)
    //cout << e << ' ' <<endl; // 1 2 3

    //no4
    //vector<int> v{1.,2,3}; // erreur compile
    //for(auto e : v) 
    //cout << e << ' ' << endl; 

    //no5
    //vector<double> v{1.,2,3}; // = {1.,2,3} 
    //for(auto e : v) 
    //cout << e << ' ' << endl; // 1 2 3

    //no6
    //vector<int> v(3) = {1,2,3};// erreur ;
    //for(auto e : v )
    //cout << e << ' ' <<endl;

    //no7
    //vector v{1.,2.,3.}; // = vector<double>
    //for(auto e : v)
    //cout << e << ' ' << endl;

    // no 8
    //vector v{1., 2, 3}; // erreur compile
    //for (auto e: v) cout << e << ' ';

    // no 9
    //vector v(3,2.f); // = {2.,2.,2.}
    //for (auto e: v)  
    //cout << e << ' ' <<endl; // 2 2 2

    //no10
    //vector v(4);
    //for(auto e : v)
    //cout << e << ' ' <<endl; // erreur



    return EXIT_SUCCESS;
}