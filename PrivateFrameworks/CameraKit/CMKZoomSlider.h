/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:46 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UISlider.h>

@protocol CMKZoomSliderDelegate;
@class NSTimer, UIImageView, UIView;

@interface CMKZoomSlider : UISlider {

	BOOL _minimumAutozooming;
	BOOL _maximumAutozooming;
	BOOL __autozooming;
	id<CMKZoomSliderDelegate> _delegate;
	NSTimer* __visibilityTimer;
	UIImageView* __thumbImageView;
	UIView* __minTrackMaskView;
	UIView* __maxTrackMaskView;

}

@property (assign,nonatomic) id<CMKZoomSliderDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isMinimumAutozooming,nonatomic) BOOL minimumAutozooming;                          //@synthesize minimumAutozooming=_minimumAutozooming - In the implementation block
@property (assign,getter=isMaximumAutozooming,nonatomic) BOOL maximumAutozooming;                          //@synthesize maximumAutozooming=_maximumAutozooming - In the implementation block
@property (nonatomic,readonly) NSTimer * _visibilityTimer;                                                 //@synthesize _visibilityTimer=__visibilityTimer - In the implementation block
@property (assign,setter=_setAutozooming:,getter=_isAutozooming,nonatomic) BOOL _autozooming;              //@synthesize _autozooming=__autozooming - In the implementation block
@property (nonatomic,readonly) UIImageView * _thumbImageView;                                              //@synthesize _thumbImageView=__thumbImageView - In the implementation block
@property (nonatomic,readonly) UIView * _minTrackMaskView;                                                 //@synthesize _minTrackMaskView=__minTrackMaskView - In the implementation block
@property (nonatomic,readonly) UIView * _maxTrackMaskView;                                                 //@synthesize _maxTrackMaskView=__maxTrackMaskView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CMKZoomSliderDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<CMKZoomSliderDelegate>)delegate;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)createThumbView;
-(void)startVisibilityTimer;
-(void)stopVisibilityTimer;
-(void)_commonCMKZoomSliderInitialization;
-(UIView *)_minTrackMaskView;
-(UIView *)_maxTrackMaskView;
-(long long)locationOfTouch:(id)arg1 ;
-(void)_setMinimumAutozooming:(BOOL)arg1 ;
-(void)_setMaximumAutozooming:(BOOL)arg1 ;
-(BOOL)_isMinimumOrMaximumAutozooming;
-(BOOL)isMinimumAutozooming;
-(BOOL)isMaximumAutozooming;
-(void)_updateAutozooming;
-(void)_beginAutozooming;
-(void)_endAutozooming;
-(void)_hideZoomSlider:(id)arg1 ;
-(void)_postHideZoomSliderAnimation;
-(BOOL)visibilityTimerIsValid;
-(void)makeVisible;
-(void)makeInvisible;
-(NSTimer *)_visibilityTimer;
-(BOOL)_isAutozooming;
-(void)_setAutozooming:(BOOL)arg1 ;
-(UIImageView *)_thumbImageView;
@end
