//
//  main.m
//  Shapes3
//
//  Created by whqcnn on 11/13/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum
{
    kCircle,
    kRectangle,
    kEgg,
    kTriangle
}ShapeType;

typedef enum
{
    kRedColor,
    kGreenColor,
    kBlueColor
}ShapeColor;

typedef struct
{
    int x, y, width, height;
}ShapeRect;

NSString *colorName (ShapeColor colorName)
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
            
    }
    return @"not color";
} //colorName

@interface Circle : NSObject
{
    ShapeColor fillColor;
    ShapeRect bounds;
}

-(void) setFillColor: (ShapeColor) fillColor;
-(void) setBounds: (ShapeRect) bounds;
-(void) draw;

@end //Circle

@interface Rectangle : NSObject
{
    ShapeColor fillColor;
    ShapeRect bounds;
    
}

-(void) setFillColor: (ShapeColor) fillColor;
-(void) setBounds: (ShapeRect) bounds;
-(void) draw;

@end //Rectangle


@interface Egg : NSObject
{
    ShapeColor fillColor;
    ShapeRect bounds;
    
}

-(void) setFillColor: (ShapeColor) fillColor;
-(void) setBounds: (ShapeRect) bounds;
-(void) draw;

@end //Egg

@interface Triangle : NSObject
{
    ShapeColor fillColor;
    ShapeRect bounds;
    
}

-(void) setFillColor: (ShapeColor) fillColor;
-(void) setBounds: (ShapeRect) bounds;
-(void) draw;

@end //Triangle

@implementation Circle

-(void) setFillColor:(ShapeColor) c
{
    fillColor = c;
} //setFillColor

-(void) setBounds: (ShapeRect) b
{
    bounds = b;
}//setBounds


-(void) draw
{
    NSLog(@"drawing a circle at (%d %d %d %d) in %@",
          bounds.x, bounds.y, bounds.width, bounds.height,
          colorName(fillColor));
}
@end //Cricle

@implementation Rectangle

-(void) setFillColor:(ShapeColor) c
{
    fillColor = c;
} //setFillColor

-(void) setBounds: (ShapeRect) b
{
    bounds = b;
}//setBounds


-(void) draw
{
    NSLog(@"drawing a Rectangle at (%d %d %d %d) in %@",
          bounds.x, bounds.y, bounds.width, bounds.height,
          colorName(fillColor));
}
@end //Rectangle

@implementation Egg

-(void) setFillColor:(ShapeColor) c
{
    fillColor = c;
} //setFillColor

-(void) setBounds: (ShapeRect) b
{
    bounds = b;
}//setBounds


-(void) draw
{
    NSLog(@"drawing a Egg at (%d %d %d %d) in %@",
          bounds.x, bounds.y, bounds.width, bounds.height,
          colorName(fillColor));
}
@end //Egg

@implementation Triangle

-(void) setFillColor:(ShapeColor) c
{
    fillColor = c;
} //setFillColor

-(void) setBounds: (ShapeRect) b
{
    bounds = b;
}//setBounds


-(void) draw
{
    NSLog(@"drawing a triangle at (%d %d %d %d) in %@",
          bounds.x, bounds.y, bounds.width, bounds.height,
          colorName(fillColor));
}
@end //Triangle



void drawShapes(id shapes[], int count)
{
    int i;
    for (i = 0; i < count; i++) {
        id shape = shapes[i];
        [shape draw];
    }
}

int main(int argc, const char * argv[])
{
    id shapes[4];
    
    ShapeRect rect0 = {23, 243, 4, 42};
    shapes[0] = [Circle new];
    [shapes[0] setFillColor: kRedColor];
    [shapes[0] setBounds: rect0];
    
    ShapeRect rect1 = {23, 23, 40, 42};
    shapes[1] = [Rectangle new];
    [shapes[1] setFillColor: kGreenColor];
    [shapes[1] setBounds: rect1];
    
    ShapeRect rect2 = {23, 3, 4, 042};
    shapes[2] = [Egg new];
    [shapes[2] setFillColor: kBlueColor];
    [shapes[2] setBounds: rect2];
    
    ShapeRect rect3 = {0, 24, 34, 342};
    shapes[3] = [Triangle new];
    [shapes[3] setFillColor: kRedColor];
    [shapes[3] setBounds: rect3];
    
    drawShapes(shapes, 4);
    
    return 0;
}

