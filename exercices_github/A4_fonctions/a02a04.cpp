/*
Ecrire un programme C++ affichant à l'écran si les années 1900, 2000, 2010 et 2020 sont bissextiles ou non.

Pour ce faire, écrire une fonction booléenne estBissextile prenant en paramètre l'année à tester.

Une année est bissextile si:
- elle est divisible par 400 ...
- ou alors par 4 mais pas par 100.

*/
#include <iostream>
#include <cstdlib>

using namespace std;

bool estBissextile(int p);

int main(){
    cout << boolalpha ;
    cout << "1900 = "<<estBissextile(1900)<<endl;
    cout << "2000 = "<<estBissextile(2000)<<endl;
    cout << "2010 = "<<estBissextile(2010)<<endl;
    cout << "2020 = "<<estBissextile(2020)<<endl;

    return EXIT_SUCCESS;
}

bool estBissextile(int p){
  return (p % 400 == 0 || (p % 4 == 0 && p % 100 != 0));
}