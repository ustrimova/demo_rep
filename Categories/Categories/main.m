//
//  main.m
//  Categories
//
//  Created by Bjørn on 16/09/16.
//  Copyright © 2016 Bjørn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSArray+Movies.h"

int main(int argc, const char * argv[]) {
    
    NSArray *rawArray =@[@"Gravity", @"The Martian", @"Interstellar", @"The Martian", @"Gravity", @"Guardians of the Galaxy"];

    rawArray = [rawArray dedupe];
    NSLog(@"You're nominees are: %@", rawArray);
    
    
    return 0;
}
