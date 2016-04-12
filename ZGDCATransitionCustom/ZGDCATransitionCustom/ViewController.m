//
//  ViewController.m
//  ZGDCATransitionCustom
//
//  Created by 赵国栋 on 16/4/11.
//  Copyright © 2016年 赵国栋. All rights reserved.
//https://github.com/guodongZhao/ZGDCATransitionCustom.git

#import "ViewController.h"
#import "UIView+ZGDViewCATransitionCustom.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end

@implementation ViewController

#pragma mark -
#pragma mark action
- (IBAction)btnAction:(UIButton *)sender {
    sender.selected = !sender.selected;
    if (sender.selected) {
        self.imageView.image = [UIImage imageNamed:@"1.jpg"];
        // 第一种方法
        [self.imageView transitionWithType:@"rippleEffect" WithSubtype:kCATransitionFromLeft WithTimeDuration:0.5f WithTimingFunction:[CAMediaTimingFunction functionWithName:kCAMediaTimingFunctionEaseIn] ForView:self.imageView];
    }else
    {
        self.imageView.image = [UIImage imageNamed:@"2.jpg"];
        // UIView方法
        [self.imageView animationWithView:self.imageView WithAnimationTransition:UIViewAnimationTransitionFlipFromLeft WithDuration:0.7f WithAnimationCurve:UIViewAnimationCurveEaseOut];
    }
}


#pragma mark -
#pragma mark lifecycle
- (void)viewDidLoad {
    [super viewDidLoad];
    
}


@end
