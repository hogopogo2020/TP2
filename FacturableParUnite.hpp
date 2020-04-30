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
    
public:
    
    FacturableParUnite(std::string type, int nb_element);
    
    float calculerCout();
};



#endif /* FacturableParUnite_hpp */
