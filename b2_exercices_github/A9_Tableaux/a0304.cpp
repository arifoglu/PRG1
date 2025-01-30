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
string to_string(const array<int,6> & a){
    string result = "[";
    for(size_t i = 0; i < a.size();++i){
        if(i != a.size() - 1){
            result += to_string(a[i]) + ",";
        }
        if(i == a.size() - 1){
            result += to_string(a[i]);
        }
    }
    result += "]";

    return result;
}

bool est_strictement_croissant(span<const int>& s){
    for(size_t i = 1; i < s.size() ;++i){
            if(s[i] <= s[i - 1] )
                return false;
    }
    return true;
}

int main() {
   for (const vector<int>&  v:
           {vector<int>{1, 2, 3, 4, 6, 9},
            {1, 2, 3, 4, 6, 5},
            {1, 2, 3, 3, 4, 4},
            {1},
            {}})
      cout << to_string(v)
           << (est_strictement_croissant(v) ? " est" : " n'est pas")
           << " strictement croissant" << endl;

   array a { 2, 3, 5, 7, 11, 13};
   cout << to_string(a)
        << (est_strictement_croissant(a) ? " est" : " n'est pas")
        << " strictement croissant" << endl;
}