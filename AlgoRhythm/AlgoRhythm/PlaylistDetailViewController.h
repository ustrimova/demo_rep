//
//  PlaylistDetailViewController.h
//  AlgoRhythm
//
//  Created by Bjørn on 23/09/2016.
//  Copyright © 2016 Bjørn. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Playlist;

@interface PlaylistDetailViewController : UIViewController

@property (strong, nonatomic) Playlist *playlist;
@property (weak, nonatomic) IBOutlet UIImageView *playlistCoverImage;
@property (weak, nonatomic) IBOutlet UILabel *playlistTitle;
@property (weak, nonatomic) IBOutlet UILabel *playlistDescription;
@property (weak, nonatomic) IBOutlet UILabel *playlistArtist0;
@property (weak, nonatomic) IBOutlet UILabel *playlistArtist1;
@property (weak, nonatomic) IBOutlet UILabel *playlistArtist2;
@property (weak, nonatomic) IBOutlet UILabel *playlistArtist3;
@property (weak, nonatomic) IBOutlet UILabel *playlistArtist4;

@end
