/* ---------------------------
 Laboratoire: 1 - Class Carré, Triangle, Rectangle 
 Fichier    : Carre.cpp
 Auteur(s)  : Kevin Cristi et Sébastien Saez
 Date       : 20 février 2017
 
 But        : Le but de ce laboratoire est d'implémenter 4 classes avec de
 *            l'encapsulation      
 
 Remarque(s) : 
 
 Compilateur : g++ (GCC) 6.3.1 20170109
 --------------------------- */
#include "Carre.h"
#include <iostream>
using namespace std;


Carre::Carre()
{
   this->cote = 0.0;
}

Carre::Carre(const double cote)
{
   this->cote = cote;
}

void Carre::setCote(const double cote)
{
   this->cote = cote;
}

double Carre::getSurface() const
{
   return this->cote * this->cote;
}

void Carre::getDetails() const
{
   cout << "Le cote du carre mesure : " << Carre::getCote() << endl;
   cout << "La surface du carre est de :" << Carre::getSurface() << endl;
}

double Carre::getCote() const
{
   return this->cote;
}