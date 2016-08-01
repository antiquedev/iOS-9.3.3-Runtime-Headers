/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:46 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRepeatingPressGestureRecognizer.h>

@class UIScrollView;

@interface UIScrollViewDirectionalPressGestureRecognizer : _UIRepeatingPressGestureRecognizer {

	UIScrollView* _scrollView;
	long long _activePressType;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) long long activePressType;                   //@synthesize activePressType=_activePressType - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)reset;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(long long)activePressType;
@end
