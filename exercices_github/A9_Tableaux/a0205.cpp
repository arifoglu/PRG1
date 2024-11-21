/*
Sans faire usage de vector::erase, écrire une fonction C++ qui supprime l'élément central d'un vector<int> si celui-ci est de taille impaire, respectivement les 2 éléments centraux si celui-ci est de taille paire. L'ordre des éléments non supprimés doit être préservé.

Avec la fonction to_string de l'exercice 02-03, le programme ci-dessous
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string to_string(const vector<int> & vec){
    string result = "[" ;
    for(size_t i = 0;i < vec.size();++i){
        if(i != vec.size() - 1)
        result += to_string(vec[i]) + ",";
        if(i == vec.size() - 1)
        result += to_string(vec[i]);
    } 
    result += "]";
    return result;
}

void supprimer_centre(vector<int> & v){
    if(v.empty()){
        return;
    }
    size_t n = 2 - v.size() % 2 ;

    for(size_t i = 1 + v.size() / 2 ; i < v.size() ;++i){
        v[i - n ] = v [i];
    }
    v.resize(v.size() - n);
}

int main() {
   for (vector<int> v : {vector<int>{},
                        {1},
                        {1, 2},
                        {1, 2, 3},
                        {1, 2, 3, 4},
                        {1, 2, 3, 4, 5},
                        {1, 2, 3, 4, 5, 6}}) {
      cout << to_string(v) << " -> ";
      supprimer_centre(v);
      cout << to_string(v) << endl;
   }
}