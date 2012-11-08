//
//  main.m
//  BOOLParty
//
//  Created by whqcnn on 11/8/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>

// 还是没能理解，看了好几遍还是没有发现BOOL的强大实用功能。
// 本来很简单就能解决的问题（判定后输出一个字符串），居然写了两个函数，绕了一大圈。也没明白BOOL.

BOOL areIntsDifferent (int thing1, int thing2)
{
    if (thing1 == thing2)
    {
        return NO;
    }
    else
    {
        return YES;
    }
}


NSString *boolstring (BOOL yesNO)
{
    if (yesNO == NO)
    {
        return (@"NO");
    }
    else
    {
        return (@"YES");
    }
}

int main(int argc, const char * argv[])
{
    
    BOOL areTheyDifferent;
    
    areTheyDifferent = areIntsDifferent(3, 4);
    
    NSLog(@"\nare %d and %d different?\n%@", 3, 4, boolstring (areTheyDifferent));

    int x, y;
    scanf("%d %d", &x, &y);
    NSLog(@"\nare %d and %d different?", x, y);
    
    if (x == y)
        printf("NO");
    else
        printf("YES");
    
    
    return 0;
}



