 #include <iostream>
 #include <fstream>
 using namespace std;

int main() {
    ofstream fichier_log("log.txt",ios::out);

    // console log bufferini sakliyoruz basta
    auto sauvegarde_clog = clog.rdbuf();

    // console log bufferini dosya bufferina yonlendiriyoruz
    clog.rdbuf(fichier_log.rdbuf());

    clog << "ecriture dans le fichier log.txt\n";

    fichier_log.close();

    clog.rdbuf(sauvegarde_clog);

    clog << "ecriture dans la console";
 
}