/* ---------------------------
 Laboratoire: 1 - Class Carré, Triangle, Rectangle 
 Fichier    : Cercle.cpp
 Auteur(s)  : Kevin Cristi et Sébastien Saez
 Date       : 20 février 2017
 
 But        : Le but de ce laboratoire est d'implémenter 4 classes avec de
 *            l'encapsulation      
 
 Remarque(s) : 
 
 Compilateur : g++ (GCC) 6.3.1 20170109
 --------------------------- */
#include "Cercle.h"
#include <iostream>
using namespace std;

const double PI = 3.1415;

Cercle::Cercle()
{
   rayon = 0.0;
}

Cercle::Cercle(const double rayon)
{
   this->rayon = rayon;
}

void Cercle::setRayon(const double rayon)
{
   this->rayon = rayon;
}

double Cercle::getSurface() const
{
   return PI * rayon * rayon;
}
   
void Cercle::getDetails() const
{
   cout << "Le rayon mesure :" << Cercle::getRayon() << endl;
   cout << "La surface du cercle est de :" << Cercle::getSurface() << endl;
}

double Cercle::getRayon() const
{
   return this->rayon;
}