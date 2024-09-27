#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
 int estfem; 
 cin >> estfem;
 //if(estfem == 0){
 //   cout << "Mme";
 //}else{
 //   cout << "Mre";
 //}
 cout << (estfem == 0 ? "Mme" : "Mre")<<endl;

  return EXIT_SUCCESS;
}