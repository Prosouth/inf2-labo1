/* ---------------------------
 Laboratoire: 1 - Class Carré, Triangle, Rectangle 
 Fichier    : Carre.h
 Auteur(s)  : Kevin Cristi et Sébastien Saez
 Date       : 20 février 2017
 
 But        : Le but de ce laboratoire est d'implémenter 4 classes avec de
 *            l'encapsulation      
 
 Remarque(s) : 
 
 Compilateur : g++ (GCC) 6.3.1 20170109
 --------------------------- */
#ifndef CARRE_H
#define CARRE_H

class Carre {
public:
   Carre();
   Carre(const double cote);
   void setCote(const double cote);
   double getSurface() const;
   void getDetails() const;
   double getCote() const;

private:
   double cote;
};

#endif /* CARRE_H */

