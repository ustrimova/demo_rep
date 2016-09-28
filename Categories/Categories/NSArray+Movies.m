//
//  NSArray+Movies.m
//  Categories
//
//  Created by Bjørn on 16/09/16.
//  Copyright © 2016 Bjørn. All rights reserved.
//

#import "NSArray+Movies.h"

@implementation NSArray (Movies)

-(NSArray*)dedupe {
    
    NSMutableArray *dedupedArray = [[NSMutableArray alloc]init];
    
    for (NSString *name in self) {
        if (![dedupedArray containsObject:name]) {
            [dedupedArray addObject:name];
        }
    }
    
    return dedupedArray;
}

@end
