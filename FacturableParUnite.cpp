//
//  FacturableParUnite.cpp
//  TP2_Christopher_Lajoie_Asselin
//
//  Created by Christopher Lajoie on 2020-04-28.
//  Copyright © 2020 Christopher Lajoie. All rights reserved.
//

#include "FacturableParUnite.hpp"
//Constructeur
FacturableParUnite::FacturableParUnite(std::string type, int nb_element){
    this->type=type;
    this->nb_element=nb_element;
    if (type=="NUITEE"){
        this->tarif=100;
        this->importance=1;
    }
    else if(type=="REPAS"){
        this->tarif=20;
        this->importance=2;
    }
}
//Ajout des taxes de 5% et 8% au cout de l'element facturable
float FacturableParUnite::calculerCout(){
    float cout_total=0;
    cout_total=((tarif*0.08)+(tarif*0.05)+tarif)*nb_element;
    return cout_total;
}
