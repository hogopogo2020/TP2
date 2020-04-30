//
//  ElementFacturable.hpp
//  TP2_Christopher_Lajoie_Asselin
//
//  Created by Christopher Lajoie on 2020-04-28.
//  Copyright © 2020 Christopher Lajoie. All rights reserved.
//

#ifndef __ElementFacturable_hpp__
#define __ElementFacturable_hpp__

#include <stdio.h>
#include <string>



class ElementFacturable {
    
protected:
    std::string type;
    int importance=0;
    float tarif=0;
    int nb_element=0;
    
public:
    ElementFacturable(){}
    
    virtual ~ElementFacturable(){}
    
    virtual int getImportance(){
        return importance;
    }
    
    virtual void setImportance(int importance){
        this->importance=importance;
    }
    
    virtual std::string getType(){
       return type;
       }
       
    virtual void setType(std::string type){
           this->type=type;
       }
    
    virtual float getTarif(){
        return tarif;
    }
    
    virtual void setTarif(float tarif){
        this->tarif=tarif;
    }
    
    virtual int getNb_Element(){
        return nb_element;
    }
    
    virtual void setNbElement(int nb_element){
        this->nb_element=nb_element;
    }
    
    virtual float calculerCout()=0;
};

#endif /* ElementFacturable_hpp */
