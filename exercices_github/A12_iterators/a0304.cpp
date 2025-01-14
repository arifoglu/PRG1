#include <iostream>
#include <vector>
#include <array>
#include <span>

using namespace std;

template<typename T>
bool meme_elements(span<T> s1, span<T> s2){
    if(s1.size() != s2.size()) return false;

    vector<T> v1(s1.begin(),s1.end());
    vector<T> v2(s2.begin(),s2.end());

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    return v1 == v2;
}

int main() {
   array  a {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
   vector v {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,1,2};
   cout << boolalpha << meme_elements(span<int>(a),span<int>(v)) << endl;
   return 0;
}