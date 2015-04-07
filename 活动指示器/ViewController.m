//
//  ViewController.m
//  活动指示器
//
//  Created by MAC on 15/4/7.
//  Copyright (c) 2015年 SaiDiCaprio. All rights reserved.
//

#import "ViewController.h"

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self initControls];
}

#pragma mark - Init
- (void)initControls{
    
}

#pragma mark - Action
- (IBAction)Start{
    _indicator = [[ActivityIndicator alloc]init];
    _indicator=[_indicator initWithFrame:CGRectMake(0, 0, 120, 120) superView:self.view];
    [_indicator alignToCenter];
    if (_indicator.visible==NO)
        [_indicator show:YES];
    [self performSelector:@selector(EndTheStart) withObject:nil afterDelay:5.0f];
}

- (void)EndTheStart{
    [_indicator hide];
}

@end
