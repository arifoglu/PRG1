/*
Ecrire la fonction rotateRight permettant de décaler toutes les vateurs d'un vecteur vers la droite, la dernière valeur prenant la position d'indice 0
avant : [1, 2, 3, 4, 5, 6, 7, 8, 9]
après : [9, 1, 2, 3, 4, 5, 6, 7, 8]
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void rotateRight(vector<int> & v){
    //si  vector est vide 
    if(v.empty()) return;
    
    // Initialiser la meme taille    
    vector<int> vR(v.size());
    
    // on met la valeur derniere en premiere
    vR[0] = v[v.size() - 1];
    for(size_t i = 0; i < v.size() - 1 ;++i){
        vR[i + 1] = v[i];
    }  
    
    v = vR;  
}

int main() {
   vector<int> v{1,2,3,4,5,6,7,8,9};
   rotateRight(v); 
   for(int e : v )
   cout << e ;
   cout << endl;


   return 0;
}