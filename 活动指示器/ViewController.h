//
//  ViewController.h
//  活动指示器
//
//  Created by MAC on 15/4/7.
//  Copyright (c) 2015年 SaiDiCaprio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ActivityIndicator.h"
@interface ViewController : UIViewController
{
    ActivityIndicator *_indicator;
}

-(IBAction)Start;

@end

