#ifndef TRANSFORMATIONS_HPP
#define TRANSFORMATIONS_HPP

#include <string>
#include <fstream>
using namespace std;

void transforme_CH1903_WGS84(double & x, double & y);
void sauvegarde(const string & nom_fichier_sortie, double lambda, double phi);

#endif