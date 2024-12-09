// Laboratoire  Laboratoire 24
// Date:        02.12.2024
// Author:      Abdulkadir Arifoglu
// File:        arifoglu_labo24.cpp
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
#include "unsigned.hpp"
using namespace std;


int main() {
    //un nombre en string 
    Unsigned nombre1("1010");
    //uint64_t 
    Unsigned nombre2(8);
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
    Unsigned fibonacci_resultat = nombre2.fibonacci(8); 
    cout << "Fibonacci de 8 : " << fibonacci_resultat << endl;
    // Fibonacci(10)
    fibonacci_resultat = nombre2.fibonacci(10); 
    cout << "Fibonacci de 10 : " << fibonacci_resultat << endl;

    */
    
    //Testing <=>
    //cout << "nombre1 == nombre3: " << (nombre1 == nombre3) << endl;
    //cout << "nombre1 != nombre3: " << (nombre1 != nombre3) << endl;
    //cout << "nombre1  < nombre3: " << (nombre1 < nombre3) << endl;
    //cout << "nombre1  > nombre3: " << (nombre1 > nombre3) << endl;
    //cout << "nombre1 <= nombre3: " << (nombre1 <= nombre3) << endl;
    //cout << "nombre1 >= nombre3: " << (nombre1 >= nombre3) << endl;

    return EXIT_SUCCESS;
}

    