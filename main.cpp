/* ---------------------------
 Laboratoire: 1 - Class Carré, Triangle, Rectangle 
 Fichier    : main.cpp
 Auteur(s)  : Kevin Cristi et Sébastien Saez
 Date       : 20 février 2017
 
 But        : Le but de ce laboratoire est d'implémenter 4 classes avec de
 *            l'encapsulation      
 
 Remarque(s) : 
 
 Compilateur : g++ (GCC) 6.3.1 20170109
 --------------------------- */
#include "Rectangle/Rectangle.h"
#include "Carre/Carre.h"
#include "Cercle/Cercle.h"
#include "Triangle/Triangle.h"
#include <cstdlib>
using namespace std;


int main()
{
   // Tests de fonctionnement pour les rectangles
   Rectangle rectangle1; // Création d'un rectangle avec le constructeur par défaut
   rectangle1.getDetails();
   
   
   // Avec l'autre constructeur
   Rectangle rectangle2(10.0,8.0);
   rectangle2.getDetails();

   
   //Tests de fonctionnement pour les carrés
   Carre carre1; // Création d'un carré avec le constructeur par défaut
   carre1.getDetails();

   
   // Avec l'autre constructeur
   Carre carre2(2.0);
   carre2.getDetails();

   
   //Tests de fonctionnement pour les triangles
   Triangle triangle1; // Création d'un triangle avec le constructeur par défaut
   triangle1.getDetails();

   
   // Avec l'autre constructeur
   Triangle triangle2(3.0, 5.0);
   carre2.getDetails();

   
   
   //Tests de fonctionnement pour les cercles
   Cercle cercle1; // Création d'un cercle avec le constructeur par défaut
   cercle1.getDetails();

   
    // Avec l'autre constructeur
   Cercle cercle2(3.0);
   cercle2.getDetails();


   return EXIT_SUCCESS;
}

