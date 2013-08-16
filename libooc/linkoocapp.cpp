//
//  linkoocapp.cpp
//  libooc
//
//  Created by Timothy Yeh on 8/16/13.
//  Copyright (c) 2013 Timothy Yeh. All rights reserved.
//

#include "linkooc.h"

class LinkOOCAP {
    
public:
    void setup();
};

void LinkOOCAP::setup(){
    LinkOOC *ooc = new LinkOOC();
    std::string str =  ooc->SendCPP("Hello Objective-C C CPP Objective-CPP");
    printf("%s", str.c_str());
}

std::string Linkooocp(){
    LinkOOC *ooc = new LinkOOC();
    std::string str = ooc->SendCPP("Hello Objective-C/CPP/C");
    return str.c_str();
}