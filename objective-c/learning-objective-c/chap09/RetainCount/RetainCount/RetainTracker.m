//
//  RetainTracker.m
//  RetainCount
//
//  Created by whqcnn on 11/18/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import "RetainTracker.h"

@implementation RetainTracker

-(id) init
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

@end//RetainTracker
