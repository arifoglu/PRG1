#ifndef MODIFICATIONS_HPP
#define MODIFICATIONS_HPP

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string replace_all_GPT(string str,const string &from, const string & to );
string replace_all(string str, const string & from, const string & to);
string lire_fichier(const string & nom_fichier);
string modifier_longeur(string str, int k);

#endif