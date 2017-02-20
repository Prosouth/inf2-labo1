/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Carre.h
 * Author: prosouth
 *
 * Created on 20 February 2017, 17:45
 */

#ifndef CARRE_H
#define CARRE_H

class Carre {
public:
   Carre();
   Carre(double cote);
   void setCote(double cote);
   double getSurface() const;
   void getDetails() const;
   double getCote() const;

private:
   double cote;
};

#endif /* CARRE_H */

