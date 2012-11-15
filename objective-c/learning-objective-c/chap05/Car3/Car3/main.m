//
//  main.m
//  Car3
//
//  Created by whqcnn on 11/15/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Tire : NSObject

@end// Tire

@implementation Tire

-(NSString *) description
{
    return  (@"我是一个轮胎");
}//description

@end//Tire
//==================================

@interface Engine : NSObject

@end//Engine

@implementation Engine

-(NSString *) description
{
    return (@"我是一个发动机");
}//description

@end//Engine
//==================================

@interface Slant6 : Engine

@end//Slant6

@implementation Slant6

-(NSString *) description
{
    return (@"我是一台加满油的Slant6发动机!!!");
}//description

@end//Slant6
//===================================

@interface FourTire : Tire

@end//FourTire

@implementation FourTire

-(NSString *) description
{
    return (@"我是跑的最快的轮胎!!!");
}//description

@end//FourTire
//===================================

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

-(void) setEngine: (Engine *) newEngine
{
    engine = newEngine;
}//setEngine

-(Tire *) tireAtIndex: (int) index
{
    if (index < 0 || index > 3)
    {
        NSLog(@"bad index (%d) in tireAtIndex:", index);
        exit(1);
    }
    return (tires[index]);
}//tireAtIndex

-(void) setTire: (Tire *) tire atIndex: (int) index
{
    if (index < 0 || index > 3)
    {
        NSLog(@"bad index (%d) in tireAtIndex:", index);
        exit(1);
    }
    tires[index] = tire;
}//setTire:atIndex

-(void) print
{
    NSLog(@"%@", engine);
    
    NSLog(@"%@", tires[0]);
    NSLog(@"%@", tires[1]);
    NSLog(@"%@", tires[2]);
    NSLog(@"%@", tires[3]);
}

@end//Car
//=====================================
int main(int argc, const char * argv[])
{

    Car *car = [Car new];
    
    int i;
    for (i = 0; i < 4; i++) {
        Tire *tire = [FourTire new];
        
        [car setTire: tire atIndex: i];
    }
    
    Engine *engine = [Slant6 new];
    [car setEngine:engine];
    [car print];
    return 0;
}

