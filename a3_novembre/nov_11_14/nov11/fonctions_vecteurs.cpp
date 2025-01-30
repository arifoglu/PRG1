
#include "fonctions_vecteurs.hpp"

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

//Fusionner les deux vecteurs (cette partie a été pris de chatgpt)
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

//fonction de fibonacci 
vector<int> fibonacci(size_t n){
    //pour stocker la suite de Fibonacci 
    vector<int> fibo;
    //1. et 2. élément 
   fibo.push_back(1);
   if(n > 1){fibo.push_back(1);}

    for(size_t i = 2; i < n;++i){
        fibo.push_back(fibo[i - 1] + fibo[ i - 2]);
    }
    return fibo;
}
