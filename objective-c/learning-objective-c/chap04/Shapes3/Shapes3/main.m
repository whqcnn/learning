//
//  main.m
//  Shapes3
//
//  Created by whqcnn on 11/14/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum
{
    kRedColor,
    kGreenColor,
    kBlueColor,
    kYellowColor
}ShapeColor;

typedef struct
{
    int x, y, width, height;
}ShapeRcet;

NSString *colorName (ShapeColor color)
{
    NSString *colorName;
    switch (color) {
        case kRedColor:
            colorName = @"red";
            break;
            
        case kBlueColor:
            colorName = @"blue";
            break;
            
        case kGreenColor:
            colorName = @"green";
            break;
            
        case kYellowColor:
            colorName = @"yellow";
            break;
            
        default:
            colorName = @"not color";
            break;
    }
    return (colorName);
} //colorName

//======================================

@interface Shape : NSObject
{
    ShapeColor fillColor;
    ShapeRcet  bounds;
}

-(void) setFillColor: (ShapeColor) fillColor;

-(void) setBounds: (ShapeRcet) bounds;

-(void) draw;

@end //Shape

//---------------------------------------

@implementation Shape

-(void) setFillColor:(ShapeColor) c
{
    fillColor = c;
}//setFillColor

-(void) setBounds:(ShapeRcet) b
{
    bounds = b;
}

-(void) draw
{
    
}

@end//Shape

//============================================

@interface Circle : Shape

@end//Circle

//--------------------------------------------

@implementation Circle

-(void) setFillColor:(ShapeColor) c
{
    if (c == kRedColor)
    {
        c = kBlueColor;
    }
    
    [super setFillColor: c];
}

-(void) draw
{
    NSLog(@"drawing a Circle at (%d %d %d %d) in %@",
          bounds.x, bounds.y, bounds.width, bounds.height,
          colorName(fillColor));
}

@end//Circle

//=============================================

@interface Rectangle : Shape

@end//Rectangle

//---------------------------------------------

@implementation Rectangle

-(void) setFillColor:(ShapeColor) c
{
    if (c == kBlueColor)
    {
        c = kYellowColor;
    }
    
    [super setFillColor: c];
}

-(void) draw
{
    NSLog(@"drawing a Rectangle at (%d %d %d %d) in %@",
          bounds.x, bounds.y, bounds.width, bounds.height,
          colorName(fillColor));
}

@end//Rectangle

//==============================================

@interface Egg : Shape

@end//Egg

//---------------------------------------------

@implementation Egg

-(void) setFillColor:(ShapeColor) c
{
    if (c == kYellowColor)
    {
        c = kRedColor;
    }
    
    [super setFillColor: c];
}

-(void) draw
{
    NSLog(@"drawing a egg at (%d %d %d %d) in %@",
          bounds.x, bounds.y, bounds.width, bounds.height,
          colorName(fillColor));
}

@end//Egg

//==============================================

@interface Triangle : Shape

@end//Triangle

//---------------------------------------------

@implementation Triangle

-(void) draw
{
    NSLog(@"drawing a Triangle at (%d %d %d %d) in %@",
          bounds.x, bounds.y, bounds.width, bounds.height,
          colorName(fillColor));
}

@end//Triangle

//==============================================

void drawShapes (id shapes[], int count)
{
    int i;
    for (i = 0; i < count; i++) {
        id shape =shapes[i];
        [shape draw];
    }
}//drawShapes

int main(int argc, const char * argv[])
{
    id shapes[4];
    
    ShapeRcet rcet0 = {0, 0, 5, 10};
    shapes[0] = [Circle new];
    [shapes[0] setFillColor: kRedColor];
    [shapes[0] setBounds: rcet0];
    
    ShapeRcet rcet1 = {0, 10, 5, 10};
    shapes[1] = [Triangle new];
    [shapes[1] setFillColor: kGreenColor];
    [shapes[1] setBounds: rcet1];
    
    ShapeRcet rcet2 = {10, 20, 15, 15};
    shapes[2] = [Rectangle new];
    [shapes[2] setFillColor: kBlueColor];
    [shapes[2] setBounds: rcet2];
    
    ShapeRcet rcet3 = {30, 40, 50, 60};
    shapes[3] = [Egg new];
    [shapes[3] setFillColor: kYellowColor];
    [shapes[3] setBounds: rcet3];
    
    drawShapes(shapes, 4);
    
    return 0;
}
