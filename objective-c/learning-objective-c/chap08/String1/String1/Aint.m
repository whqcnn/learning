//
//  Aint.m
//  String1
//
//  Created by whqcnn on 11/17/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import "Aint.h"

@implementation Aint

-(void) setAge:(int)newAge
{
    age = newAge;
}

-(int) getAge
{
    return age;
}

-(void) print
{
    NSLog(@"%d", age);
}

@end
