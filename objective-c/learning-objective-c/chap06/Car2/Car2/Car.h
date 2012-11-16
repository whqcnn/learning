//
//  Car.h
//  Car2
//
//  Created by whqcnn on 11/16/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Tire.h"
#import "Engine.h"

@interface Car : NSObject
{
    Tire *tires[4];
    Engine *engine;
}

-(void) print;

@end
