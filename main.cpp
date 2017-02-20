/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: prosouth
 *
 * Created on 20 February 2017, 17:11
 */
#include "Rectangle/Rectangle.h"
#include "Carre/Carre.h"
#include "Cercle/Cercle.h"
#include "Triangle/Triangle.h"
#include <cstdlib>
#include <iostream>
using namespace std;


int main()
{
   
   // Tests de fonctionnement pour les rectangles
   Rectangle rectangle1;
   cout << rect.getSurface();
   
   Rectangle rectangle2(10.0,8.0);
   
   //Tests de fonctionnement pour les carrés
   Carre carre1;
  
   Carre carre2(2.0);
   
   //Tests de fonctionnement pour les triangles
   Triangle triangle1;
   
   Triangle triangle2(3.0, 5.0);
   
   
   //Tests de fonctionnement pour les cercles
   Cercle cercle1;
   
   Cercle cercle2(3.0);

   return EXIT_SUCCESS;
}

