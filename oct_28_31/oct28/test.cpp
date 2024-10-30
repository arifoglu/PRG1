#include <iostream>
#include <iomanip>
using namespace std;

void separation(const string & gauche,const string & horizontal,const string & fine,const string & epaisse,const string & droit,int largeur,int m,int n){
    for(int j = 0; j < n * m;++j){
        if(j == 0)
            cout << gauche;
        else if(j % n == 0)
            cout << epaisse;
        else 
            cout << fine;
        for(int k = 0; k <= largeur + 1;++k)
            cout << horizontal ;
    }
    cout << droit;
}

int main(){
    int m, n;
    cin >> m >> n;
    int taille = n*m;
    int largeur= 1;
    while((taille /= 10) > 0)
    ++largeur;
    for(int i = 0; i < m*n;++i){
        if(i == 0)
            separation("┏","━","┯","┳","┓",largeur,m,n);
        else if(i% m == 0)
            separation("┠","━","┼","╂","┨",largeur,m,n);
        else
            separation("┣","━","┿","╋","┫",largeur,m,n);
        for(int j = 0;j < m*n;++j){
            if(j % m == 0)
            cout << "┃ ";
            else
            cout << "│ ";
            cout << setw(largeur) << ((i/m + i*n + j)%(m*n) + 1) << ' ';
        }
        cout << "┃\n";
        separation("┗","━","┷","┻","┛",largeur,m,n);
    }
}