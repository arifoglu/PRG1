#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

void encodeFile(const string& inputFilename,const string& outputFilename,int shift){
    ifstream fichier_source(inputFilename,ios::in);
    if(!fichier_source){
        cerr << "Le fichier n'a pas trouvé!!";
        return;
    }
    
    ofstream fichier_sortie(outputFilename,ios::out);
    if(!fichier_sortie){
        cerr << "Le fichier n'a pas trouvé!!";
        return;
    }

    shift %= 26;
    fichier_source.seekg(0);
    string line;
    while(getline(fichier_source,line)){
        for(size_t i = 0; i < line.size();++i){            
            if(isalpha(line[i])){
            char base = islower(line[i]) ? 'a' : 'A';
            line[i] = ((line[i] - base + shift +26)%26) + base;
            }

            //line[i] = static_cast<char>(line[i] >> shift);

        }
        
        fichier_sortie << line <<endl;
    }
    fichier_source.close();
    fichier_sortie.close();
}