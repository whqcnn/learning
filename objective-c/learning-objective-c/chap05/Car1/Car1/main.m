//
//  main.m
//  Car1
//
//  Created by whqcnn on 11/15/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Tire : NSObject

@end//Tire

//-----------

@implementation Tire

-(NSString *) description
{
    return (@"我是一个轮胎，会跑的!");
}

@end//Tire

//=====================================

@interface Engine : NSObject

@end//Engine

//-----------

@implementation Engine

-(NSString *) description
{
    return (@"我是一台发动机，加满油的!");
}

@end//Engine

//=====================================

@interface Car : NSObject
{
    Tire *tire[4];
    Engine *engine;
}

-(void) print;

@end//Car

//--------------

@implementation Car

-(id) init
{
    if (self = [super init])
    {
        engine = [Engine new];
        
        tire[0] = [Tire new];
        tire[1] = [Tire new];
        tire[2] = [Tire new];
        tire[3] = [Tire new];
    }
    return (self);
}//init

-(void) print
{
    NSLog(@"%@", engine);
    
    NSLog(@"%@", tire[0]);
    NSLog(@"%@", tire[1]);
    NSLog(@"%@", tire[2]);
    NSLog(@"%@", tire[1]);
}//print

@end//Car

//====================================

int main(int argc, const char * argv[])
{

    Car *car;
    
    car = [Car new];
    
    [car print];

    return 0;
}

