#include "transformations.hpp"
#include <iostream>
#include <limits>

void transforme_CH1903_WGS84(double & x,double &y){
    // 1 km = 1000 metre 
    const double metre_par_km = 1000.0;

    // convertir en metre
    double x_en_metre = x * metre_par_km; 
    double y_en_metre = y * metre_par_km;

    // selon la formul λ 
    double lambda = 7.4386372 + (13.13606 * x_en_metre) + (2.19856 * x_en_metre * y_en_metre) + (0.3628 * x_en_metre * (y_en_metre * y_en_metre)) - (0.121 * ( x_en_metre * x_en_metre * x_en_metre));

    // selon la formul ϕ
    double phi = 46.9510811 + (8.9952 * y_en_metre ) - (0.75272 * ( x_en_metre * x_en_metre)) - (0.00702 * ( y_en_metre * y_en_metre)) - (0.1242 * (x_en_metre * x_en_metre) * y_en_metre) - (0.0389 * (y_en_metre * y_en_metre * y_en_metre));
    
    // longtitude en degree
    x   = lambda;
    // lattitude en degree
    y   = phi;
  
}

void sauvegarde(const string & nom_fichier_sortie, double lambda, double phi){
    
    ofstream fichier_sortie(nom_fichier_sortie,ios::out | ios::app);
    
    // verification si le fichier existe 
    if(!fichier_sortie){
        cerr << "Erreur d'ouverture!!!";
        return;
    }

    fichier_sortie << lambda << "," << phi << endl;
    fichier_sortie.close();
    
}



