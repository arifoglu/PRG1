#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<int> vec = {1,2,3,4,5};
  int val_remove = 3;

  cout << "Vecteur :";for(auto e : vec) cout << e ;cout << endl;
  cout << "Adresse vecteur original : "<< &vec <<endl;
  cout << "Size :"<< vec.size()<<endl;
  auto it0 = find(vec.begin(),vec.end(),vec[0]);
  auto it1 = find(vec.begin(),vec.end(),vec[1]);
  auto it2 = find(vec.begin(),vec.end(),vec[2]);
  auto it3 = find(vec.begin(),vec.end(),vec[3]);
  auto it4 = find(vec.begin(),vec.end(),vec[4]);
  cout << "Index 0 : "<< *it0 << " " << " => " << &(*it0)<< endl;
  cout << "Index 1 : "<< *it1 << " " << " => " << &(*it1)<< endl;
  cout << "Index 2 : "<< *it2 << " " << " => " << &(*it2)<< endl;
  cout << "Index 3 : "<< *it3 << " " << " => " << &(*it3)<< endl;
  cout << "Index 4 : "<< *it4 << " " << " => " << &(*it4)<< endl;

  //effacer la valeur 3
  auto it = find(vec.begin(),vec.end(),val_remove);
  if(it != vec.end()){
    vec.erase(it);
  }
  cout << "***************************"<<endl;
  cout << "Vecteur : "; for(auto e : vec) cout << e;
  cout << endl;
  cout << "Adresse vecteur modifié : "<< &vec <<endl;
  cout << "Size :"<< vec.size()<<endl;
  cout << "Index 0 : "<< *it0 << " " << " => " << &(*it0)<< endl;
  cout << "Index 1 : "<< *it1 << " " << " => " << &(*it1)<< endl;
  cout << "Index 2 : "<< *it2 << " " << " => " << &(*it2)<< endl;
  cout << "Index 3 : "<< *it3 << " " << " => " << &(*it3)<< endl;
  //cout << "Index 4 : "<< *it4 << " " << " => " << &(*it4)<< endl;
  cout << "Index 4 : " << vec[vec.size() - 1] << " => " <<&vec[vec.size() - 1] <<endl;
  cout << "Index 5 : " << vec[vec.size()]     << " => " <<&vec[vec.size()]     <<endl;
  cout << "Index 6 : " << vec[vec.size() + 1] << " => " <<&vec[vec.size() + 1] <<endl;
  cout << "Index 7 : " << vec[vec.size() + 2] << " => " <<&vec[vec.size() + 2] <<endl;

   return 0;
}