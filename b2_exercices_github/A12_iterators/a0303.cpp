#include <iostream>
#include <vector>

using namespace std;

template<typename T>
vector<T> vect_iter_val(const vector<T>& v,const T t){
    vector<T> result;
    for(size_t i = 0; i < v.size();++i){
        if(v[i] == t)
        result.push_back(v[i]);
    }
    return result;
}
template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v){
    os << "[";
    for(size_t i = 0; i < v.size();++i){
        if(i) os << ",";
        os << v[i];
    }
    os << "]";
    return os;
}

int main() {
   const vector<int>   v_int{1, 2, 3, 2, 4, 2, 2, 6, 2};
   const int val = 2;
   cout << vect_iter_val(v_int,2); 

   
   return 0;
}