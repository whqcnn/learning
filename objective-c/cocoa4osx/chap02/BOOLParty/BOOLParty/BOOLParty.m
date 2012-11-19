//
//  BOOLParty.m
//  BOOLParty
//
//  Created by whqcnn on 10/27/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import "BOOLParty.h"

@implementation BOOLParty
BOOL areIntsDifferent(int thing1, int thing2)
{
    if (thing1 == thing2)
        return (NO);
    else
        return (YES);
}

NSString *boolString(BOOL yesNO)
{
    if (yesNO == NO)
        return (@"NO");
    else
        return (@"YES");
}

int main(int argc, const char *argv[])
{
    BOOL areTheyDifferent;
    areTheyDifferent = areIntsDifferent(5, 5);
    NSLog(@"Are %d and %d Different? %@", 5, 5, boolString(areTheyDifferent));
    
    areTheyDifferent = areIntsDifferent(78, 98);
    NSLog(@"Are %d and %d Different? %@", 78, 98, boolString(areTheyDifferent));
    
    return 0;
}


@end
