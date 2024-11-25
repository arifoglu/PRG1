#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    //mode d'écriture => out
    //ofstream fichier("revison.txt",ios::out);
    //if(!fichier){
    //    cerr << "le fichier n'a pas pu ouvrir.\n";
    //    return EXIT_FAILURE;
    //}
    //fichier << "Ligne 1\n";
    //fichier.close();

    //mode d'ajouter => app
    //ofstream fichier("revison.txt" , ios::out |ios::app);
    //if(!fichier){
    //    cerr << "Le fichier n'a pas pu ouvrir!\n";
    //    return EXIT_FAILURE;
    //}
    //fichier << "Ligne 2\n";
    //fichier.close();

    //mode lire => ios::in
    //ifstream fichier("revison.txt",ios::in);
    //if(!fichier){
    //    cerr << "Le fichier n'a pas ouvrir!\n";
    //}
    //fichier.seekg(0);
    //string line;
    //while(getline(fichier,line)){
    //    cout << line << endl;
    //}

    //mode lire et d'un fichier 
    //ifstream fichier("revison.txt",ios::in);
    //if(!fichier){
    //    cerr << "Le fichier n'a pas ouvrir!\n";
    //}
    //ofstream fichier2("infos.txt",ios::out | ios::app);
    //fichier.seekg(0);
    //string line;
    //while(getline(fichier,line)){
    //    fichier2 << line << endl;
    //}

    //////////////////////////////////////////////////TESTING
    // 1) ouvrir le fichier et ecrire
    //ofstream fichier("final.txt",ios::out);
    //if(!fichier){
    //    cerr << "le fichier n'a pas pu ouvrir!!!\n";
    //    return EXIT_SUCCESS;
    //}
    //fichier << "First line!\n";
    //fichier.close();
    // 2) ajouter le fichier
    //ofstream fichier("final.txt",ios::out | ios::app);
    //if(!fichier){
    //    cerr << "le fichier n'a pas pu ouvrir!!!";
    //    return EXIT_SUCCESS;
    //}
    //fichier << "Second Line!!!\n";
    //fichier.close();
    // 3) lire fichier et s'afficher console
    //ifstream fichier("final.txt",ios::in);
    //if(!fichier){
    //    cerr << "le fichier n'a pas pu ouvrir!!!\n";
    //    return EXIT_SUCCESS;
    //}
    //string line;
    //while(getline(fichier,line)){
    //    cout << line << endl;
    //}
    //fichier.close();
    // 4) lire fichier et afficher d'autre fichier
    //ifstream fichier("final.txt",ios::in);
    //if(!fichier){
    //    cerr << "le fichier n'a pas pu ouvrir!!\n";
    //    return EXIT_FAILURE;
    //}
    //ofstream fichier2("infosa.txt",ios::out | ios::app);
    //fichier.seekg(0);
    //string line;
    //while(getline(fichier,line)){
    //    fichier2 << line << endl;
    //}
    //fichier.close();
    //fichier2.close();
    ////////////////////////////////////////////////////////////////








    return EXIT_SUCCESS;
}
