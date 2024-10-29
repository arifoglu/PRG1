#include <iostream>
#include <fstream>
using namespace std;

int main() {

ofstream fichier_log("log.txt", ios::out);

auto sauvegarde_clog = clog.rdbuf(); // Sauvegarde du tampon par défaut de clog

clog.rdbuf(fichier_log.rdbuf()); // Redirection de clog
clog << "Ecriture dans le fichier log.txt\n";
clog.rdbuf(sauvegarde_clog); // Rétablissement du tampon par défaut
 clog << "Ecriture dans la console\n";
 fichier_log.close();

 }