//
//  goneYong.h
//  Shapes1
//
//  Created by whqcnn on 11/16/12.
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
}ShapeRect;


NSString  *colorName (ShapeColor color);
