//
//  MusicLibrary.h
//  AlgoRhythm
//
//  Created by Bjørn on 26/09/2016.
//  Copyright © 2016 Bjørn. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const kTitle;
extern NSString *const kTitle;
extern NSString *const kDescription;
extern NSString *const kIcon;
extern NSString *const kLargeIcon;
extern NSString *const kBackgroundColor;
extern NSString *const kArtists;


@interface MusicLibrary : NSObject

@property (strong, nonatomic) NSArray *library;


@end
