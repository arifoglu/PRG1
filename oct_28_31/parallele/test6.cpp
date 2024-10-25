#include <iostream>
#include <cstdlib>
#include <fstream>

int main() {
    std::ofstream file_out("sortie.txt",std::ios::out);

    auto backup = std::cout.rdbuf();

    std::cout.rdbuf(file_out.rdbuf());
    std::cout << "Ligne écrite dans le fichier\n";

    std::cout.rdbuf(backup);
    std::cout << "Ligne affichée sur la console \n";
    return EXIT_SUCCESS;
}
