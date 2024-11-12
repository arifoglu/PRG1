// Laboratoire  Laboratoire 17 
// Date:        11.11.2024
// Author:      Abdulkadir Arifoglu
// File:        arifoglu_labo17.cpp
// Compiler:    clang version 16.0.0
// Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic
/*
Le buts: Implanter diverses fonctions pour des vector<int>
1)Écrire une surcharge de l’opérateur << permettant d’afficher un vector<int> v au moyen de cout << v;
2)Écrire une fonction qui prend un vector<int> en argument et qui retourne la longueur de la plus longue séquence d’éléments identiques adjacents et la position de son premier élément.
3)Écrire une fonction qui prend deux vector<int> en argument et qui indique si ces deux vecteurs comportent les mêmes éléments (si l’un des vecteur comporte un ou plusieurs éléments de valeur e, alors l’autre en comporte au moins un de valeur e)
4)Écrire une surcharge de l’opérateur+, qui prend en paramètre 2 vector supposés correspondre à des nombres entiers naturels de taille arbitraire représentés en base 10, où chaque compsante stocke un chiffre entre 0 et 9, et qui retourne un vector correspondant à l’addition de ces 2 nombres.
5)Écrire une fonction prenant comme paramètre deux vector<int> supposés triés par ordre croissant et qui retourne leur union, avec l’ensemble des éléments trié. Cette fonction doit s’exécuter en temps linéaire et pouvoir être utilisée par la fonction suivante.
6)Écrire un programme qui teste toutes les fonctions ci-dessus, notamment en affichantle nombre de Fibonacci fn de rang n, défini par f0 = 0,f1 = 1 et fn = fn−1 + fn−2 (sans risquer un débordement des entiers) et triant un vector par valeurs non décroissantes.
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

 
ostream& operator<<(ostream & os, const vector<int> & v);
size_t longue_sequence(vector<int> & v);
bool compare_vecteurs(vector<int> & ,vector<int> &);
vector<int> operator+(const vector<int> & v1, const vector<int> & v2);
void tri_fusion(vector<int> &v);
vector<int> fusion(const vector<int> &,const vector<int> &);
vector<int> fibonacci(size_t n);

int main() {
    //1)La surcharge de l'opérateur <<
    vector<int> v = {1,2,3,4,5};
    cout << "Affichage du vector : " << v << endl;

    //2)La fonction longue_sequence
    vector<int> v1 = {1,2,2,3,3,4,4,4,5,1,1,1,1,5,5};
    longue_sequence(v1);

    //3)Compare vecteurs
    vector<int> v2 = {1,2,2,3,3,4,4,4,5,1,1,1,1,5,5};
    vector<int> v3 = {1,3,3,2,2,4,4,4,5,1,1,5,5,1,1};
    cout << "Les vecteurs sont egaux ? : " << boolalpha << compare_vecteurs(v2,v3) << endl;

    //4)L'addition deux vecteurs
    vector<int> v4 = {1,2,2};
    vector<int> v5 = {1,3,5};
    vector<int> total = v4 + v5;
    cout << "Addition des vecteurs : "<< total << endl;

    //5)la fonction tri_fusion
    vector<int> v6 = {1,3,5,7,9};
    vector<int> v7 = {2,4,6,8};
    vector<int> result = fusion(v6,v7);
    cout << "Fusion de deux vecteurs triés :" << result << endl;

    //6)Fibonacci 
    size_t n;
    cout << "Entrez une valeur pour calculer Fibonacci F(n): ";
    cin >> n;

    vector<int> vecteur_fibonacci = fibonacci(n);

    tri_fusion(vecteur_fibonacci);
    cout << "Fibonacci de F(0) à F(" << n << ") sont triés : " << vecteur_fibonacci <<endl; 
    
    return EXIT_SUCCESS;
}

//Une surcharge de operator de <<
ostream& operator<<(ostream & os, const vector<int> & v){
    for(const int & value : v)
    {
        os << value ;
    }
    return os;
}

// Cette fonction calcule la longueur de la plus longue séquence d'éléments
size_t longue_sequence(vector<int> & v){
    //vector<int> v = {1,2,2,3,3,4,4,4,5,1,1,1,1,5,5};
    
    //la longueur de la plus longue séquence "consécutive"
    size_t longeur_max = 1;
    //la longueur de la séquence consécutive "actuelle"
    size_t longeur_actuel = 1;
    //la position de la la plus longue séquence "consécutive"
    size_t position_la_plus_sequence = 0;

    for(size_t i = 0; i < v.size() - 1;++i)
    {
         if(v[i] == v[i + 1])
         {
            // si l'élément courant est égal à 'élément suivant on prolonge la séquence
            longeur_actuel++;
         }
         else
         {
            // si les éléments sont différents ,la sequence se termine
            if(longeur_actuel > longeur_max)
            {
                //on met à jours longeur_max
                longeur_max = longeur_actuel;
                position_la_plus_sequence = i - longeur_actuel + 1;
            }
            //réinitialiser de la longeur
            longeur_actuel = 1;
         }
    }
    if(longeur_actuel > longeur_max)
    {
        longeur_max = longeur_actuel;
        //mise à jour de l'index
        position_la_plus_sequence = v.size() - longeur_actuel;
    }
     cout << "La premier élément de cette séquence se trouve à l'index : " << position_la_plus_sequence << endl;
     cout << "La longeur de la plus longue séquence est : " << longeur_max << endl;


    return longeur_max;
}

//compare deux vecteurs
bool compare_vecteurs(vector<int> & v1,vector<int> & v2){
    //si des longeurs sont differents ,les vecteurs ne peuvent pas être egaux:
    if(v1.size() != v2.size()){return false;}
    //Nous trions les vecteurs pour comparer
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    // si les vecteurs sont egaux ,return sera true.
    return v1 == v2;
}

// addition deux vecteurs
vector<int> operator+(const vector<int> & v1, const vector<int> & v2){
    //Pour ajouter les résultats
    vector<int> result;
    //Calcul de la plus grande des vecteurs
    size_t max_size = max(v1.size(),v2.size());
    //La valeur retenue dans l’addition
    int valeur_retenu = 0;
    
    for(size_t i = 0; i < max_size;++i)
    {   
        // // Si l'indice est dans les limites du vecteur, nous prenons le chiffre correspondant depuis la fin ; sinon, nous prenons 0
        int chiffre1 = (i < v1.size()) ? v1[v1.size() - 1 - i] : 0;
        int chiffre2 = (i < v2.size()) ? v2[v2.size() - 1 - i] : 0;

        //addition des chiffres
        int somme = chiffre1 + chiffre2 + valeur_retenu;
        //Pour écrire la valeur totale dans le système décimal
        valeur_retenu = somme / 10;
        //Pour ajouter au résultat
        result.push_back(somme % 10);
    }
    
    // si valeur retenu > 0 ,on le rajoutera 
    if(valeur_retenu > 0){ result.push_back(valeur_retenu);}
    
    //Nous devons inverser le vecteur résultat
    reverse(result.begin(),result.end());
    
    return result;
}

//l'approche merge sort pour trier des vecteurs
void tri_fusion(vector<int> &v){
    //si la longeur du vecteur < 2 ,il est déjà en ordre
    if (v.size() < 2) return;
    
    //Diviser le vecteur
    vector<int> va, vb;
    // partie 1
    va.insert(va.begin(), v.begin(), v.begin() + v.size() / 2);
    // partie 2
    vb.insert(vb.begin(), v.begin() + v.size() / 2, v.end());    

    // Trier les deux sous-vecteurs
    tri_fusion(va);
    tri_fusion(vb);
    //fusionner les deux moitiés triées
    v = fusion(va,vb);
}


//Fusionner les deux vecteurs
vector<int> fusion(const vector<int> & va,const vector<int> & vb){
    vector<int> result;
    size_t i = 0;
    size_t j = 0;

     // Ajouter l'élément le plus petit en comparant chaque élément des vecteurs.
    while(i < va.size() && j < vb.size())
    {
        if(va[i] < vb[j])
        {
            //ajouter l'élément du vecteur 1
            result.push_back(va[i]);
            i++;
        }
        else 
        {
            //ajouter l'élément du vecteur 2
            result.push_back(vb[j]);
            j++;
        }
    }
    // Ajouter les éléments restants
    while( i < va.size())
    {
        result.push_back(va[i]);
        i++;
    }
    while( j < vb.size())
    {
        result.push_back(va[j]);
        j++;
    }

    return result;
}

vector<int> fibonacci(size_t n){
    //pour stocker la suite de Fibonacci 
    vector<int> fibo;

    //1. et 2. nombre de fibonacci 0 et 1
    fibo.push_back(0);
    fibo.push_back(1);

    for(size_t i = 2; i <= n;++i){
        fibo.push_back(fibo[i - 1] + fibo[ i - 2]);
    }
    return fibo;
}

