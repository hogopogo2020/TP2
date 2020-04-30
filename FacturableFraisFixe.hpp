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

public:
    
    FacturableFraisFixe(std::string type);
    

    
    float calculerCout();
};
#endif /* FacturableFraisFixe_hpp */
