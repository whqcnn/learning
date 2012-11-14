//
//  main.m
//  Shapes1
//
//  Created by whqcnn on 11/14/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum
{
    kRedColor,
    kGreenColor,
    kBlueColor
}ShapeColor;

typedef struct
{
    int x, y, width, height;
}ShapeRcet;

NSString *colorName(ShapeColor colorName)
{
    switch (colorName) {
        case kRedColor:
            return @"red";
            break;
            
        case kGreenColor:
            return @"green";
            break;
        
        case kBlueColor:
            return @"blue";
            break;
        default:
            break;
    }
    return @"not color";
}

@interface Shape : NSObject
{
    ShapeColor fillColor;
    ShapeRcet bounds;
}

-(void) setFillColor: (ShapeColor) fillColor;

-(void) setBounds: (ShapeRcet) bounds;

-(void) draw;

@end //Shape

@interface Circle : Shape

@end //Circle

@interface Rectangle: Shape

@end //Rectangle

@interface Egg : Shape

@end //Egg

@interface Triangle : Shape

@end //Triangle

@implementation Shape

-(void) setFillColor:(ShapeColor) c
{
    fillColor = c;
} //setFillColor

-(void) setBounds:(ShapeRcet) b
{
    bounds = b;
} //setBounds

-(void) draw
{
    
} //draw

@end //Shape

@implementation Circle

-(void) draw
{
    NSLog(@"drawing Circle at (%d %d %d %d) in %@",
          bounds.x, bounds.y, bounds.width, bounds.height,
          colorName(fillColor));
}

@end //Circle

@implementation Rectangle

-(void) draw
{
    NSLog(@"drawing Rectangle at (%d %d %d %d) in %@",
          bounds.x, bounds.y, bounds.width, bounds.height,
          colorName(fillColor));
}

@end //Rectangle

@implementation Egg

-(void) draw
{
    NSLog(@"drawing Egg at (%d %d %d %d) in %@",
          bounds.x, bounds.y, bounds.width, bounds.height,
          colorName(fillColor));
}

@end //Egg

@implementation Triangle

-(void) draw
{
    NSLog(@"drawing Triangle at (%d %d %d %d) in %@",
          bounds.x, bounds.y, bounds.width, bounds.height,
          colorName(fillColor));
}

@end //Triangle

void drawShapes(id shapes[], int count)
{
    int i;
    for (i = 0; i < count; i++)
    {
        id shape = shapes[i];
        [shape draw];
    }
}


int main(int argc, const char * argv[])
{
    id shapes[4];
    
    ShapeRcet rcet0 = {0, 0, 23, 45};
    shapes[0] = [Circle new];
    [shapes[0] setBounds: rcet0];
    [shapes[0] setFillColor: kRedColor];
    
    ShapeRcet rcet1 = {45, 23, 23, 45};
    shapes[1] = [Rectangle new];
    [shapes[1] setBounds: rcet1];
    [shapes[1] setFillColor: kGreenColor];
    
    ShapeRcet rcet2 = {20, 30, 40, 45};
    shapes[2] = [Egg new];
    [shapes[2] setBounds: rcet2];
    [shapes[2] setFillColor: kBlueColor];
    
    ShapeRcet rcet3 = {0, 34, 23, 45};
    shapes[3] = [Triangle new];
    [shapes[3] setBounds: rcet3];
    [shapes[3] setFillColor: kRedColor];
    
    drawShapes(shapes, 4);
    
    return 0;
}

