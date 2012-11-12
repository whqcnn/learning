//
//  main.m
//  WordLength1
//
//  Created by whqcnn on 11/12/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    char *words[4] = { "one", "two", "three", "furo" };
    int wordCount = 4;
    int i = 0;
    for (i = 0; i < wordCount; i++)
    {
        NSLog(@"%s is %zd characters long", words[i], strlen(words[i]));
    }
    return 0;
}

