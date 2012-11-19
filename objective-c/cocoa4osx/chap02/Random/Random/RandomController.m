//
//  RandomController.m
//  Random
//
//  Created by whqcnn on 11/18/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import "RandomController.h"

@implementation RandomController

-(IBAction)generate:(id)sender
{
    int generated;
    generated = (int)(random() % 100) + 1;
    
    NSLog(@"generated = %d", generated);
    
    [textField setIntValue:generated];
}

- (void)awakeFromNib
{
    NSDate *now;
    now = [NSDate date];
    [textField setObjectValue:now];
}


-(IBAction)seed:(id)sender
{
    srandom((unsigned)time(NULL));
    [textField setStringValue:@"Generator seeded"];
}

@end
