//
//  goneYong.m
//  Shapes1
//
//  Created by whqcnn on 11/16/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import "goneYong.h"

NSString  *colorName (ShapeColor color)
{
    switch (color)
    {
        case kRedColor:
            return @"red";
            break;
        case kGreenColor:
            return @"green";
            break;
        case kBlueColor:
            return @"bule";
            break;
        case kYellowColor:
            return @"yellow";
            break;
    }
    return @"no clue";
}