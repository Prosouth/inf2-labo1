/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rectangle.h
 * Author: prosouth
 *
 * Created on 20 February 2017, 17:12
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle {
public:
   Rectangle();
   Rectangle(double largeur, double longueur);
   void setLargeur(double largeur);
   void setLongueur(double longueur);
   double getSurface() const;
   void getDetails();
   double getLargeur() const;
   double getLongueur() const;


  
private:
   double largeur;
   double longueur;
};

#endif /* RECTANGLE_H */

