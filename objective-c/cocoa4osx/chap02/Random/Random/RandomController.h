//
//  RandomController.h
//  Random
//
//  Created by whqcnn on 11/18/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RandomController : NSObject
{
    IBOutlet NSTextField *textField;
}

-(IBAction)seed:(id)sender;

-(IBAction)generate:(id)sender;

@end
