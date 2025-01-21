#include "unsigned.hpp"
#include <iostream>
#include <bitset>
#include <stdexcept>
#include <cmath>
#include <cstdint>

using namespace std;

//1)

// Vérification si une chaîne est bien binaire
bool Unsigned::est_binaire(const string &chaine) {
    for (char c : chaine) {
        if (c != '0' && c != '1') 
        {// La chaîne n'est pas binaire
            return false; 
        }
    }
    return true;
}

// Constructeur : 
Unsigned::Unsigned() : format_binaire("0") {}

Unsigned::Unsigned(int nombre) : Unsigned(static_cast<uint64_t>(nombre)) {}

// Constructeur : Crée un Unsigned à partir d'une chaîne binaire
Unsigned::Unsigned(const string &binaire) {
    if (!est_binaire(binaire)) {
        // Lance une exception si la chaîne n'est pas binaire
        throw invalid_argument("Ill-formed string for Unsigned");
    }
    format_binaire = binaire.empty() ? "0" : binaire;
}

// Constructeur : Crée un Unsigned à partir d'un entier uint64_t
Unsigned::Unsigned(uint64_t nombre) {
    // Convertit l'entier en binaire sous forme de chaîne
    format_binaire = bitset<64>(nombre).to_string();
    // Supprime les zéros inutiles à gauche
    format_binaire.erase(0, format_binaire.find_first_not_of('0'));
    if (format_binaire.empty()) 
    {
        format_binaire = "0";
    }
}

//2)

/////////////// Opérateurs de comparaison

// Opérateur ==
bool Unsigned::operator==(const Unsigned &autre) const {
    return format_binaire == autre.format_binaire;
}

// Opérateur !=
bool Unsigned::operator!=(const Unsigned &autre) const {
    return format_binaire != autre.format_binaire;
}

// Opérateur <
bool Unsigned::operator<(const Unsigned &autre) const {
    if (format_binaire.length() != autre.format_binaire.length()) {
        return format_binaire.length() < autre.format_binaire.length();
    }
    return format_binaire < autre.format_binaire;
}

// Opérateur >
bool Unsigned::operator>(const Unsigned &autre) const {
    if (format_binaire.length() != autre.format_binaire.length()) {
        return format_binaire.length() > autre.format_binaire.length();
    }
    return format_binaire > autre.format_binaire;
}

// Opérateur <=
bool Unsigned::operator<=(const Unsigned &autre) const {
    return *this < autre || *this == autre;
}

// Opérateur >=
bool Unsigned::operator>=(const Unsigned &autre) const {
    return *this > autre || *this == autre;
}

//3)

// Opérateur += : Addition bit à bit avec retenue
Unsigned &Unsigned::operator+=(const Unsigned &autre) {
    string result = "";
    int retenue = 0;
    size_t size1 = format_binaire.size();
    size_t size2 = autre.format_binaire.size();
    size_t maxSize = max(size1, size2);

    for (size_t i = 0; i < maxSize; ++i) {
        int bit1 = (i < size1) ? format_binaire[size1 - 1 - i] - '0' : 0;
        int bit2 = (i < size2) ? autre.format_binaire[size2 - 1 - i] - '0' : 0;
        int somme = bit1 + bit2 + retenue;

        retenue = somme / 2;
        result = char('0' + (somme % 2)) + result;
    }
    if (retenue) {
        result = '1' + result;
    }
    format_binaire = result;
    return *this;
}

// Opérateur -= : Soustraction bit à bit avec emprunt
Unsigned &Unsigned::operator-=(const Unsigned &autre) {
    if (*this < autre) {
        throw range_error("Negative result");
    }

    string result = "";
    int emprunt = 0;
    size_t size1 = format_binaire.size();
    size_t size2 = autre.format_binaire.size();
    size_t maxSize = max(size1, size2);

    for (size_t i = 0; i < maxSize; ++i) {
        int bit1 = (i < size1) ? format_binaire[size1 - 1 - i] - '0' : 0;
        int bit2 = (i < size2) ? autre.format_binaire[size2 - 1 - i] - '0' : 0;

        int diff = bit1 - bit2 - emprunt;

        if (diff < 0) {
            diff += 2;
            emprunt = 1;
        } else {
            emprunt = 0;
        }
        result = char('0' + diff) + result;
    }

    // Supprime les zéros inutiles
    result.erase(0, result.find_first_not_of('0'));
    format_binaire = result.empty() ? "0" : result;
    return *this;
}

//4)

// Opérateur + : Utilise l'opérateur += pour implémentation canonique
Unsigned Unsigned::operator+(const Unsigned &autre) const {
    // Crée une copie de l'objet courant
    Unsigned temp = *this; 
    // Utilise l'opérateur +=
    temp += autre;        
    // Retourne un nouvel objet
    return temp;          
}

// Opérateur - : Utilise l'opérateur -= pour implémentation canonique
Unsigned Unsigned::operator-(const Unsigned &autre) const {
    // Crée une copie de l'objet courant
    Unsigned temp = *this; 
    // Utilise l'opérateur -=
    temp -= autre;        
   // Retourne un nouvel objet
    return temp;          
}

//5)

// Opérateur *= : Multiplication bit à bit avec addition et décalage
Unsigned &Unsigned::operator*=(const Unsigned &autre) {
    Unsigned resultat("0");
    string multiplicand = format_binaire;
    string multiplier = autre.format_binaire;

    for (size_t i = 0; i < multiplier.size(); ++i) {
        if (multiplier[multiplier.size() - 1 - i] == '1') {
            // Décale le multiplicand à gauche par i bits
            string multiplicand_decale = multiplicand + string(i, '0');
            // Ajoute le multiplicand décalé au résultat
            resultat += Unsigned(multiplicand_decale);
        }
    }

    format_binaire = resultat.format_binaire;
    return *this;
}

// Opérateur * : Utilise l'opérateur *= pour implémentation canonique
Unsigned Unsigned::operator*(const Unsigned &autre) const {
    // Crée une copie de l'objet courant
    Unsigned temp = *this; 
    // Utilise l'opérateur *=
    temp *= autre;        
    // Retourne un nouvel objet
    return temp;          
}

//6)

// Opérateur / : Division avec quotient en base 2
Unsigned Unsigned::operator/(const Unsigned &autre) const {
    if (autre.format_binaire == "0") {
        throw runtime_error("Division by 0");
    }

    Unsigned quotient("0");
    Unsigned reste("0");

    for (char bit : format_binaire) {
        // Décale le reste à gauche et ajoute le prochain bit
        reste.format_binaire += bit;
        // Supprime les zéros inutiles
        reste.format_binaire.erase(0, reste.format_binaire.find_first_not_of('0'));
        if (reste.format_binaire.empty()) {
            reste.format_binaire = "0";
        }

        if (reste >= autre) {
            // Soustrait le diviseur du reste
            reste -= autre;
            // Ajoute '1' au quotient
            quotient.format_binaire += "1";
        } else {
            // Ajoute '0' au quotient
            quotient.format_binaire += "0";
        }
    }

    // Supprime les zéros inutiles du quotient
    quotient.format_binaire.erase(0, quotient.format_binaire.find_first_not_of('0'));
    if (quotient.format_binaire.empty()) {
        quotient.format_binaire = "0";
    }

    return quotient;
}

// Opérateur % : Retourne le reste de la division
Unsigned Unsigned::operator%(const Unsigned &autre) const {
    if (autre.format_binaire == "0") {
        throw runtime_error("Division by 0");
    }

    Unsigned reste("0");

    for (char bit : format_binaire) {
        // Décale le reste à gauche et ajoute le prochain bit
        reste.format_binaire += bit;
        // Supprime les zéros inutiles
        reste.format_binaire.erase(0, reste.format_binaire.find_first_not_of('0'));
        if (reste.format_binaire.empty()) {
            reste.format_binaire = "0";
        }

        if (reste >= autre) {
            // Soustrait le diviseur du reste
            reste -= autre;
        }
    }

    return reste;
}

//7)
// fibonacci
Unsigned Unsigned::fibonacci(unsigned int n) {
    if (n == 0) return Unsigned("0");
    if (n == 1) return Unsigned("1");

    Unsigned a("0"); // F(0)
    Unsigned b("1"); // F(1)

    for (unsigned int i = 2; i <= n; ++i) {
        Unsigned temp = b;
        // F(n) = F(n-1) + F(n-2)
        b += a; 
        a = temp;
    }

    return b;
}

// factorielle
Unsigned Unsigned::factorielle(unsigned int n) {
    Unsigned resultat("1");

    for (unsigned int i = 2; i <= n; ++i) {
        resultat *= Unsigned(static_cast<int>(i));
    }

    return resultat;
}

////////////////////////////Laboratoire 25
//1)
// Retourne la représentation binaire
string Unsigned::data() const {
    return format_binaire;
}

//2)

// Pré-incrémentation (++i)
Unsigned &Unsigned::operator++() {
    *this += Unsigned("1");
    return *this;
}

// Pré-décrémentation (--i)
Unsigned &Unsigned::operator--() {
    if (*this == Unsigned("0")) {
        throw range_error("Negative result");
    }
    *this -= Unsigned("1");
    return *this;
}
// Post-incrémentation (i++)
Unsigned Unsigned::operator++(int) {
    Unsigned temp = *this;
    ++(*this);
    return temp;
}
// Post-décrémentation (i--)
Unsigned Unsigned::operator--(int) {
    Unsigned temp = *this;
    --(*this);
    return temp;
}

// Fonction pour convertir un nombre en chaîne dans une base donnée
string convertir_base(const string &binaire, int base) {
    unsigned long long decimal = 0;

    // Convertit le binaire en decimal
    for (char bit : binaire) {
        decimal = decimal * 2 + (bit - '0');
    }

    // Convertit le decimal dans la base cible
    string resultat = "";
    const string chiffres = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    do {
        resultat = chiffres[decimal % base] + resultat;
        decimal /= base;
    } while (decimal > 0);

    return resultat;
}

// Opérateur << pour afficher un Unsigned
ostream &operator<<(ostream &os, const Unsigned &u) {
    int base = Setbase::base_affichage;
    string representation = convertir_base(u.data(), base);
    os << representation;
    return os;
}


//4)


Unsigned &Unsigned::operator=(uint64_t nombre) {
    format_binaire = std::bitset<64>(nombre).to_string();
    format_binaire.erase(0, format_binaire.find_first_not_of('0'));
    if (format_binaire.empty()) {
        format_binaire = "0";
    }
    return *this;
}

Unsigned::operator uint64_t() const {
    uint64_t decimal = 0;
    for (char bit : format_binaire) {
        decimal = decimal * 2 + (bit - '0');
    }
    return decimal;
}

Unsigned& Unsigned::operator=(const std::string &binaire) {
    if (!est_binaire(binaire)) {
        throw std::invalid_argument("Ill-formed string for Unsigned");
    }
    format_binaire = binaire.empty() ? "0" : binaire;
    return *this;
}

Unsigned &Unsigned::operator+=(uint64_t autre) {
    Unsigned temp(autre);  
    *this += temp;         
    return *this;
}

Unsigned& Unsigned::operator/=(const Unsigned& autre) {
    if (autre == Unsigned("0")) {
        throw std::runtime_error("Division by zero");
    }
    *this = *this / autre;
    return *this;
}

std::istream& operator>>(std::istream& is, Unsigned& u) {
    std::string input;
    is >> input;

    if (Unsigned::est_binaire(input)) {
        // Eğer input ikili formatta ise
        u = Unsigned(input);
    } else {
        try {
            uint64_t decimalValue = std::stoull(input);
            u = Unsigned(decimalValue); 
        } catch (const std::invalid_argument&) {
            throw std::invalid_argument("Ill-formed string for Unsigned");
        }
    }

    return is;
}

