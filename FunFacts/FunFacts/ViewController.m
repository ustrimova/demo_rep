//
//  ViewController.m
//  FunFacts
//
//  Created by Bjørn on 21/09/2016.
//  Copyright © 2016 Bjørn. All rights reserved.
//

#import "ViewController.h"
#import "FactBook.h"
#import "ColorWheel.h"

@interface ViewController ()

@end

@implementation ViewController



- (void)viewDidLoad {
    
    [super viewDidLoad];
    
    self.factBook = [[FactBook alloc]init];
    self.colorWheel = [[ColorWheel alloc]init];
    
    UIColor *randomColor = [self.colorWheel randomColor];
    self.view.backgroundColor = randomColor;
    self.funFactButton.tintColor = randomColor;
    
    self.funFactLabel.text = [self.factBook randomFact];
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)showFunFact {
    
    UIColor *randomColor = [self.colorWheel randomColor];
    self.view.backgroundColor = randomColor;
    self.funFactButton.tintColor = randomColor;
    self.funFactLabel.text = [self.factBook randomFact];

}


@end
