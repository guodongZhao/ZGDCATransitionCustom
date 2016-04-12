//
//  UIView+ZGDViewCATransitionCustom.h
//  ZGDCATransitionCustom
//
//  Created by 赵国栋 on 16/4/11.
//  Copyright © 2016年 赵国栋. All rights reserved.
//https://github.com/guodongZhao/ZGDCATransitionCustom.git

#import <UIKit/UIKit.h>

@interface UIView (ZGDViewCATransitionCustom)

#pragma CATransition动画实现
/**
 *  CATransition动画实现
 *
 *  @param type
 fade                        //淡入淡出
 push                        //推挤
 reveal                      //揭开
 moveIn                      //覆盖
 cube                        //立方体
 suckEffect                  //吮吸
 oglFlip                     //翻转
 rippleEffect                //波纹
 pageCurl                    //翻页
 pageUnCurl                  //反翻页
 cameraIrisHollowOpen        //开镜头
 cameraIrisHollowClose       //关镜头
 curlDown                    //下翻页
 curlUp                      //上翻页
 flipFromLeft                //左翻转
 flipFromRight               //右翻转
 *******************************************
 *  @param subtype           设置动画效果起始位置
 kCATransitionFromRight      //右
 kCATransitionFromLeft       //左
 kCATransitionFromTop        //上
 kCATransitionFromBottom     //下
 *******************************************
 *  @param duration        设置动画时间
 *******************************************
 *  @param timingFuncation 动画的运动轨迹，用于变化起点和终点之间的插值计算
 * kCAMediaTimingFunctionLinear            线性,即匀速
 
 * kCAMediaTimingFunctionEaseIn            先慢后快
 
 * kCAMediaTimingFunctionEaseOut           先快后慢
 
 * kCAMediaTimingFunctionEaseInEaseOut     先慢后快再慢
 
 * kCAMediaTimingFunctionDefault           实际效果是动画中间比较
 *******************************************
 *  @param view            View
 */
- (void)transitionWithType:(NSString *)type WithSubtype:(NSString *)subtype WithTimeDuration:(CFTimeInterval)duration WithTimingFunction:(CAMediaTimingFunction *)timingFuncation ForView:(UIView *)view;
#warning CAMediaTimingFunction 使用时需要初始化  [CAMediaTimingFunction functionWithName:timingFuncation]




#pragma mark -
#pragma mark UIView实现动画
/**
 *  UIView实现动画
 *
 *  @param view           View
 *******************************************
 *  @param transition
 UIViewAnimationTransitionNone,             // 无
 UIViewAnimationTransitionFlipFromLeft,     // 左翻页
 UIViewAnimationTransitionFlipFromRight,    // 右翻页
 UIViewAnimationTransitionCurlUp,           // 翻页
 UIViewAnimationTransitionCurlDown,         // 反翻页
 *******************************************
 
 *  @param duration       设置动画时间
 *******************************************
 
 *  @param animationCurve
 UIViewAnimationCurveEaseInOut,         // 先慢后快再慢
 UIViewAnimationCurveEaseIn,            // 先慢后快
 UIViewAnimationCurveEaseOut,           // 先快后慢
 UIViewAnimationCurveLinear             // 线性,即匀速
 */
- (void)animationWithView:(UIView *)view WithAnimationTransition:(UIViewAnimationTransition)transition WithDuration:(CFTimeInterval)duration WithAnimationCurve:(UIViewAnimationCurve)animationCurve;


@end
