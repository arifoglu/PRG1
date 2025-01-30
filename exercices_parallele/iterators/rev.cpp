#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <list>
#include <iterator>

using namespace std;

template<typename T>
int count(const vector<T>& v, const vector<T> a){
   int count =0;
    for(size_t i = 0; i < v.size();++i){
        if(v[i] >= a[0] && v[i] <= a[1])
            ++count;
    }
    return count;
}

int main() {
   vector  v  {1,2,3,4,5,6,7,8,9,10};
   vector  a {3,6};
    cout << count(v,a);
    int min = 3;
    int max = 6;
    cout << count_if(v.begin(),v.end(), [&min,&max](int e){return e >= min&& e <= max;});
  
}