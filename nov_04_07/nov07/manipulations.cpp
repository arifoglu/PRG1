#include "manipulations.hpp"

string replace_all_GPT(string str,const string &from, const string & to ){
    if(from.empty())
    { 
        // Si la partie à remplacer est vide, string elle-même est renvoyée  
        return str;
    }
    // Initialise la position de départ à 0 pour commencer la recherche
    size_t start_pos = 0;
    // Effectuer le remplacement lors que 'from' est trouvée dans 'str'
    while((start_pos = str.find(from,start_pos)) != std::string::npos )
    {
        //Remplace la sous-chaîne trouvée par 'to' à la position 'start_pos'
        str.replace(start_pos,from.length(),to);
        // Avance la position de départ de la longeur de 'to'
        start_pos += to.length();
    }
    return str;
} 

string replace_all(string str, const string & from, const string & to){
    //la position et la longueur du mot à changer
    size_t position_from = str.find(from);
    size_t longeur_from = from.length();

    if(position_from == string::npos)
    {
        cout << "Le mot '" << from << "' n'a pas trouvé." << endl;
    }
    else
    {
        // Effectuer le remplacement lors que 'from' est trouvée dans 'str'
        while(position_from != string::npos){
              str.replace(position_from,longeur_from,to);
              //Déterminer la nouvelle position après le changement du mot
              position_from = str.find(from,position_from + to.length());
        }                
    }
    return str;
}

string lire_fichier(const string & nom_fichier){
    //Pour la lecture à partir d'un fichier
    ifstream fichier(nom_fichier);
    //Verifier si le fichier est ouvert
    if(!fichier){
        cerr << "Le fichier n'a pas pu ouvrir. ";
        return ""; 
    }
    //Lire le fichier (line) et sauvegarde (contenu) en tant que string
    string line, contenu; 
    while(getline(fichier,line)){
        contenu += line + "\n";
    }
    fichier.close();
    return contenu;
}

string modifier_longeur(string str, int k){
    //Définition de la limite pour la valeur de k 
    if(k < - 20 || k > 5){
        cerr << "Erreur : k doit être entre (-10) et (20)." << endl;
        return str;
    }
    // si k = 0
    if(k == 0){return str;}

    // si k > 0 
    if(k > 0)
    {   //pour augmenter la longeur
        for(int i = 0; i < k ;++i)
        {
            str += str;
        }
    }
    // si k < 0
    else if(k < 0)
    {   //pour diminuer la longeur
        str.resize(str.length() / (1 << - k));
    }
    return str;
}
