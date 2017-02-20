/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cercle.h
 * Author: prosouth
 *
 * Created on 20 February 2017, 17:44
 */

#ifndef CERCLE_H
#define CERCLE_H

class Cercle {
public:
   Cercle();
   Cercle(double rayon);
   void setRayon(double rayon);
   double getSurface() const;
   void getDetails() const;
   double getRayon() const;

private:
   double rayon;
};

#endif /* CERCLE_H */

