/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Triangle.cpp
 * Author: prosouth
 * 
 * Created on 20 February 2017, 17:44
 */

#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle()
{
   this->base = 0.0;
   this->hauteur = 0.0;
}

Triangle::Triangle(double base, double hauteur)
{
   this->base = base;
   this->hauteur = hauteur;
}
 
void Triangle::setBase(double base)
{
   this->base = base;
}

void Triangle::setHauteur(double hauteur)
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