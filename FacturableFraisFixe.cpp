//
//  FacturableFraisFixe.cpp
//  TP2_Christopher_Lajoie_Asselin
//
//  Created by Christopher Lajoie on 2020-04-28.
//  Copyright © 2020 Christopher Lajoie. All rights reserved.
//

#include "FacturableFraisFixe.hpp"

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

 float FacturableFraisFixe::calculerCout(){
    tarif=tarif*nb_element;
    float cout_total=(tarif*0.08)+(tarif*0.07)+tarif;
    return cout_total;
}
