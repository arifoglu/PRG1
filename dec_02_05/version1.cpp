// Laboratoire  Laboratoire 24
// Date:        02.12.2024
// Author:      Abdulkadir Arifoglu
// File:        arifoglu_labo22.cpp
// Compiler:    clang version 16.0.0
// Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic
/*
- Exercer l’implantation d’une classe et la programmation d’opérateurs
- Le but de la classe Unsigned est de permettre la manipulation d’entiers non signés de taille arbitraire
- Les données de la classe prendront la forme d’un string codant la valeur entière en binaire, chaque caractère de la chaîne stockant 1 bit
- Prévoir un constructeur à partir d’un string donnant directement le nombre en binaire et un constructeur à partir d’un uint64_t
- Programmer les opérateurs de comparaison
- Programmer les opérateurs += et-= en travaillant bit à bit avec une retenue, comme vu à l’école primaire (avec un traitement très sommaire d’une opération devant générer une valeur négative)
- Programmer de façon canonique les opérateurs d’addition et de soustraction
- Programmer l’opérateur *= (et le * de manière canonique) en pensant à utiliser les opérateurs d’addition en décalant des bits
*/

#include <iostream>
#include <cstdlib>
#include <bitset>
#include <compare>
using namespace std;

class Unsigned {
    //le nombre en binaire
    private :
        string format_binaire;
    
    public  :

        //constructor pour string
        Unsigned(const string & binaire) : format_binaire(binaire) {}

        //constructor pour uint64_t 
        Unsigned(uint64_t nombre){
            //convertir type uint64_t en string binaire de 64 bits
            format_binaire = bitset<64>(nombre).to_string();
            //Pour supprimer les zéros inutiles
            format_binaire.erase(0,format_binaire.find_first_not_of('0'));
            //si tous les bits 0 
            if(format_binaire.empty()){
                format_binaire = "0";
            }
        }
        
        //operator <<
        friend ostream& operator<<(ostream &out,const Unsigned &u){
            //convertir le nombre binaire eb base 10
            unsigned long long decimal =0;
            for (size_t i = 0; i < u.format_binaire.size(); ++i) 
            {
                decimal = decimal * 2 + static_cast<unsigned long long>(u.format_binaire[i] - '0');
            }          
            out << decimal;
            return out ;
        }

        //operator +
        Unsigned operator+(const Unsigned & autre) const {
            string resultat = "";
            //variable pour la retenue
            int retenue = 0;
            size_t size1 = format_binaire.size();
            size_t size2 = autre.format_binaire.size();
            size_t maxSize = max(size1,size2);

            //Addition bit à bit de droite à gauche
            for(size_t i = 0 ; i < maxSize ; ++i){
                int bit1 = (i < size1) ? format_binaire[size1 - 1 - i] - '0' : 0 ;
                int bit2 = (i < size2) ? autre.format_binaire[size2 - 1 - i] - '0' : 0 ;
                
                int somme = bit1 + bit2 + retenue;
                retenue = somme / 2;
                resultat = char('0' + (somme % 2)) + resultat;
            }
            if(retenue){
                resultat = '1' + resultat;
            }
            if(resultat.empty()){
                resultat = "0";
            }

            return Unsigned(resultat);
        }
        
        //operator -
        Unsigned operator-(const Unsigned & autre) const {
            string resultat = "";
            //Variable pour l’emprunt
            int emprunt = 0;
            size_t size1 = format_binaire.size();
            size_t size2 = autre.format_binaire.size();
            size_t maxSize = max(size1,size2);

            //Addition bit à bit de droite à gauche
            for(size_t i = 0 ; i < maxSize ; ++i){
                int bit1 = (i < size1) ? format_binaire[size1 - 1 - i] - '0' : 0 ;
                int bit2 = (i < size2) ? autre.format_binaire[size2 - 1 - i] - '0' : 0 ;
                
                int difference = bit1 - bit2 - emprunt;

                if(difference < 0 ){
                    difference += 2;
                    emprunt = 1;
                }else{
                    emprunt = 0;
                }
                resultat = char('0' + difference) + resultat;
            }
            return Unsigned(resultat);
        }

        //operator *
        Unsigned operator*(const Unsigned & autre) const {
            // Résultat initialisé à zéro
            Unsigned resultat("0");
            // Multiplicande : le premier nombre (this)
            Unsigned multiplicand = *this;
            // Multiplicateur : le deuxième nombre (autre)
            Unsigned multiplier = autre;
            // Taille du multiplicateur en bits
            size_t size = multiplier.format_binaire.size();

            // Parcours des bits du multiplicateur, de droite à gauche
            for (size_t i = 0; i < size; ++i) 
            {
                // Si le bit actuel du multiplicateur est '1'
                if (multiplier.format_binaire[size - 1 - i] == '1') 
                {
                    // Création d'un multiplicande décalé 
                    Unsigned multiplicand_decale = multiplicand;
                    for (size_t j = 0; j < i; ++j) 
                    {
                        multiplicand_decale.format_binaire += '0';  
                    }
                    // Ajout du multiplicande décalé au résultat
                    resultat += multiplicand_decale;  
                }
            }
            return resultat;
        }

        //operator /
        Unsigned operator/(const Unsigned & autre) const {
            //Le quotient commence à 0
            Unsigned quotient("0");
            //Le reste initial est le nombre à diviser
            Unsigned reste = *this;
            //Le diviseur est le second nombre
            Unsigned diviseur = autre;
            
            size_t taille = reste.format_binaire.size();
            size_t taille_diviseur = diviseur.format_binaire.size();

            //Division bit par bit
            for (size_t i = 0; i < taille - taille_diviseur + 1; ++i) {
                // Décalage à droite du reste
                reste.format_binaire += '0';  
                // Si le reste est plus grand ou égal au diviseur, on effectue la division
                if (reste >= diviseur) 
                {
                    // On ajoute 1 au quotient
                    quotient.format_binaire += '1';
                    // Soustraction du diviseur du reste  
                    reste = reste - diviseur;  
                } 
                else 
                {
                    // Sinon, on ajoute 0 au quotient
                    quotient.format_binaire += '0';  
                }
            }
             // Suppression des zéros inutiles au début du quotient
            quotient.format_binaire.erase(0, quotient.format_binaire.find_first_not_of('0'));

            if (quotient.format_binaire.empty())
            {
                quotient.format_binaire = "0";
            }

            // On retourne le quotient
            return quotient;  
        }

        //operator %
        Unsigned operator%(const Unsigned &autre) const {
            // Le reste commence par le nombre à diviser
            Unsigned reste = *this;  
            // Le diviseur est le second nombre
            Unsigned diviseur = autre;  

            size_t taille = reste.format_binaire.size();
            size_t taille_diviseur = diviseur.format_binaire.size();

            // Division pour obtenir le reste
            for (size_t i = 0; i < taille - taille_diviseur + 1; ++i) 
            {
                // Décalage à droite du reste
                reste.format_binaire += '0';  

                if (reste >= diviseur) 
                {
                    // Soustraction du diviseur du reste
                    reste = reste - diviseur;  
                }
            }

            // Suppression des zéros inutiles au début du reste
            reste.format_binaire.erase(0, reste.format_binaire.find_first_not_of('0'));

            if (reste.format_binaire.empty()) 
            {
                reste.format_binaire = "0";
            }

            // On retourne le reste
            return reste;  
        }

        //operator +=
        Unsigned& operator+=(const Unsigned & autre){
            *this = *this + autre;
            return *this;
        }
        //operator -=
        Unsigned& operator-=(const Unsigned & autre){
            *this = *this - autre;
            return *this;
        }

        //operator *
        Unsigned& operator*=(const Unsigned& autre){
            *this = *this * autre;
            return *this;
        }

        //comparaison ==
        bool operator==(const Unsigned & autre) const {
            return format_binaire == autre.format_binaire;
        }
        //comparaison !=
        bool operator!=(const Unsigned & autre) const {
            return format_binaire != autre.format_binaire;
        }
        //comparaison <
        bool operator<(const Unsigned & autre) const {
            return format_binaire < autre.format_binaire;
        }
        //comparaison >
        bool operator>(const Unsigned & autre){
            return format_binaire > autre.format_binaire;
        }
        //comparaison <=
        bool operator<=(const Unsigned & autre){
            return format_binaire <= autre.format_binaire;
        }
        //comparaison >=
        bool operator>=(const Unsigned & autre){
            return format_binaire >= autre.format_binaire;
        }

        strong_ordering operator<=>(const Unsigned& autre)const {
            if (format_binaire.size() < autre.format_binaire.size()) return  strong_ordering::less;
            if (format_binaire.size() > autre.format_binaire.size()) return strong_ordering::greater;
            if (format_binaire < autre.format_binaire) return  strong_ordering::less;
            if (format_binaire > autre.format_binaire) return strong_ordering::greater;
            return strong_ordering::equal;
        }

        //Fibonacci
        Unsigned fibonacci(unsigned long long n) const {
            unsigned long long a = 0, b = 1;
            if (n == 0) return Unsigned("0");
            if (n == 1) return Unsigned("1");

            unsigned long long result = 0;
            for (unsigned long long i = 2; i <= n; ++i) {
                result = a + b;
                a = b;
                b = result;
            }

            return Unsigned(to_string(result));  
        }    
    
        
};

int main() {
    //un nombre en string 
    Unsigned nombre1("1010");
    //uint64_t 
    Unsigned nombre2(5);
    //un nombre en string
    Unsigned nombre3("1101");

    /*
    //Comparaisons == != < > <= >=
    // Testing ==
    //if(nombre1 == nombre3){
    //    cout << "nombre1 et nombre3 sont egaux.\n";
    //}else{
    //    cout << "nombre1 et nombre3 ne sont pas egaux.\n";
    //}
    //if(nombre2 == nombre3){
    //    cout << "nombre2 et nombre3 sont egaux.\n";
    //}else{
    //    cout << "nombre2 et nombre3 ne sont pas egaux.\n";
    //}
    
    // Testing !=
    //if(nombre1 != nombre3){
    //    cout << "nombre1 et nombre3 ne sont pas egaux.\n";
    //}else{
    //    cout << "nombre1 et nombre3 sont egaux.\n";
    //}
    //if(nombre2 != nombre3){
    //    cout << "nombre2 et nombre3 ne sont pas egaux.\n";
    //}else{
    //    cout << "nombre2 et nombre3 sont egaux.\n";
    //}

    // Testing <
    //if(nombre1 < nombre3){
    //    cout << "nombre1 est plus petit que nombre3.\n";
    //}else{
    //    cout << "nombre1 n'est pas plus petit que nombre3.\n";
    //}
    //if(nombre2 < nombre3){
    //    cout << "nombre2 est plus petit que  nombre3.\n";
    //}else{
    //    cout << "nombre2 n'est pas plus petit que nombre3.\n";
    //}

    // Testing >
    //if(nombre1 > nombre3){
    //    cout << "nombre1 est plus grand que nombre3.\n";
    //}else{
    //    cout << "nombre1 n'est pas plus grand que nombre3.\n";
    //}
    //if(nombre2 > nombre3){
    //    cout << "nombre2 est plus grand que nombre3.\n";
    //}else{
    //    cout << "nombre2 n'est pas plus grand que nombre3.\n";
    //}
   
    // Testing <=
    //if (nombre1 <= nombre3) {
    //    cout << "nombre1 est plus petit ou égal à nombre3.\n";
    //} else {
    //    cout << "nombre1 n'est pas plus petit ou égal à nombre3.\n";
    //}
    //if (nombre2 <= nombre3) {
    //    cout << "nombre2 est plus petit ou égal à nombre3.\n";
    //} else {
    //    cout << "nombre2 n'est pas plus petit ou égal à nombre3.\n";
    //}

    // Testing >=
    //if (nombre1 >= nombre3) {
    //    cout << "nombre1 est plus grand ou égal à nombre3.\n";
    //} else {
    //    cout << "nombre1 n'est pas plus grand ou égal à nombre3.\n";
    //}
    //if (nombre2 >= nombre3) {
    //    cout << "nombre2 est plus grand ou égal à nombre3.\n";
    //} else {
    //    cout << "nombre2 n'est pas plus grand ou égal à nombre3.\n";
    //}
    
    //Operateurs + - += -=
    // Testing +
    //Unsigned resultat = nombre1 + nombre2;
    //resultat.affiche();
    
    // Testing +=
    //nombre1 += nombre2 ;
    //nombre1.affiche();
    
    // Testing -
    //Unsigned resultat = nombre2 - nombre1;
    //resultat.affiche();
    
    // Testing -=
    //nombre2 -= nombre1 ;
    //nombre2.affiche();
    
    // Testing *
    //Unsigned resultat = nombre1 * nombre3;
    //resultat.affiche();
    
    // Testing *=
    //nombre1 *= nombre3;
    //nombre1.affiche();

    // Testing /
    //Unsigned resultat = nombre1 / nombre3;
    //resultat.affiche();

    // Testing %
    //Unsigned resultat = nombre3 % nombre1;
    //resultat.affiche();

    // Testing <<
    //cout << "Nombre1 en base 10: " << nombre1 << endl;
    //cout << "Nombre2 en base 10: " << nombre2 << endl;
    //cout << "Nombre3 en base 10: " << nombre3 << endl;

    // Tester Fibonacci
    // Unsigned fibonacciResult = nombre2.fibonacci(5); 
    // cout << "Fibonacci   : " << fibonacciResult << endl;
    */

    //Testing <=>
    cout << "nombre1 == nombre3: " << (nombre1 == nombre3) << endl;
    cout << "nombre1 != nombre3: " << (nombre1 != nombre3) << endl;
    cout << "nombre1  < nombre3: " << (nombre1 < nombre3) << endl;
    cout << "nombre1  > nombre3: " << (nombre1 > nombre3) << endl;
    cout << "nombre1 <= nombre3: " << (nombre1 <= nombre3) << endl;
    cout << "nombre1 >= nombre3: " << (nombre1 >= nombre3) << endl;

    return EXIT_SUCCESS;
}

