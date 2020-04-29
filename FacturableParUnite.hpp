//
//  FacturableParUnite.hpp
//  TP2_Christopher_Lajoie_Asselin
//
//  Created by Christopher Lajoie on 2020-04-28.
//  Copyright © 2020 Christopher Lajoie. All rights reserved.
//

#ifndef __FacturableParUnite_hpp__
#define __FacturableParUnite_hpp__

#include <stdio.h>
#include <string>
#include "ElementFacturable.hpp"

class FacturableParUnite : public ElementFacturable{
    
protected:
    float tarif=0;
    int importance=0;
    int nb_element=0;
    std::string type;
    
public:
    
    FacturableParUnite(std::string type, int nb_element);
    
    float getTarif(){
        return tarif;
    }
    
    void setTarif(float tarif){
        this->tarif=tarif;
    }
    
    int getImportance(){
        return nb_element;
    }
    
    void setImportance(int importance){
        this->importance=importance;
    }
    
    int getNb_Element(){
        return nb_element;
    }
    
    void setNbElement(int nb_element){
        this->nb_element=nb_element;
    }
    
    std::string getType(){
       return type;
       }
       
    void setType(std::string type){
           this->type=type;
       }
    
    float calculerCout();
};



#endif /* FacturableParUnite_hpp */
