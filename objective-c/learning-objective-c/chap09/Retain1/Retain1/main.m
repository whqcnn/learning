//
//  main.m
//  Retain1
//
//  Created by whqcnn on 11/18/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RetainTracker : NSObject
@end // RetainTracker

@implementation RetainTracker

- (id) init
{
	if (self = [super init]) {
		NSLog (@"init: Retain count of %ld.",
			   [self retainCount]);
	}
	
	return (self);
	
} // init


- (void) dealloc
{
	NSLog (@"dealloc called. Bye Bye.");
	[super dealloc];
	
} // dealloc

@end // RetainTracker



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

