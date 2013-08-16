//
//  libooc.h
//  libooc
//
//  Created by Timothy Yeh on 8/16/13.
//  Copyright (c) 2013 Timothy Yeh. All rights reserved.
//

#import <CoreFoundation/CoreFoundation.h>

@interface LibOOC : NSObject

-(NSString *)Send:(NSString *)message;

@end



//#import "libooc.h"
//@implementation LibOOC
//-(NSString *)Send:(NSString *)message{
//    return @"From Library: %@", message;
//}
//@end