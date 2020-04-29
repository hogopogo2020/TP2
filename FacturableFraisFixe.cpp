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
    }
    else if(type=="PISCINE"){
        this->tarif=50;
        this->importance=4;
    }
}

 float FacturableFraisFixe::calculerCout(){
    float cout_total=(tarif*1.08)+(tarif*1.07);
    return cout_total;
}
