//
//  Car.m
//  Car1
//
//  Created by whqcnn on 11/16/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import "Car.h"

@implementation Car

-(void) setEngine: (Engine *) newEngine
{
    engine = newEngine;
}

-(Engine *) engine
{
    return engine;
}
-(void) setTire: (Tire *) tire atIndex: (int) index
{
    if (index < 0 || index > 3)
    {
        NSLog(@"bad index (%d) in setTire:atIndex:", index);
        exit(1);
    }
    tires[index] = tire;
}

-(Tire *) tireAtIndex: (int) index
{
    if (index < 0 || index > 3)
    {
        NSLog(@"bad index (%d) in setTire:atIndex:", index);
        exit(1);
    }
    return (tires[index]);
}

-(void) print
{
    NSLog(@"%@", engine);
    NSLog(@"%@", tires[0]);
    NSLog(@"%@", tires[1]);
    NSLog(@"%@", tires[2]);
    NSLog(@"%@", tires[3]);
}

@end
