#include <iostream> //std::cerr
#include <fstream> // std::ofstream
#include <cstdlib>

int main(){
    std::ofstream myfile;

    myfile.open("sample.txt");

    if(!myfile){
        std::cerr << "Erreur saisi!!";
        return 1;
    }
    myfile << "Line 1\n";
    myfile.close();

    myfile.open("sample.txt",std::ios::app);
    myfile << "Line 2\n";
    myfile.close();

    myfile.open("sample.txt",std::ios::app);
    myfile << "Line 3\n";
    myfile.close();

    
    return EXIT_SUCCESS;
}