//
//  Tire.h
//  Init2
//
//  Created by whqcnn on 11/23/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Tire : NSObject
{
    float pressure;
    float treadDepth;
}

-(void) setPressure: (float) pressure;
-(float) pressure;

-(void) setTreadDepth: (float) treadDepth;
-(float) treadDepth;

@end
