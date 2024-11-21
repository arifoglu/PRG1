
/*
Sans faire usage de vector::erase, écrire une fonction C++ qui supprime tout élément égal à l'élément qui les précède dans le vector. Avec la fonction to_string de l'exercice 02-03, le programme ci-dessous
*/
#include <iostream>
#include <vector>
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

void rendre_unique(vector<int> & v){
    if(v.empty()){return;}

    size_t write_idx = 0;
    for(size_t read_idx = 1; read_idx < v.size();++read_idx){
        if(v[read_idx] != v[write_idx]){
            v[++write_idx] = v[read_idx];
        }
    }
    v.resize(write_idx + 1);
}



int main() {
   for (vector<int> v: {vector<int>{},
                        {2},
                        {1, 2, 2, 2, 3, 1, 2, 4},
                        {2, 3, 3, 2, 2, 1},
                        {2, 2, 2},
                        {5, 4, 4, 3, 2, 2, 2, 3}}) {
      cout << to_string(v) << " -> ";
      rendre_unique(v);
      cout << to_string(v) << endl;
   }

   return 0;
}