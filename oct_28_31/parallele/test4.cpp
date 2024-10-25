#include <iostream> //std::cerr
#include <fstream> // std::ofstream
#include <cstdlib>

int main(){
    std::ifstream file_in;

    file_in.open("sample.txt");

    if(!file_in){
        std::cerr << "Erreur saisi!\n";
        return 1;
    }

    while(file_in){
        std::string une_ligne;
        // lire 
        std::getline(file_in,une_ligne);
        std::cout << une_ligne <<'\n';
    }
    file_in.close();
    
    return EXIT_SUCCESS;
}