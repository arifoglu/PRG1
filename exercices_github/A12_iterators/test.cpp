#include <iostream>
#include <vector>


using namespace std;

template<typename T>
size_t count(const vector<T>& v1, const vector<T>& v2){
    size_t cnt = 0;
    T first = v2.front();
    T last  = v2.back();
    for(size_t i = 0; i < v1.size();++i){
        if(v1[i] > first && v1[i] < last)
        ++cnt;   
    }
    return cnt;
}

int main() {
   vector   v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   vector intervalle{3, 6};
   cout << count(v,intervalle) <<endl;
   
   return 0;
}