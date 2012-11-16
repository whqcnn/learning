//
//  main.m
//  Shapes1
//
//  Created by whqcnn on 11/16/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Circle.h"
#import "Rectangle.h"
#import "Egg.h"
#import "Triangle.h"

void drawShapes (id shapes[], int count)
{
	int i;
	
	for (i = 0; i < count; i++) {
		id shape = shapes[i];
		[shape draw];
	}
	
} // drawShapes

int main(int argc, const char * argv[])
{

    id shapes[4];
	
	ShapeRect rect0 = { 0, 0, 10, 30 };
	shapes[0] = [Circle new];
	[shapes[0] setBounds: rect0];
	[shapes[0] setFillColor: kRedColor];
	
	ShapeRect rect1 = { 30, 40, 50, 60 };
	shapes[1] = [Rectangle new];
	[shapes[1] setBounds: rect1];
	[shapes[1] setFillColor: kGreenColor];
	
	ShapeRect rect2 = { 15, 19, 37, 29 };
	shapes[2] = [Egg new];
	[shapes[2] setBounds: rect2];
	[shapes[2] setFillColor: kBlueColor];
    
	ShapeRect rect3 = { 47, 32, 80, 50 };
	shapes[3] = [Triangle new];
	[shapes[3] setBounds: rect3];
	[shapes[3] setFillColor: kRedColor];
	
	drawShapes (shapes, 4);
    
    return 0;
}

