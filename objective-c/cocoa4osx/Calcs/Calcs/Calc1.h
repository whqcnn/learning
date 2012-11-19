//
//  Calc1.h
//  Calcs
//
//  Created by whqcnn on 11/19/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "stdio.h"
#import "math.h"
@interface Calc1 : NSObject
{
    IBOutlet NSTextField *one;
    IBOutlet NSTextField *two;
    NSString *stringDisplay;
    int op, m, n;
    int valueFirst;
}

-(IBAction)one1:(id)sender;

-(IBAction)two1:(id)sender;

-(IBAction)three3:(id)sender;

-(IBAction)four:(id)sender;

-(IBAction)five:(id)sender;

-(IBAction)six:(id)sender;

-(IBAction)seven:(id)sender;

-(IBAction)eight:(id)sender;

-(IBAction)nine:(id)sender;

-(IBAction)zero:(id)sender;

-(IBAction)jia:(id)sender;

-(IBAction)jian:(id)sender;

-(IBAction)cheng:(id)sender;

-(IBAction)chu:(id)sender;

-(IBAction)dengyu:(id)sender;

-(IBAction)dian:(id)sender;

-(IBAction)mjia:(id)sender;

-(IBAction)mc:(id)sender;

-(IBAction)ms:(id)sender;

-(IBAction)mr:(id)sender;

-(IBAction)kaishi:(id)sender;

-(IBAction)zhengfu:(id)sender;

-(IBAction)brcksqace:(id)sender;

-(IBAction)ce:(id)sender;

-(IBAction)zhishu:(id)sender;

-(IBAction)gen:(id)sender;

-(IBAction)yibie:(id)sender;
@end
