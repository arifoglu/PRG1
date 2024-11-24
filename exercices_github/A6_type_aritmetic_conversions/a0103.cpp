/*
Pour chacune des lignes de code suivantes, indiquez

si elle compile
si oui
quel est le type de la variable
ce que la ligne affiche;
On suppose que le compilateur utilise le modèle de donnée LLP64, i.e, avec int et long codés sur 32 bits et long long sur 64.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){ 
    auto v1 = 12u;
    cout << v1 << endl; // unsigned int v1 = 12

    auto v2 = 1L;
    cout << v2 << endl; // long int v2 = 1

    auto v3 = 100'000'000'000; 
    cout << v3 << endl; // long long v3 = 100000000000

    auto v4 = 0x33; 
    cout << v4 << endl; // int v4 = 51;

    //auto v5 = 0xefg;      
    //cout << v5 << endl; // ne compile pas

    auto v6 = 0xef;     
    cout << v6 << endl; // int v6 = 239

    auto v7 = 0xEF;     
    cout << v7 << endl; // int v7 = 239

    ////auto v8 = 08;        
    ////cout << v8 << endl; // ne compile pas 8

    auto v9 = 027;       
    cout << v9 << endl; // int v9 = 23

    auto v10 = 0xffull;
    cout << v10 << endl; // unsigned long long v10 = 255

    auto v11 = 0xffffffff;     
    cout << v11 << endl; // unsigned v11 = 4294967295 =>2^32 -1 
    //
    auto v12 = 0x7fffffff;     
    cout << v12 << endl; //  int v12 = 2147483647 => 2^31 -1 

    auto v13 = 0b010101; 
    cout << v13;  // int v13 = 21; 
//
    //auto v14 = 0b101ul; 
    //cout << v14; // unsigned long v14 = 5;
    return EXIT_SUCCESS;
}