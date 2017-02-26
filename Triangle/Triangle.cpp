/* ---------------------------
 Laboratoire: 1 - Class Carré, Triangle, Rectangle 
 Fichier    : Triangle.cpp
 Auteur(s)  : Kevin Cristi et Sébastien Saez
 Date       : 20 février 2017
 
 But        : Le but de ce laboratoire est d'implémenter 4 classes avec de
 *            l'encapsulation      
 
 Remarque(s) : 
 
 Compilateur : g++ (GCC) 6.3.1 20170109
 --------------------------- */
#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle()
{
   this->base = 0.0;
   this->hauteur = 0.0;
}

Triangle::Triangle(const double base, const double hauteur)
: base(base), hauteur(hauteur)
{
}
 
void Triangle::setBase(const double base)
{
   this->base = base;
}

void Triangle::setHauteur(const double hauteur)
{
   this->hauteur = hauteur;
}

double Triangle::getSurface() const
{
   return (this->base * this->hauteur)/ 2.0;
}

void Triangle::getDetails() const
{
   cout << "La base du triangle mesure :" << Triangle::getBase() << endl;
   cout << "La hauteur du triangle mesure :" << Triangle::getHauteur() << endl;
   cout << "La surface du triangle est de :" << Triangle::getSurface() << endl;
}

double Triangle::getBase() const
{
   return this->base;
}

double Triangle::getHauteur() const
{
   return this->hauteur;
}