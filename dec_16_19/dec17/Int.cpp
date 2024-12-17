#include "Int.hpp"


//constructor par défaut
Int::Int() : negatif(false), valeur_absolue(0) {}

//constructor int64_t 
Int::Int(int64_t valeur){
    if(valeur < 0){
        negatif = true;
        valeur_absolue = Unsigned(static_cast<uint64_t>(-valeur));
    }else{
        negatif = false;
        valeur_absolue = Unsigned(static_cast<uint64_t>(valeur));
    }
}
//constructor string 
Int::Int(const string& valeur){
    if(valeur.empty()){
        throw invalid_argument("Chaîne vide non valide pour Int");
    }
    if(valeur[0] == '-'){
        negatif = true;
        valeur_absolue = Unsigned(valeur.substr(1));
    }else{
        negatif = false;
        valeur_absolue = Unsigned(valeur);
    }
}

string Int::Int::to_string()const{
    ostringstream oss;
    if(negatif){
        oss << "-";
    }
    oss << valeur_absolue.data();
    return oss.str();
}

//operator <<
ostream& operator<<(ostream& os,const Int& i){
    if(i.negatif){
        os << "-";
    }
    os << i.valeur_absolue.data();
    return  os;
}
