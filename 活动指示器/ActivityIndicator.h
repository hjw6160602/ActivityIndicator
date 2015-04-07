//
//  ActivityIndicator.h
//  FounderSafeiOS
//
//  Created by MAC on 15/4/7.
//  Copyright (c) 2015年 MAC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ActivityIndicator : UIView{
    
    UIActivityIndicatorView* indicator;
    UILabel* label;
    UIView* maskView;
    CGRect rectHud,rectSuper,rectOrigin;//外壳区域、父视图区域
    UIView* viewHud;//外壳
    
    BOOL visible,blocked;
}
@property (assign) BOOL visible;

- (id)initWithFrame:(CGRect)frame superView:(UIView*)superView;
- (void)show:(BOOL)block;// block:是否阻塞父视图
- (void)hide;
- (void)setMessage:(NSString*)newMsg;
- (void)alignToCenter;

@end
