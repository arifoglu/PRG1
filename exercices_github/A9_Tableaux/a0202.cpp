/*
Ecrivez les fonctions my_resize, my_push_back et my_pop_back de sorte que le code suivant compile et aie l'effet décrit en commentaire.
*/
#include <iostream>
#include <vector>
using namespace std;

void my_push_back(vector<int> & vec,int p){
    vec.push_back(p);
}
void my_pop_back(vector<int> & vec){
    vec.pop_back();
}
void my_resize(vector<int> & vec,size_t p){
    vec.resize(p);
}
void my_resize2(vector<int> & vec,size_t p,int n){
    vec.resize(p,n);
}
int main() {
   vector<int> v{1, 2, 3, 4, 5, 6};
  
   my_push_back(v, 7);     // v contient {1, 2, 3, 4, 5, 6, 7}
   for(auto e : v)cout << e ; 
   cout << endl;
  
   my_pop_back(v);         // v contient {1, 2, 3, 4, 5, 6}
   for(auto e : v)cout << e ;
   cout << endl;
   
   my_pop_back(v);         // v contient {1, 2, 3, 4, 5}
   for(auto e : v)cout << e ;
   cout << endl;

   my_resize(v,3);         // v contient {1, 2, 3}
   for(auto e : v)cout << e ;
   cout << endl;

   my_resize2(v,5,1);       // v contient {1, 2, 3, 1, 1}
   for(auto e : v)cout << e ;
   cout << endl;

   my_resize(v,8);         // v contient {1, 2, 3, 1, 1, 0, 0, 0}
   for(auto e : v)cout << e ;
   cout << endl;
   return 0;
}