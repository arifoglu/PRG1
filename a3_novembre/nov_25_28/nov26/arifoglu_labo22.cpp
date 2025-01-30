// Laboratoire  Laboratoire 22
// Date:        26.11.2024
// Author:      Abdulkadir Arifoglu
// File:        arifoglu_labo22.cpp
// Compiler:    clang version 16.0.0
// Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic
/*
- Le buts: Exercer la généricité et les surcharges
- Écrire une fonction (avec surcharges) qui permet de compter_plus_petit combien d’éléments plus petits qu’une valeur donnée se trouve entre deux bornes d’un tableau natif ou d’un conteneur
- La fonction aura donc 3 paramètres : start, end précisant les bornes sous la forme de pointeurs ou d’itérateurs et val, la valeur limite
- Tester la fonction : 
    int t[] = {0,1,2,0,3,0};
    array<string,4> a = {"Paul", "Jacques", "Paul", "Pie"};
    vector<HeureMinute> ={{7, 45}, {9, 20}, {12, 0}, {21, 30}}
    const char* c[] = {"Paul", "Jacques", "Paul", "Pie"};
*/

#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
#include <string>
#include <iterator>
#include <cstring>
using namespace std;

template <typename T>
int compter_plus_petit(T start, T end, const typename std::iterator_traits<T>::value_type& val){
    int cnt = 0;
    //entre le debut et la fin
    for(T it = start; it != end;++it)
    {   
       if constexpr (is_same<typename std::iterator_traits<T>::value_type, const char*>::value) 
       {
            // Si T est const char* ,strcmp utilise
            if (strcmp(*it, val) < 0) 
            {
                ++cnt;
            }
        } 
        else 
        {
            //si l'élément est inférieur à val
            if (*it < val) 
            {
                ++cnt;
            }
        }
    }
    return cnt;
}

template <typename T>
struct Time {
    T heure;
    T minute;
    //comparer minute et heure
    bool operator<(const Time<T>& other) const {
        return heure < other.heure || (heure == other.heure && minute < other.minute);
    }
};

int main() {
    // tester tableau natif
    int t[] = {0,1,2,0,3,0};
    size_t n = sizeof(t) / sizeof(t[0]);
    cout << compter_plus_petit(t, t+n , 2) << " éléments plus petits. " << endl;

    // tester array
    array<string, 4> a = {"Paul", "Jacques", "Paul", "Pie"};
    cout << compter_plus_petit(a.begin(), a.end(), string("Paul")) << " éléments plus petits. " << endl;

    // tester vector  
    vector<Time<int>> heures = {{7, 45}, {9, 20}, {12, 0}, {21, 30}};
    Time<int> limit = {9, 0};
    cout << compter_plus_petit(heures.begin(), heures.end(), limit) << " éléments plus petits." << endl;
    
    // tester const char
    const char* c[] = {"Paul", "Jacques", "Paul", "Pie"};
    cout << compter_plus_petit(c, c + 4, "Paul") << " éléments plus petits." << endl;

    return EXIT_SUCCESS;
}

