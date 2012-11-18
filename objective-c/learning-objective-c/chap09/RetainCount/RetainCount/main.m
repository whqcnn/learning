//
//  main.m
//  RetainCount
//
//  Created by whqcnn on 11/18/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RetainTracker.h"



int main (int argc, const char * argv[])
{
    RetainTracker *tracker = [RetainTracker new];
    // count: 1
	
    [tracker retain]; // count: 2
    NSLog (@"%ld", [tracker retainCount]);
	
    [tracker retain]; // count: 3
    NSLog (@"%ld", [tracker retainCount]);
	
    [tracker release]; // count: 2
    NSLog (@"%ld", [tracker retainCount]);
	
    [tracker release]; // count: 1
    NSLog (@"%ld", [tracker retainCount]);
	
    [tracker retain]; // count 2
    NSLog (@"%ld", [tracker retainCount]);
	
    [tracker release]; // count 1
    NSLog (@"%ld", [tracker retainCount]);
	
    [tracker release]; // count: 0, dealloc it
	
    return (0);
} // main
