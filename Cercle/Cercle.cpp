/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cercle.cpp
 * Author: prosouth
 * 
 * Created on 20 February 2017, 17:44
 */
#include "Cercle.h"
#include <iostream>
using namespace std;

const double PI = 3.1415;

Cercle::Cercle()
{
   rayon = 0.0;
}

Cercle::Cercle(double rayon)
{
   this->rayon = rayon;
}

void Cercle::setRayon(double rayon)
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