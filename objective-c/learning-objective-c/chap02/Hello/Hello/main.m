//
//  main.m
//  Hello
//
//  Created by whqcnn on 11/8/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>          // 此行程序相当于C语言中的 #include <stdio.h>
                                           // 不过#import 比 #include 要更智能；我们暂且认为认为#import 就是 #include

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        // insert code here...
        NSLog(@"Hello, Objective-C!");     //NSLog() 相当于C语言中的printf(), 且增加了一些特性。
                                           //不同的是 NSLong()语句中 字符串前添加了@符号。
        
        
    }
    return 0;                              //终止执行main()并结束程序。
}

