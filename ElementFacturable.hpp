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
#include "ElementFacturable.hpp"


class ElementFacturable{
    
protected:
    std::string type;
public:
    //ElementFacturable();
    
    virtual ~ElementFacturable(){}
    
    virtual float calculerCout()=0;
};

#endif /* ElementFacturable_hpp */
