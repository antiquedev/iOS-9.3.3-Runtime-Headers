/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFocusScrollAnimator.h>

@class CAMediaTimingFunction, NSString;

@interface _UIFocusPointToPointScrollAnimator : NSObject <_UIFocusScrollAnimator> {

	CAMediaTimingFunction* _fancyTimingFunction;
	double _defaultConvergenceRate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double defaultConvergenceRate; 
@property (nonatomic,readonly) BOOL requiresExtendingScrollViewVisibleBounds; 
-(id)init;
-(void)setDefaultConvergenceRate:(double)arg1 ;
-(BOOL)isAnimatingScrollView:(id)arg1 ;
-(void)cancelScrollingForScrollView:(id)arg1 ;
-(CGPoint)targetContentOffsetForScrollView:(id)arg1 ;
-(BOOL)requiresExtendingScrollViewVisibleBounds;
-(void)cancelPeekAdjustmentForScrollView:(id)arg1 performRollback:(BOOL)arg2 ;
-(void)setPeekOffsetAdjustment:(CGPoint)arg1 forScrollView:(id)arg2 ;
-(CGPoint)velocityToScrollFromOffset:(CGPoint)arg1 toOffset:(CGPoint)arg2 ;
-(void)setTargetContentOffset:(CGPoint)arg1 forScrollView:(id)arg2 convergenceRate:(double)arg3 completion:(/*^block*/id)arg4 ;
-(double)defaultConvergenceRate;
-(double)_animationDurationForDistance:(double)arg1 convergenceRate:(double)arg2 ;
@end

