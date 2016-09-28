//
//  FactBook.h
//  FunFacts
//
//  Created by Bjørn on 21/09/2016.
//  Copyright © 2016 Bjørn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

- (NSString *)randomFact;


@end
