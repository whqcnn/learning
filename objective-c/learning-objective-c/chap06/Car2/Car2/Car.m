//
//  Car.m
//  Car2
//
//  Created by whqcnn on 11/16/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import "Car.h"

@implementation Car

-(id) init
{
    if (self = [super init])
    {
        engine = [Engine new];
        tires[0] = [Tire new];
        tires[1] = [Tire new];
        tires[2] = [Tire new];
        tires[3] = [Tire new];
    }
    return (self);
}

-(void) print
{
    NSLog(@"%@", engine);
    
    NSLog(@"左前方向 %@", tires[0]);
    NSLog(@"右前方向 %@", tires[1]);
    NSLog(@"左后方向 %@", tires[2]);
    NSLog(@"右后方向 %@", tires[3]);
}

@end
