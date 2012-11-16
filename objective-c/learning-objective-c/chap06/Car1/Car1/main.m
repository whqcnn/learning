//
//  main.m
//  Car1
//
//  Created by whqcnn on 11/16/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Engine.h"
#import "Tire.h"
#import "Car.h"
#import "Slant6.h"
#import "FourTires.h"


int main(int argc, const char * argv[])
{

    Car *car = [Car new];
    int i;
    for (i = 0; i < 4; i++) {
        Tire *tire = [FourTires new];
        [car setTire:tire atIndex:i];
    }
    Engine *engine = [Engine new];
    [car setEngine:engine];
    
    [car print];
    return 0;
}

