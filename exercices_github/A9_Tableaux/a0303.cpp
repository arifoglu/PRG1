#include <iostream>
#include <vector>
#include <string>
using namespace std;

string to_string(vector<int> & v){
    string result = "[";
    for(size_t i = 0; i < v.size();++i){
        if(i != v.size() - 1){
            result += to_string(v[i]) + ",";
        }
        if(i == v.size() - 1){
            result += to_string(v[i]);
        }
    }
    result += "]";

    return result;
}
void remplacer_valeurs_paires(vector<int>& v,int val){
    if(v.empty()){return ;}
    for(size_t read_idx = 0; read_idx < v.size();++read_idx){
        if(v[read_idx] % 2 == 0){
            v[read_idx]  = val;
        }
    }
}

int main() {
   vector v { 1, 2, 3, 4, 3, 6, 4, 1, 2};
   cout << to_string(v) << " -> ";
   remplacer_valeurs_paires(v, 0);
   cout << to_string(v) << endl;
   
   vector a { 3, 4, 5, 6, 2, 4, 3};
   cout << to_string(a) << " -> ";
   remplacer_valeurs_paires(a, -1);
   cout << to_string(a) << endl;

   return 0;
}