//
//  main.m
//  Array1
//
//  Created by whqcnn on 11/17/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{
    NSArray *array;
    array = [NSArray arrayWithObjects:@"one", @"two", @"three", nil];
    for (int i = 0; i < [array count]; i++) {
        NSLog(@"index %d has %@", i, [array objectAtIndex: i]);
    }
    
    NSEnumerator *enumerator;
    enumerator = [array reverseObjectEnumerator];
    
    id thingie;
    while (thingie = [enumerator nextObject]) {
        NSLog(@"I found %@", thingie);
    }
    
    for (NSString *string in array) {
        NSLog(@"I found %@", string);
    }

    return 0;
}

