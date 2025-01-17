#include <iostream> 
#include <vector> 
#include <cctype> 
 
using namespace std; 
 
template<typename T, typename Func>
void supprimer_si(vector<T>& v, Func f){
   vector<T> vR;
   for(size_t i = 0; i < v.size();++i){
      if(!f(v[i]))
         vR.push_back(v[i]);
   }
   v = vR;
} 
 
bool est_pair(int a) { return a % 2 == 0; } 
 
int main() { 
   vector<int> v1 { 1, 2, 3, 5, 7, 10, 15, 22 }; 
   supprimer_si(v1, est_pair); 
   for(int e : v1) cout << e << ' '; 
   cout << endl; 
 
   vector<char> v2 { 'R', '2', '-', 'D', '2', ' ', 
                     'C', '-', '3', 'P', 'O' }; 
   supprimer_si(v2, ::isdigit); 
   for(char e : v2) cout << e; 
}