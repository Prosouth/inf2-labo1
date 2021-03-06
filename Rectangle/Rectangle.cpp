/* ---------------------------
 Laboratoire: 1 - Class Carré, Triangle, Rectangle 
 Fichier    : Rectangle.cpp
 Auteur(s)  : Kevin Cristi et Sébastien Saez
 Date       : 20 février 2017
 
 But        : Le but de ce laboratoire est d'implémenter 4 classes avec de
 *            l'encapsulation      
 
 Remarque(s) : 
 
 Compilateur : g++ (GCC) 6.3.1 20170109
 --------------------------- */
#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle()
: largeur(0.0), longueur(0.0)
{
}

Rectangle::Rectangle(const double largeur, const double longueur)
: largeur(largeur), longueur(longueur)
{
}

void Rectangle::setLargeur(const double largeur)
{
   if(largeur > 0)
   {
      this->largeur = largeur;
   }
}

void Rectangle::setLongueur(const double longueur)
{
   if(longueur > 0)
   {
      this->longueur = longueur;
   }
}

double Rectangle::getSurface() const
{
   return this->longueur * this->largeur;
}

double Rectangle::getLargeur() const
{
   return this->largeur;
}

double Rectangle::getLongueur() const
{
   return this->longueur;
}

void Rectangle::getDetails()
{
   cout << "La largeur du rectangle est de : " << Rectangle::getLargeur() << endl;
   cout << "La longueur du rectangle est de :" << Rectangle::getLongueur() << endl;
   cout << "La surface du rectangle est de :" << Rectangle::getSurface() << endl;
}