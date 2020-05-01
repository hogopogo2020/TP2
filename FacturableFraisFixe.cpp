//
//  FacturableFraisFixe.cpp
//  TP2_Christopher_Lajoie_Asselin
//
//  Created by Christopher Lajoie on 2020-04-28.
//  Copyright © 2020 Christopher Lajoie. All rights reserved.
//

#include "FacturableFraisFixe.hpp"
//Constructeur
FacturableFraisFixe::FacturableFraisFixe(std::string type){
    this->type=type;
    if (type=="SPA"){
        this->tarif=75;
        this->importance=3;
        this->nb_element=1;
    }
    else if(type=="PISCINE"){
        this->tarif=50;
        this->importance=4;
        this->nb_element=1;
    }
}
//Ajout des taxes de 7% et 8% au cout de l'element facturable
 float FacturableFraisFixe::calculerCout(){
    float cout_total=0;
    cout_total=(tarif*0.08)+(tarif*0.07)+tarif;
    return cout_total;
}
