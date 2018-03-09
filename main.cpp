//
//  main.cpp
//  TP1_graphe
//
//  Created by ANCELLIN on 06/03/2018.
//  Copyright © 2018 ANCELLIN. All rights reserved.
//

#include <iostream>
#include "Fction.hpp"

int main(int argc, const char * argv[])
{
    Graphe *graph_admin;
    cout<< "Veuillez saisir le nom du fichier svp :"<<endl;
    string nom_fich_admin;
    cin>>nom_fich_admin;
    graph_admin->implementation(nom_fich_admin);
    graph_admin->affich_influ();
    
   
    
    
}
