/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:13 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKNavigatorSceneKitViewController.h>
#import <libobjc.A.dylib/OFPageViewControllerDelegate.h>
#import <libobjc.A.dylib/OFPageViewControllerDataSource.h>
#import <libobjc.A.dylib/OFViewControllerTransitioningDelegate.h>

@class NSArray, OFPageViewController, OKTransitionLinearSceneKit, NSString;

@interface OKNavigatorSceneKitLinearViewController : OKNavigatorSceneKitViewController <OFPageViewControllerDelegate, OFPageViewControllerDataSource, OFViewControllerTransitioningDelegate> {

	NSArray* _orderedPagesNames;
	OFPageViewController* _pagesViewController;
	unsigned long long _warmupBehavior;
	BOOL _wantsPageControl;
	long long _navigationOrientation;
	OKTransitionLinearSceneKit* _transition;

}

@property (nonatomic,retain) OKTransitionLinearSceneKit * transition;              //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) long long navigationOrientation;                      //@synthesize navigationOrientation=_navigationOrientation - In the implementation block
@property (assign,nonatomic) BOOL wantsPageControl;                                //@synthesize wantsPageControl=_wantsPageControl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)setTransition:(OKTransitionLinearSceneKit *)arg1 ;
-(OKTransitionLinearSceneKit *)transition;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(void)commonInit;
-(long long)navigationOrientation;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(long long)presentationCountForPageViewController:(id)arg1 ;
-(long long)presentationIndexForPageViewController:(id)arg1 ;
-(BOOL)canPerformAction:(id)arg1 ;
-(void)applySettings;
-(void)navigateToPageWithName:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)updatePageViewController;
-(void)reloadPagesViewController;
-(void)gotoNext:(id)arg1 ;
-(void)gotoPrevious:(id)arg1 ;
-(void)prepareAdjacentPageViewControllers;
-(id)nameForPageBeforePage:(id)arg1 ;
-(id)nameForPageAfterPage:(id)arg1 ;
-(void)setSettingTransition:(id)arg1 ;
-(void)setNavigationOrientation:(long long)arg1 ;
-(void)setWantsPageControl:(BOOL)arg1 ;
-(id)initNavigationWithKey:(id)arg1 isKeyUp:(BOOL)arg2 andMethod:(SEL)arg3 ;
-(BOOL)pageViewController:(id)arg1 canAutomaticallyHandleGestureRecognizer:(id)arg2 ;
-(void)pageViewController:(id)arg1 willStartTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 withDirection:(long long)arg4 ;
-(void)pageViewController:(id)arg1 didStartTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 ;
-(void)pageViewController:(id)arg1 willFinishTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 transitionWillComplete:(BOOL)arg4 ;
-(void)pageViewController:(id)arg1 didFinishTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 fromViewController:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(id)navigationController:(id)arg1 animationControllerForDirection:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(BOOL)wantsPageControl;
-(void)prepareAdjacentPageViewController:(id)arg1 ;
-(void)adjustPositionForPage:(id)arg1 ;
-(void)setSettingWarmupBehavior:(unsigned long long)arg1 ;
@end

