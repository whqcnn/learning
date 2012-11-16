//
//  Circle.m
//  Shapes1
//
//  Created by whqcnn on 11/16/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import "Circle.h"

@implementation Circle

-(void) setFillColor:(ShapeColor) c
{
    fillColor = c;
}//setFillColor

-(void) setBounds:(ShapeRect) b
{
    bounds = b;
}//setBounds

-(void) draw
{
    NSLog(@"drawing a circle at (%d %d %d %d) in %@",
          bounds.x, bounds.y, bounds.width, bounds.height,
          colorName(fillColor));
}

@end//Circle
