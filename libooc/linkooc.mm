//
//  linkooc.mm
//  libooc
//
//  Created by Timothy Yeh on 8/16/13.
//  Copyright (c) 2013 Timothy Yeh. All rights reserved.
//

#include "linkooc.h"
#import "libooc.h"

@implementation LibOOC

-(NSString*)Send:(NSString *)message{
    return @"From Objective-CPP: %@", message;
}
@end

std::string LinkOOC::SendCPP( const std::string &message){
    LibOOC *ooc = [[LibOOC alloc] init];
    NSString *str = [ooc Send:[NSString stringWithCString:message.c_str() encoding:[NSString defaultCStringEncoding]]];
    return [str UTF8String];
}