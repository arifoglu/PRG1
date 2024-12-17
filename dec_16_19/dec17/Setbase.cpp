#include "Setbase.hpp"

int Setbase::base_affichage = 10;

int Setbase::set_base(size_t base) {
    if (base < 2 || base > 36) {
        base = 10;
    }
    base_affichage =static_cast<int>(base);
    return base_affichage;
}



