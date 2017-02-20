/* ---------------------------
 Laboratoire: 1 - Class Carré, Triangle, Rectangle 
 Fichier    : Cercle.h
 Auteur(s)  : Kevin Cristi et Sébastien Saez
 Date       : 20 février 2017
 
 But        : Le but de ce laboratoire est d'implémenter 4 classes avec de
 *            l'encapsulation      
 
 Remarque(s) : 
 
 Compilateur : g++ (GCC) 6.3.1 20170109
 --------------------------- */
#ifndef CERCLE_H
#define CERCLE_H

class Cercle {
public:
   Cercle();
   Cercle(const double rayon);
   void setRayon(const double rayon);
   double getSurface() const;
   void getDetails() const;
   double getRayon() const;

private:
   double rayon;
};

#endif /* CERCLE_H */

