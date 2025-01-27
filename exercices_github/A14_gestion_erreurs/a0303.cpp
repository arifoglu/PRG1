#include <cstdlib>
#include <iostream>
#include <stdexcept>
using namespace std;

void removeFromVector(std::vector<int>& vec, size_t pos);

int main() {
   vector<int> v{1,2,3,4,5};

   try{
      removeFromVector(v,6);
      
      for(int val : v)
         cout << val ;
      cout << endl;
   }catch(const exception& e){
      cerr << "error : " << e.what() << endl; 
   }

   return EXIT_SUCCESS;
}
/*
void removeFromVector(std::vector<int>& vec, size_t pos){
   if(vec.empty()){
      throw runtime_error("vector est vide");
   }else if(pos >= vec.size() || pos < 0){
      throw out_of_range("hors de limite");
   }else{
      vec.erase(vec.begin()+pos);
   }
}
*/

void removeFromVector(std::vector<int>& vec, size_t pos){
   if(vec.empty()){
      throw runtime_error("suppression impossible,vector vide");
   }
   if(pos >= vec.size()){
      throw out_of_range("position hors limites");
   }
   vec.erase(vec.begin() + pos);
}



