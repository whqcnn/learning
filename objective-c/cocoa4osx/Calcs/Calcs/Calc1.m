//
//  Calc1.m
//  Calcs
//
//  Created by whqcnn on 11/19/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import "Calc1.h"

@implementation Calc1

-(id)init
{
    stringDisplay = @"0";
    valueFirst = 0;
    return self;
}

- (void)dealloc
{
    [super dealloc];
    [self release];
}

-(void)updateDisplay
{
    [one setStringValue:stringDisplay];
}

-(void)append:(int)number
{
    if (stringDisplay == @"0")
        stringDisplay = @"";
    stringDisplay = [NSString stringWithFormat:@"%@%d", stringDisplay, number];
    [self updateDisplay];
}

-(IBAction)one1:(id)sender
{
    [self append:1];
}

-(IBAction)two1:(id)sender
{
    [self append:2];
}

-(IBAction)three3:(id)sender
{
    [self append:3];
}

-(IBAction)four:(id)sender
{
    [self append:4];
}

-(IBAction)five:(id)sender;
{
    [self append:5];
}


-(IBAction)six:(id)sender;
{
    [self append:6];
}


-(IBAction)seven:(id)sender;
{
    [self append:7];

}


-(IBAction)eight:(id)sender;
{
    [self append:8];
}


-(IBAction)nine:(id)sender;
{
    [self append:9];
}


-(IBAction)zero:(id)sender;
{
    if (stringDisplay != @"0")
        [self append:0];
}


-(IBAction)jia:(id)sender;
{
    op = 1;
    valueFirst = [stringDisplay intValue];
    stringDisplay = @"";
}


-(IBAction)jian:(id)sender;
{
    op = 2;
    valueFirst = [stringDisplay intValue];
    stringDisplay = @"";
}


-(IBAction)cheng:(id)sender;
{
    op = 3;
    valueFirst = [stringDisplay intValue];
    stringDisplay = @"";
}


-(IBAction)chu:(id)sender
{
    op = 4;
    valueFirst = [stringDisplay intValue];
    stringDisplay = @"";
}

-(IBAction)dengyu:(id)sender
{
    int valueSecond = [stringDisplay intValue];
    if (op == 1)
        stringDisplay = [NSString stringWithFormat:@"%d", valueFirst + valueSecond];
    else if (op == 2)
        stringDisplay = [NSString stringWithFormat:@"%d", valueFirst - valueSecond];
    else if (op == 3)
        stringDisplay = [NSString stringWithFormat:@"%d", valueFirst * valueSecond];
    else if (op == 4)
        stringDisplay = [NSString stringWithFormat:@"%d", valueFirst / valueSecond];
    [self updateDisplay];

}


-(IBAction)dian:(id)sender

{
    if (stringDisplay == @"0")
        stringDisplay = @"0.";
    stringDisplay = [NSString stringWithFormat:@"%@%@", stringDisplay, @"."];
    [self updateDisplay];}

-(IBAction)mjia:(id)sender
{
    n = 0;
    m = [stringDisplay intValue];
    n = n + m;
    [two setStringValue:@"M"];
}

-(IBAction)mc:(id)sender
{
    m = n = 0;
    [two setStringValue:@""];
}

-(IBAction)ms:(id)sender
{
    [one setIntValue: n];
}

-(IBAction)mr:(id)sender
{
    n = 0;
    [two setStringValue:@""];
}

-(IBAction)kaishi:(id)sender
{
    stringDisplay = @"0";
    [one setStringValue:@"0"];
}

-(IBAction)zhengfu:(id)sender
{
    int i;
    i = [stringDisplay intValue];
    if (i > 0)
        stringDisplay = [NSString stringWithFormat:@"%@%@", @"-", stringDisplay];

    [self updateDisplay];
}

-(IBAction)brcksqace:(id)sender
{
    
}

-(IBAction)ce:(id)sender
{
    [one setStringValue:@"0"];
}

-(IBAction)zhishu:(id)sender
{
    int i;
    i = [stringDisplay intValue];
    [one setIntValue: 1/i];
}

-(IBAction)gen:(id)sender
{
    int i;
    i = [stringDisplay intValue];
    [one setIntValue:sqrt(i)];
}

-(IBAction)yibie:(id)sender
{
    [one setStringValue:@"0"];
}

@end
