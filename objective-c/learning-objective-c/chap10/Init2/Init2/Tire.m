//
//  Tire.m
//  Init2
//
//  Created by whqcnn on 11/23/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import "Tire.h"

@implementation Tire

-(id) init
{
    if (self = [super init])
    {
        pressure = 34.0;
        treadDepth = 20.0;
    }
    
    return (self);
}// init

-(void) setPressure: (float) p
{
    pressure = p;
}// setPressure
-(float) pressure
{
    return pressure;
}// pressure

-(void) setTreadDepth: (float) td
{
    treadDepth = td;
}// setTreadDepth
-(float) treadDepth
{
    return treadDepth;
}// treadDepth


-(NSString *) description                                       
{
    NSString *desc;
    desc = [NSString stringWithFormat:@"Tire: Pressure: %.1f TreadDepth: %.1f",
            pressure, treadDepth];
    return (desc);
}// description

@end
