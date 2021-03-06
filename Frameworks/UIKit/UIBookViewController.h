/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:46 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>

@protocol UIBookViewControllerDelegate;
@class UIView, UIViewController;

@interface UIBookViewController : UIViewController {

	id<UIBookViewControllerDelegate> _delegate;
	UIView* _contentView;
	UIViewController* _evenPage;
	UIViewController* _oddPage;
	UIViewController* _newEvenPage;
	UIViewController* _newOddPage;
	long long _turnCount;
	long long _animatedPageTurns;
	double _turnMargin;
	UIEdgeInsets _contentInset;
	double _turnDuration;

}

@property (assign,nonatomic) id<UIBookViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIViewController * oddPage;                             //@synthesize oddPage=_oddPage - In the implementation block
@property (nonatomic,retain) UIViewController * evenPage;                            //@synthesize evenPage=_evenPage - In the implementation block
@property (assign,nonatomic) double turnMargin;                                      //@synthesize turnMargin=_turnMargin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                              //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) double turnDuration;                                    //@synthesize turnDuration=_turnDuration - In the implementation block
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)_setupContentViewIfNecessary;
-(void)_setNewPage:(id)arg1 isLeft:(BOOL)arg2 ;
-(void)_positionPage:(id)arg1 isLeft:(BOOL)arg2 ;
-(void)_turnSinglePageAnimated;
-(void)_turnAllPagesNonAnimated;
-(void)_setupCurlFilters;
-(void)_startCurlAnimation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UIBookViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<UIBookViewControllerDelegate>)delegate;
-(id)view;
-(UIEdgeInsets)contentInset;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setEvenPage:(UIViewController *)arg1 ;
-(void)setOddPage:(UIViewController *)arg1 ;
-(void)turnPages:(long long)arg1 animated:(BOOL)arg2 ;
-(UIViewController *)oddPage;
-(UIViewController *)evenPage;
-(double)turnMargin;
-(void)setTurnMargin:(double)arg1 ;
-(double)turnDuration;
-(void)setTurnDuration:(double)arg1 ;
@end

