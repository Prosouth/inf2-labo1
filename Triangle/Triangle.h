/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Triangle.h
 * Author: prosouth
 *
 * Created on 20 February 2017, 17:44
 */

#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
public:
   Triangle();
   Triangle(double base, double hauteur);
   void setBase(double base);
   void setHauteur(double hauteur);
   double getSurface() const;
   void getDetails() const;
   double getBase() const;
   double getHauteur() const;

private:
   double base;
   double hauteur; 
};

#endif /* TRIANGLE_H */