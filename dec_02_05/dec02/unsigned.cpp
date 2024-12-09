#include "unsigned.hpp"

Unsigned::Unsigned() : format_binaire("0") {}

// Constructor for string
Unsigned::Unsigned(const std::string &binaire) : format_binaire(binaire) {}

// Constructor for uint64_t
Unsigned::Unsigned(uint64_t nombre) {
    format_binaire = std::bitset<64>(nombre).to_string();
    format_binaire.erase(0, format_binaire.find_first_not_of('0'));
    if (format_binaire.empty()) {
        format_binaire = "0";
    }
}

// Operator <<
std::ostream &operator<<(std::ostream &out, const Unsigned &u) {
    unsigned long long decimal = 0;
    for (size_t i = 0; i < u.format_binaire.size(); ++i) {
        decimal = decimal * 2 + static_cast<unsigned long long>(u.format_binaire[i] - '0');
    }
    out << decimal;
    return out;
}

// Operator +
Unsigned Unsigned::operator+(const Unsigned &autre) const {
    std::string resultat = "";
    int retenue = 0;
    size_t size1 = format_binaire.size();
    size_t size2 = autre.format_binaire.size();
    size_t maxSize = std::max(size1, size2);

    for (size_t i = 0; i < maxSize; ++i) {
        int bit1 = (i < size1) ? format_binaire[size1 - 1 - i] - '0' : 0;
        int bit2 = (i < size2) ? autre.format_binaire[size2 - 1 - i] - '0' : 0;
        int somme = bit1 + bit2 + retenue;
        retenue = somme / 2;
        resultat = char('0' + (somme % 2)) + resultat;
    }
    if (retenue) {
        resultat = '1' + resultat;
    }
    if (resultat.empty()) {
        resultat = "0";
    }
    return Unsigned(resultat);
}

// Operator -
Unsigned Unsigned::operator-(const Unsigned &autre) const {
    std::string resultat = "";
    int emprunt = 0;
    size_t size1 = format_binaire.size();
    size_t size2 = autre.format_binaire.size();
    size_t maxSize = std::max(size1, size2);

    for (size_t i = 0; i < maxSize; ++i) {
        int bit1 = (i < size1) ? format_binaire[size1 - 1 - i] - '0' : 0;
        int bit2 = (i < size2) ? autre.format_binaire[size2 - 1 - i] - '0' : 0;
        int difference = bit1 - bit2 - emprunt;

        if (difference < 0) {
            difference += 2;
            emprunt = 1;
        } else {
            emprunt = 0;
        }
        resultat = char('0' + difference) + resultat;
    }
    return Unsigned(resultat);
}

// Operator *
Unsigned Unsigned::operator*(const Unsigned &autre) const {
    Unsigned resultat("0");
    Unsigned multiplicand = *this;
    Unsigned multiplier = autre;
    size_t size = multiplier.format_binaire.size();

    for (size_t i = 0; i < size; ++i) {
        if (multiplier.format_binaire[size - 1 - i] == '1') {
            Unsigned multiplicand_decale = multiplicand;
            for (size_t j = 0; j < i; ++j) {
                multiplicand_decale.format_binaire += '0';
            }
            resultat += multiplicand_decale;
        }
    }
    return resultat;
}

// Operator /
Unsigned Unsigned::operator/(const Unsigned &autre) const {
    Unsigned quotient("0");
    Unsigned reste = *this;
    Unsigned diviseur = autre;

    size_t taille = reste.format_binaire.size();
    size_t taille_diviseur = diviseur.format_binaire.size();

    for (size_t i = 0; i < taille - taille_diviseur + 1; ++i) {
        reste.format_binaire += '0';
        if (reste >= diviseur) {
            quotient.format_binaire += '1';
            reste = reste - diviseur;
        } else {
            quotient.format_binaire += '0';
        }
    }
    quotient.format_binaire.erase(0, quotient.format_binaire.find_first_not_of('0'));
    if (quotient.format_binaire.empty()) {
        quotient.format_binaire = "0";
    }
    return quotient;
}

// Operator %
Unsigned Unsigned::operator%(const Unsigned &autre) const {
    Unsigned reste = *this;
    Unsigned diviseur = autre;

    size_t taille = reste.format_binaire.size();
    size_t taille_diviseur = diviseur.format_binaire.size();

    for (size_t i = 0; i < taille - taille_diviseur + 1; ++i) {
        reste.format_binaire += '0';
        if (reste >= diviseur) {
            reste = reste - diviseur;
        }
    }
    reste.format_binaire.erase(0, reste.format_binaire.find_first_not_of('0'));
    if (reste.format_binaire.empty()) {
        reste.format_binaire = "0";
    }
    return reste;
}

// Operator +=
Unsigned &Unsigned::operator+=(const Unsigned &autre) {
    *this = *this + autre;
    return *this;
}

// Operator -=
Unsigned &Unsigned::operator-=(const Unsigned &autre) {
    *this = *this - autre;
    return *this;
}

// Operator *=
Unsigned &Unsigned::operator*=(const Unsigned &autre) {
    *this = *this * autre;
    return *this;
}

// Comparison operators
bool Unsigned::operator==(const Unsigned &autre) const {
    return format_binaire == autre.format_binaire;
}

bool Unsigned::operator!=(const Unsigned &autre) const {
    return format_binaire != autre.format_binaire;
}

bool Unsigned::operator<(const Unsigned &autre) const {
    return format_binaire < autre.format_binaire;
}

bool Unsigned::operator>(const Unsigned &autre) const {
    return format_binaire > autre.format_binaire;
}

bool Unsigned::operator<=(const Unsigned &autre) const {
    return format_binaire <= autre.format_binaire;
}

bool Unsigned::operator>=(const Unsigned &autre) const {
    return format_binaire >= autre.format_binaire;
}

// Operator <=>
std::strong_ordering Unsigned::operator<=>(const Unsigned &autre) const {
    if (format_binaire.size() < autre.format_binaire.size())
        return std::strong_ordering::less;
    if (format_binaire.size() > autre.format_binaire.size())
        return std::strong_ordering::greater;
    if (format_binaire < autre.format_binaire)
        return std::strong_ordering::less;
    if (format_binaire > autre.format_binaire)
        return std::strong_ordering::greater;
    return std::strong_ordering::equal;
}

// Fibonacci
Unsigned Unsigned::fibonacci(unsigned long long n) const {
    if (n == 0) return Unsigned("0");
    if (n == 1) return Unsigned("1");

    Unsigned a("0"); // F(0)
    Unsigned b("1"); // F(1)

    for (unsigned long long i = 2; i <= n; ++i) {
        Unsigned temp = b;   
        b = a + b;          
        a = temp;            
    }
    return b;
}


