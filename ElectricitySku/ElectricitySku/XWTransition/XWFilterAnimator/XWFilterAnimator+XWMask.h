//
//  XWFilterAnimator+XWMask.h
//  XWTransitionDemo
//
//  Created by wazrx on 16/6/17.
//  Copyright © 2016年 macOS. All rights reserved.
//

#import "XWFilterAnimator.h"

@interface XWFilterAnimator (XWMask)

- (void)xw_maskAnimationFor:(XWFilterTransitionView *)filterView transitionContext:(id<UIViewControllerContextTransitioning>)transitionContext duration:(NSTimeInterval)duration;
@end
