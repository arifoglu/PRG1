#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
#include <string>
#include <span>
#include "tri.hpp"
using namespace std;

template <typename T>
void afficher(span<const T> s){
   cout << "[";
   for(size_t i = 0; i < s.size();++i){
      if(i){
         cout << ", ";
      }
      cout << s[i];
   }
   cout << "]";
}

int main() {
    // vector
    vector<int> v{6,2,8,7,1,3}; 
    afficher<const int>(v);  
    tri_generique(v);
    cout << endl;  
    afficher<const int>(v);  
    cout << endl;

    //array (array<string , 4>)
    array  a      {"chien"s, "chat"s, "souris"s, "poisson"s};
    afficher<const string>(a);  
    tri_generique(a);
    cout << endl;
    afficher<const string>(a);  
    cout << endl;

    double t[] = {6.1, 2.2, 8.3, 7.4, 1.5, 3.6};
    afficher<const double>(t);
    tri_generique(t);
    cout << endl;
    afficher<const double>(t);
    cout << endl;


   return EXIT_SUCCESS;
}