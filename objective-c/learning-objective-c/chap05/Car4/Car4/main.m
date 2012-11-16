//
//  main.m
//  Car4
//
//  Created by whqcnn on 11/16/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Car.h"
int main(int argc, const char * argv[])
{
    Car *car = [Car new];
    
    int i;
    for (i = 0; i < 4; i++)
    {
        Tire *tire = [FourTire new];
        [car setTires:tire atIndex:i];
    }
    
    Engine *engine = [Slant6 new];
    [car setEngine:engine];
    [car print];
    return 0;
}

