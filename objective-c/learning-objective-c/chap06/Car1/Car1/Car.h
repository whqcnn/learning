//
//  Car.h
//  Car1
//
//  Created by whqcnn on 11/16/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Tire;
@class Engine;

@interface Car : NSObject
{
    Tire *tires[4];
    Engine *engine;
}
-(void) setEngine: (Engine *) newEngine;
-(Engine *) engine;

-(void) setTire: (Tire *) tire atIndex: (int) index;
-(Tire *) tireAtIndex: (int) index;

-(void) print;

@end
