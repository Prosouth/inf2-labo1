/* ---------------------------
 Laboratoire: 1 - Class Carré, Triangle, Rectangle 
 Fichier    : Rectangle.h
 Auteur(s)  : Kevin Cristi et Sébastien Saez
 Date       : 20 février 2017
 
 But        : Le but de ce laboratoire est d'implémenter 4 classes avec de
 *            l'encapsulation      
 
 Remarque(s) : 
 
 Compilateur : g++ (GCC) 6.3.1 20170109
 --------------------------- */
#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle {
public:
   Rectangle();
   Rectangle(const double largeur, const  double longueur);
   void setLargeur(const double largeur);
   void setLongueur(const double longueur);
   double getSurface() const;
   void getDetails();
   double getLargeur() const;
   double getLongueur() const;
  
private:
   double largeur;
   double longueur;
};

#endif /* RECTANGLE_H */

