#ifndef RATIONNEL_HPP
#define RATIONNEL_HPP

#include <iostream>
#include <numeric>

struct Rationnel{int numerateur;int denominateur;};

Rationnel validateRationnel(const Rationnel& r);
Rationnel simplifie(Rationnel r);

Rationnel operator+(const Rationnel& a,const Rationnel& b);
Rationnel operator-(const Rationnel& a,const Rationnel& b);
Rationnel operator*(const Rationnel& a,const Rationnel& b);
Rationnel operator/(const Rationnel& a,const Rationnel& b);

bool operator==(const Rationnel& a,const Rationnel& b);
bool operator!=(const Rationnel& a,const Rationnel& b);
bool operator>(const Rationnel& a,const Rationnel& b);
bool operator>=(const Rationnel& a,const Rationnel& b);
bool operator<(const Rationnel& a,const Rationnel& b);
bool operator<=(const Rationnel& a,const Rationnel& b);



void print_Rationnel(const Rationnel& r);

#endif