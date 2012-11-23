//
//  main.m
//  Init1
//
//  Created by whqcnn on 11/23/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    NSString *string;
    string = [[NSString alloc] initWithContentsOfFile: @"/tmp/123.txt"];
    
    NSLog(@"%@", string);
    return 0;
}

