/* ---------------------------
 Laboratoire: 1 - Class Carré, Triangle, Rectangle 
 Fichier    : Triangle.h
 Auteur(s)  : Kevin Cristi et Sébastien Saez
 Date       : 20 février 2017
 
 But        : Le but de ce laboratoire est d'implémenter 4 classes avec de
 *            l'encapsulation      
 
 Remarque(s) : 
 
 Compilateur : g++ (GCC) 6.3.1 20170109
 --------------------------- */
#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
public:
   Triangle();
   Triangle(const double base, const double hauteur);
   void setBase(const double base);
   void setHauteur(const double hauteur);
   double getSurface() const;
   void getDetails() const;
   double getBase() const;
   double getHauteur() const;

private:
   double base;
   double hauteur; 
};

#endif /* TRIANGLE_H */