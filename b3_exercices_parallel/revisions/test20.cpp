#include <iostream>
#include <vector>
using namespace std;

bool is_negative(int x){return x < 0;};

struct est_multiple_foncteur{
   int n;
   bool operator() (int e) const{return e % n == 0; }
};

template<typename T,T n = 2>
bool est_multiple(T e) {return e % n == 0;}

int main() {
    vector<int> v = {1, -2, 3, -4, 5, -6};
   int n =2;

   cout << count_if(v.begin(),v.end(),is_negative)                   << endl;
   cout << count_if(v.begin(),v.end(),[](int n){return n % 2 == 0;}) << endl;
   cout << count_if(v.begin(),v.end(),est_multiple_foncteur{n})      << endl;
   cout << count_if(v.begin(),v.end(),est_multiple<int,2>)           << endl;
   

    return 0;
}
