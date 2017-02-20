/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Carre.cpp
 * Author: prosouth
 * 
 * Created on 20 February 2017, 17:45
 */

#include "Carre.h"
#include <iostream>

using namespace std;


Carre::Carre()
{
   this->cote = 0.0;
}


Carre::Carre(double cote)
{
   this->cote = cote;
}

void Carre::setCote(double cote)
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