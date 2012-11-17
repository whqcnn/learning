//
//  main.m
//  String1
//
//  Created by whqcnn on 11/17/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Aint.h"


int main(int argc, const char * argv[])
{

    id a = [Aint new];
    id b = [Aint new];
    
    [a setAge:10];
    [b setAge:90];
    
    [a print];
    [b print];
    NSString *height;
    height = [NSString stringWithFormat:@"Your height is %d feet, %d inches", [a getAge], [b getAge]];
    NSLog(@"%@", height);
    
    return 0;
}

