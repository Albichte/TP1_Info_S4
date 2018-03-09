//
//  Fction.hpp
//  TP1_graphe
//
//  Created by ANCELLIN on 06/03/2018.
//  Copyright © 2018 ANCELLIN. All rights reserved.
//

#ifndef Fction_hpp
#define Fction_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace  std;

class Sommet
{
public:
    string nom_sommet;
    Sommet()
    {nom_sommet= "";};
    Sommet(string a)
    {nom_sommet=a;};
    ~Sommet();
};
//class Sommet OK


class Arete
{
public:
    Sommet * sommet_1;
    Sommet * sommet_2;
    string nom_arete;
    Arete(){nom_arete="";};
    Arete(string a){nom_arete=a;};
    ~Arete();
};
// class Arete ok


class Graphe
{
public:
    int ** matrice;
    int ordre;
    vector <Sommet> vect_sommets;
    Graphe();
    ~Graphe(); // doit supprimer les sommets du vecteur
    
    
    void Alloc_mat(int const ordre_graphe)
    {
        matrice= new int * [ordre_graphe];
        for (int i=0; i<=ordre_graphe+1;i++)
        {
            matrice[i]=new int[ordre_graphe];
        }
    };
    void implementation(string nom_fich);
    void affich_influ();
    
};





#endif /* Fction_hpp */







































