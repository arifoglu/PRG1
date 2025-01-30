#include "display_csv.h"


void display_csv(const string& filename,char c, int col){
    ifstream fichier(filename,ios::in);

    if(!fichier){
        throw File_not_found{};
    }
    fichier.seekg(0);
    string line;
    while(getline(fichier,line)){
        stringstream s(line);
        string element;
        while(getline(s,element,c)){
            cout << setw(col) << element;
        }
        cout << endl;
    }
    fichier.close();
}
