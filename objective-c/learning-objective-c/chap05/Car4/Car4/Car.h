//
//  Car.h
//  Car4
//
//  Created by whqcnn on 11/16/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Tire.h"
#import "Engine.h"
#import "FourTire.h"
#import "Slant6.h"

@interface Car : NSObject
{
    Tire *tires[4];
    Engine *engine;
}

-(void) setTires: (Tire *) tire atIndex: (int) index;
-(Tire *) tiresAtIndex: (int) index;

-(void) setEngine: (Engine *) engine;
-(Engine *) engine;

-(void) print;

@end//Car
