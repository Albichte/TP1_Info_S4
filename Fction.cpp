//
//  Fction.cpp
//  TP1_graphe
//
//  Created by ANCELLIN on 06/03/2018.
//  Copyright © 2018 ANCELLIN. All rights reserved.
//

#include "Fction.hpp"
#include <iostream>
#include <fstream>

void Graphe::implementation(string nom_fich)
{
    ifstream info_graphe(nom_fich.c_str(),ios::in);
    string variable_temp;
    getline(info_graphe, variable_temp);
    
    
}
