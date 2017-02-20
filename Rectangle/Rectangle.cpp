/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rectangle.cpp
 * Author: prosouth
 * 
 * Created on 20 February 2017, 17:12
 */

#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle()
{
   this->largeur = 0.0;
   this->longueur = 0.0;
}

Rectangle::Rectangle(double largeur, double longueur)
{
   this->largeur = largeur;
   this->longueur = longueur;
}

void Rectangle::setLargeur(double largeur)
{
   this->largeur = largeur;
}

void Rectangle::setLongueur(double longueur)
{
   this->longueur = longueur;
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