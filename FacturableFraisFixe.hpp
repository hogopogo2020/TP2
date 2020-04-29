//
//  FacturableFraisFixe.hpp
//  TP2_Christopher_Lajoie_Asselin
//
//  Created by Christopher Lajoie on 2020-04-28.
//  Copyright © 2020 Christopher Lajoie. All rights reserved.
//

#ifndef __FacturableFraisFixe_hpp__
#define __FacturableFraisFixe_hpp__

#include <stdio.h>
#include <string>
#include "ElementFacturable.hpp"

class FacturableFraisFixe : public ElementFacturable{
    
protected:
    float tarif=0;
    int importance=0;
    std::string type;
public:
    
    FacturableFraisFixe(std::string type);
    
    float getTarif(){
        return tarif;
    }
    
    void setTarif(float tarif){
        this->tarif=tarif;
    }
    
    int getImportance(){
        return importance;
    }
    
    void setImportance(int importance){
        this->importance=importance;
    }
    
    std::string getType(){
       return type;
       }
       
    void setType(std::string type){
           this->type=type;
       }
    
    float calculerCout();
};
#endif /* FacturableFraisFixe_hpp */
