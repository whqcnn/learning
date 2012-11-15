//
//  main.m
//  Car2
//
//  Created by whqcnn on 11/15/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Tire : NSObject

@end//Tire

@implementation Tire                              //Tire

-(NSString *) description
{
    return (@"我是一个会跑的轮胎！");
}//description

@end//Tire
//=================================

@interface Engine : NSObject

@end//Engine

@implementation Engine                           //Engine

-(NSString *) description
{
    return (@"我是一台加满油的发动机!");
}//description

@end//Engine
//=================================

@interface Car : NSObject
{
    Tire *tires[4];
    Engine *engine;
}

-(Engine *) engine;

-(void) setEngine: (Engine *) newEngine;

-(Tire *) tireAtIndex: (int) index;

-(void) setTire: (Tire *) tire atIndex: (int) index;

-(void) print;

@end//Car

@implementation Car

-(Engine *) engine
{
    return (engine);
}//engine

-(void) setEngine:(Engine *)newEngine                   //Car
{
    engine = newEngine;
}//setEngine

-(void) setTire:(Tire *)tire atIndex:(int)index
{
    if (index < 0 || index > 3)
    {
        NSLog(@"bad index (%d) in setTire:atindex:", index);
        exit(1);
    }
    tires[index] = tire;
}

-(Tire *) tireAtIndex:(int)index
{
    if (index < 0 || index > 3)
    {
        NSLog(@"bad index (%d) in tireAtIndex:", index);
        exit(1);
    }
    return (tires[index]);
}//tireAtIndex

-(void) print
{
    NSLog(@"%@", engine);
    
    NSLog(@"%@", tires[0]);
    NSLog(@"%@", tires[1]);
    NSLog(@"%@", tires[2]);
    NSLog(@"%@", tires[3]);
}//print

@end//Car
//============================


int main(int argc, const char * argv[])
{
    Car *car = [Car new];
    
    Engine *engine = [Engine new];
    [car setEngine:engine];
    int i;
    for (i = 0; i < 4; i++)
    {
        Tire *tire = [Tire new];
        [car setTire:tire atIndex:i];
    }
    [car print];
    
    return 0;
}//main

