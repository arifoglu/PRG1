#include "display_csv.h"


void display_csv(string str,char ch, int col){
    
    ifstream fichier(str, ios::in);
    if(!fichier){
        throw File_not_found{};
    }
    fichier.seekg(0);
    string line;
    while(getline(fichier,line)){
        stringstream s(line);
        string element;
        while(getline(s,element,ch)){
            cout << setw(col) << element ;    
        }
        cout << endl;
    }
    
    fichier.close();

}
