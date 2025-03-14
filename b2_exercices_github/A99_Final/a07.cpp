#include <cstdlib>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

//------------------------------------------------------------
template <typename T> using Iterateur = typename vector<T>::const_iterator;
template <typename T> using Plage     = pair<Iterateur<T>, Iterateur<T>>;
template <typename T> using vPlages   = vector<Plage<T>>;

//------------------------------------------------------------
#include "total_size.cpp"
#include "concat.cpp"

//------------------------------------------------------------
template <typename T>
ostream& operator<< (ostream& os, const vector<T>& v) {
   os << "[";
   for (size_t i=0; i<v.size(); ++i) {
      if (i) os << ", ";
      os << v[i];
   }
   return os << "]";
}

//------------------------------------------------------------
int main() {

   const vector<int> v1 {11, 12, 13, 14, 15, 16};
   const vector<int> v2 {21, 22, 23, 24};
   vector<int>       v3 {31, 32};

   cout << v1 << endl;
   cout << v2 << endl;
   cout << v3 << endl;

   const vPlages<int> plages {{v1.cbegin()+3, v1.cend()},
                              {v1.cbegin(),   v1.cend()-3},
                              {v2.cbegin(),   v2.cend()},
                              {v3.begin(),    v3.end()}};  
   cout << endl;

   size_t n = total_size(plages.begin(), plages.end());
   cout << "total_size : " << n << endl << endl;
   vector<int> v4 ( n );

   concat(plages.cbegin(), plages.cend(), v4.begin());
   cout << v4 << endl;

   vector<long> v5 ( 1000 );
   v5.erase(concat(plages.crbegin(), plages.crend(), v5.begin()), v5.end());
   cout << v5 << endl;

   return EXIT_SUCCESS;
}