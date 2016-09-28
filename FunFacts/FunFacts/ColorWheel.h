//
//  ColorWheel.h
//  FunFacts
//
//  Created by Bjørn on 22/09/2016.
//  Copyright © 2016 Bjørn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

- (UIColor *)randomColor;


@end
