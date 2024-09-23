//abdulkadir arifoglu - 23.09.2024 - Laboratoire 3
// deux longeurs additionner(km-metre-centimetre-milimetre)
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    // des constantes pour les conversion d'unités
    const long long mm_per_cm = 10;     // 1 cm = 10 mm 
    const long long cm_per_metre = 100; // 1 m  = 100 cm
    const long long metre_per_km = 1000;// 1km  = 1000 m
    
    // déterminer les variables et prendre les des utilisateurs
    int km1,km2,m1,m2,cm1,cm2,mm1,mm2;

    cout << "1.longeurs (laissez une espace entre des longeurs) (km - metre - centimetre - milimetre) : ";
    cin >> km1 >> m1 >> cm1 >> mm1;
    cout << "2.longeurs (laissez une espace entre des longeurs) (km - metre - centimetre - milimetre) : ";
    cin >> km2 >> m2 >> cm2 >> mm2;

    // Calculation

    // convertir toutes les unités en mm 
    long long total_mm1 = (((((km1 * metre_per_km) + m1) * cm_per_metre) + cm1) * mm_per_cm) + mm1;
    long long total_mm2 = (((((km2 * metre_per_km) + m2) * cm_per_metre) + cm2) * mm_per_cm) + mm2;
    
    // total mm 
    long long total_mm = total_mm1 + total_mm2;
    
    // Convertir du total mm respectivement => km - metre - cm - mm
    // pour trouver km il faut diviser total_mm en parametres
    // pour trouver mm il faut faire operateurs modulus (le reste après division en metre)
    // répéter ce processus vers le bas comme une structure en cascade

    // trouver km
    long long km_result = total_mm / (metre_per_km * cm_per_metre * mm_per_cm);
    total_mm = total_mm % (metre_per_km * cm_per_metre * mm_per_cm);
    
    // trouver m
    long long m_result = total_mm / (cm_per_metre * mm_per_cm);
    total_mm = total_mm % (cm_per_metre * mm_per_cm);

    // trouver cm
    long long cm_result = total_mm / mm_per_cm;
    total_mm = total_mm % mm_per_cm;

    // affichage
    cout << km1 << "km " << m1 << "m " << cm1 << "cm " << mm1 << "mm " << " + " << km2 << "km " << m2 << "m " << cm2 << "cm " << mm2 << "mm " << " font  : " << km_result << "km "  << m_result << "m " << cm_result << "cm " << total_mm << "mm " << "." <<endl;

    return EXIT_SUCCESS;
}