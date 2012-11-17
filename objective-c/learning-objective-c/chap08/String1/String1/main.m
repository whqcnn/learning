//
//  main.m
//  String1
//
//  Created by whqcnn on 11/17/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Aint.h"


int main(int argc, const char * argv[])
{

    id a = [Aint new];
    id b = [Aint new];
    
    [a setAge:10];
    [b setAge:90];
    
    [a print];
    [b print];
    NSString *height;
    height = [NSString stringWithFormat:@"Your height is %d feet, %d inches", [a getAge], [b getAge]];
    NSLog(@"%@", height);
    if ([height length] > 20) {
        NSLog(@"height len %ld", [height length]);
    }
    NSString    *thing[5];
    NSString    *thing1;
    thing[1] = @"hello 5";
    thing[2] = [NSString stringWithFormat:@"hello %d", 5];
    
    if ([thing[1] isEqualToString: thing[2]]) {                             //比较两个指针所指向的字符串是否相等；
        NSLog(@"thing1 and thing2 same");
    }
    if (thing[1] == thing[2])                                              //这里的条件是判断两个指针是否相等，而不是判断它们所指向的字符串
    {
        NSLog(@"They are the same object");
    }
    thing[0] = @"A134sldkjf123";
    thing[3] = @"ikkdkdkdk";
    thing[4] = @"123";
    for (int i = 0; i < 5; i++)
    {
        for (int j = (i+1); j < 5; j++) {
            if ([thing[i] compare: thing[j] options:NSNumericSearch] == NSOrderedDescending)
            {
                thing1 = thing[i];
                thing[i] = thing[j];
                thing[j] = thing1;
            }
        }
    }
    NSLog(@"开始");
    for (int i = 0; i < 5; i++)
    {
        NSLog(@"%@", thing[i]);
    }
    NSLog(@"%@", thing[1]);
    if ([thing[1] hasPrefix:@"A134"])
    {
        NSLog(@"是否以A134开头？ 是！");
    }
    else
        NSLog(@"是否以A134开头？没有");
    
    if ([thing[1] hasSuffix:@"123"])
    {
        NSLog(@"是否以123结尾？ 是！");
    }
    else
        NSLog(@"是否以123结尾？没有");
    NSRange one;
    NSMutableString *friends;
    friends = [NSMutableString stringWithCapacity:50];
    [friends appendString:@"one two2 three two"];
    one = [friends rangeOfString:@"two"];
    [friends deleteCharactersInRange:one];
    NSLog(@"%ld  %@", one.length, friends);
    return 0;
}

