//
//  main.m
//  FileWalker
//
//  Created by whqcnn on 11/17/12.
//  Copyright (c) 2012 whqcnn. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
	
    NSFileManager *manager;
    manager = [NSFileManager defaultManager];
	
    NSString *home;
    home = [@"~/Random" stringByExpandingTildeInPath];
	
    NSDirectoryEnumerator *direnum;
    direnum = [manager enumeratorAtPath: home];
	
    NSMutableArray *files;
    files = [NSMutableArray arrayWithCapacity: 42];
	
    NSString *filename;
    while (filename = [direnum nextObject]) {
		if ([[filename pathExtension]
			 isEqualTo: @"jpg"]) {
			[files addObject: filename];
		}
    }
	
    NSEnumerator *fileenum;
    fileenum = [files objectEnumerator];
	
    while (filename = [fileenum nextObject]) {
		NSLog (@"%@", filename);
    }
	
    [pool drain];
    return 0;
}

