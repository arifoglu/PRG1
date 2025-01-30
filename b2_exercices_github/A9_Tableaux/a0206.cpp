
/*
Sans faire usage de vector::erase, écrire une fonction C++ qui supprime tous les éléments égaux à une valeur donnée. L'ordre des éléments non supprimés doit être préservé.
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

void supprimer_valeur(vector<int> & v,int val){
      size_t write_idx = 0;

      for(size_t read_idx = 0; read_idx < v.size() ; ++read_idx){
        if(v[read_idx] != val){
            v[write_idx] = v[read_idx];
            ++write_idx;
        }
      }
      v.resize(write_idx);  
}

int main() {
   for (vector<int> v: {vector<int>{},
                        {2},
                        {1, 2, 2, 2, 3, 1, 2, 4},
                        {2, 3, 4, 3, 2, 1},
                        {2, 2, 2},
                        {5, 4, 3, 2, 1, 2}}) {
      cout << to_string(v) << " -> ";
      supprimer_valeur(v,1);
      cout << to_string(v) << endl;
   }

   return 0;
}