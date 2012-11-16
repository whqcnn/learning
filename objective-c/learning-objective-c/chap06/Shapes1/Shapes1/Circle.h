//
//  Circle.h
//  Shapes1
//
//  Created by whqcnn on 11/16/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "goneYong.h"

@interface Circle : NSObject
{
    ShapeColor fillColor;
    ShapeRect bounds;
}

-(void) setFillColor: (ShapeColor) fillColor;
-(void)setBounds: (ShapeRect) bounds;
-(void) draw;

@end//Circle
