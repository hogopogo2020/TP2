//
//  FacturableParUnite.cpp
//  TP2_Christopher_Lajoie_Asselin
//
//  Created by Christopher Lajoie on 2020-04-28.
//  Copyright © 2020 Christopher Lajoie. All rights reserved.
//

#include "FacturableParUnite.hpp"

FacturableParUnite::FacturableParUnite(std::string type, int nb_element){
    this->type=type;
    this->nb_element=nb_element;
    if (type=="NUITEE"){
        this->tarif=100*nb_element;
        this->importance=1;
    }
    else if(type=="REPAS"){
        this->tarif=20*nb_element;
        this->importance=2;
    }
}

float FacturableParUnite::calculerCout(){
    float cout_total=(tarif*nb_element*0.08)+(tarif*nb_element*0.05)+tarif;
    return cout_total;
}
