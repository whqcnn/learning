//
//  main.m
//  BOOLParty
//
//  Created by whqcnn on 10/27/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>


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

//

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        // insert code here...
        NSLog(@"Hello, World!");
        BOOL a;
        a = areIntsDifferent(5, 5);
        NSLog(@"%@", boolString(a));
        
    }
    return 0;
}

