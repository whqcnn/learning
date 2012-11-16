//
//  Triangle.m
//  Shapes1
//
//  Created by whqcnn on 11/16/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import "Triangle.h"

@implementation Triangle

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
    NSLog(@"drawing a triangle at (%d %d %d %d) in %@",
          bounds.x, bounds.y, bounds.width, bounds.height,
          colorName(fillColor));
}


@end//Triangle
