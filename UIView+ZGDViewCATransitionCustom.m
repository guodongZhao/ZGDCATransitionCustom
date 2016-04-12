//
//  UIView+ZGDViewCATransitionCustom.m
//  ZGDCATransitionCustom
//
//  Created by 赵国栋 on 16/4/11.
//  Copyright © 2016年 赵国栋. All rights reserved.
//https://github.com/guodongZhao/ZGDCATransitionCustom.git

#import "UIView+ZGDViewCATransitionCustom.h"

@implementation UIView (ZGDViewCATransitionCustom)

#pragma mark -
#pragma mark CATransition动画实现
- (void)transitionWithType:(NSString *)type WithSubtype:(NSString *)subtype WithTimeDuration:(CFTimeInterval)duration WithTimingFunction:(CAMediaTimingFunction *)timingFuncation ForView:(UIView *)view
{
    //创建CATransition对象
    CATransition *animation = [CATransition animation];
    
    //设置运动时间
    animation.duration = duration;
    
    //设置运动type
    animation.type = type;
    if (subtype != nil) {
        
        //设置子类
        animation.subtype = subtype;
    }
    
    //设置运动速度
    animation.timingFunction = timingFuncation;
    
    [view.layer addAnimation:animation forKey:@"animation"];
}


#pragma mark -
#pragma mark UIView实现动画
- (void)animationWithView:(UIView *)view WithAnimationTransition:(UIViewAnimationTransition)transition WithDuration:(CFTimeInterval)duration WithAnimationCurve:(UIViewAnimationCurve)animationCurve
{
    [UIView animateWithDuration:duration animations:^{
        [UIView setAnimationCurve:animationCurve];
        [UIView setAnimationTransition:transition forView:view cache:YES];
    }];
}

@end
