#include <iostream>
#include <vector>
#include <string>
#include <span>
using namespace std;

string to_string(const vector<int> & v){
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

bool inclut(span<const int> s,int val){
    for(int e : s){
        if(e == val)
        return true;
    }
    return false;    
}
vector<int> ensemble(span<const int>s){
    vector<int> v;
    for(int e : s){
        if(!inclut(v,e)){
            v.push_back(e);
        }
    }
    return v;
}

int main() {
   for (vector<int> const& v:
           {vector<int>{ 1, 2, 4, 1, 2, 5, 3, 6, 2, 1},
            {1, 1, 1, 1, 1, 1},
            {1, 2, 3, 4},
            {1},
            {}
           })
      cout << to_string(v) << " -> " << to_string(ensemble(v)) << endl;

   //array a {1, 3, 2, 4, 2, 1, 3};
   //cout << to_string(a) << " -> " << to_string(ensemble(a)) << endl;
}