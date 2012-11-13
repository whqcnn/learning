//
//  main.m
//  Shapes2
//
//  Created by whqcnn on 11/13/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum
{
    kCircle,
    kRectangle,
    kOblateSpheroid,
    kTriangle
}ShapeType;

typedef enum
{
    kRedColor,
    kGreenColor,
    kBlueColor,
}ShapeColor;

typedef struct
{
    int x, y, width, height;
}ShapeRect;

typedef struct
{
    ShapeType type;
    ShapeColor fillColor;
    ShapeRect bounds;
}Shape;

NSString *colorName(ShapeColor fillColor)
{
    switch (fillColor) {
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
            return @"not color";
    }
}

void drawCircle(ShapeRect bounds, ShapeColor fillColor)
{
    NSLog(@"drawing Circle at (%d, %d, %d, %d) in %@",
          bounds.x, bounds.y, bounds.width, bounds.height,
          colorName(fillColor));
}
void drawRectangle(ShapeRect bounds, ShapeColor fillColor)
{
    NSLog(@"drawing Rectangle at (%d, %d, %d, %d) in %@",
          bounds.x, bounds.y, bounds.width, bounds.height,
          colorName(fillColor));
}
void drawEgg(ShapeRect bounds, ShapeColor fillColor)
{
    NSLog(@"drawing OblateSpheroid at (%d, %d, %d, %d) in %@",
          bounds.x, bounds.y, bounds.width, bounds.height,
          colorName(fillColor));
}
void drawTriangle(ShapeRect bounds, ShapeColor fillColor)
{
    NSLog(@"drawing Triangle at (%d, %d, %d, %d) in %@",
          bounds.x, bounds.y, bounds.width, bounds.height,
          colorName(fillColor));
}

void drawShapes(Shape shapes[], int count)
{
    int i;
    
    for (i = 0; i < count; i++) {
        switch (shapes[i].type) {
            case kCircle:
                drawCircle(shapes[i].bounds, shapes[i].fillColor);
                break;
                
            case kRectangle:
                drawRectangle(shapes[i].bounds, shapes[i].fillColor);
                break;
                
            case kOblateSpheroid:
                drawEgg(shapes[i].bounds, shapes[i].fillColor);
                break;
            
            case kTriangle:
                drawTriangle(shapes[i].bounds, shapes[i].fillColor);
                break;
        }
    }
}

int main(int argc, const char * argv[])
{
    Shape shapes[4];
    
    ShapeRect rect0 = {13, 23, 24, 244};
    shapes[0].type = kCircle;
    shapes[0].fillColor = kRedColor;
    shapes[0].bounds = rect0;
    
    ShapeRect rect1 = {324, 423, 24, 23};
    shapes[1].type = kRectangle;
    shapes[1].fillColor = kGreenColor;
    shapes[1].bounds = rect1;
    
    ShapeRect rect2 = {0, 0, 43, 423};
    shapes[2].type = kOblateSpheroid;
    shapes[2].fillColor = kBlueColor;
    shapes[2].bounds = rect2;
    
    ShapeRect rect3 = {0, 3, 4, 5};
    shapes[3].type = kTriangle;
    shapes[3].fillColor = kRedColor;
    shapes[3].bounds = rect3;
    
    drawShapes(shapes, 4);
    return 0;
}

