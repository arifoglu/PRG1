#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
 int y; cin >> y;
  if (cin) { // conversion du flux cin en booléen
  cout << "Valeur correctement lue\n";
  } else {
  cout << "Erreur dans le flux d'entrée\n";
  y = 42;
  };

  cin ? cout << "Valeur correctement lue\n" : cout << "Erreur dans le flux d'entrée\n";
  
  int x;  cin >> x ;
  cin  && x == 0 ? cout << "Valeur nulle\n" : cout << "Valeur non nulle\n";
    return EXIT_SUCCESS;
}