/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLSlidePresentationAnimator.h>

@class UIView, UIViewController;

@interface QLSlideZoomPresentationAnimator : QLSlidePresentationAnimator {

	UIView* _previewView;
	UIView* _animationContainer;
	UIViewController* _toViewController;
	UIView* _containerView;
	CGAffineTransform _scaleDownTransform;
	UIView* _transitioningView;
	CGPoint _finalCenter;
	CGAffineTransform _imageScaleDownTransform;

}
-(void)prepareForTransition;
-(void)finishAnimatingDismissalWithCompletionHandler:(/*^block*/id)arg1 ;
@end
