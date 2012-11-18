//
//  main.m
//  Dictionary1
//
//  Created by whqcnn on 11/17/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Tire : NSObject
@end // Tire


@implementation Tire

- (NSString *) description
{
    return (@"I am a tire. I last a while");
} // description

@end // Tire


// --------------------------------------------------


int main(int argc, const char * argv[])
{
    Tire *t1 = [Tire new];
    Tire *t2 = [Tire new];
    Tire *t3 = [Tire new];
    Tire *t4 = [Tire new];
    
    NSDictionary *tires;
    tires = [NSDictionary dictionaryWithObjectsAndKeys:t1,  @"front-left", t2, @"front-right", t3, @"back-left", t4, @"back-right", nil];
    NSLog(@"%@", tires);
    
    NSMutableDictionary *tires1;
    tires1 = [NSMutableDictionary dictionary];
    [tires1 setObject: t1 forKey: @"front-left"];
    [tires1 setObject: t2 forKey: @"front-right"];
    [tires1 setObject: t3 forKey: @"back-left" ];
    [tires1 setObject: t4 forKey: @"back-right"];
    [tires1 removeObjectForKey: @"back-right"];
    NSLog(@"%@", tires);
    return 0;
}

