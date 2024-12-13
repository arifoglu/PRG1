#include "setbase.hpp"

int Setbase::base_affichage = 10;

int Setbase::set_base(int base) {
    if (base < 2 || base > 36) {
        base = 10;
    }
    base_affichage = base;
    return base_affichage;
}