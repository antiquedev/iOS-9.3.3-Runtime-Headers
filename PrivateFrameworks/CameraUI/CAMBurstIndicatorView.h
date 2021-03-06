/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel;

@interface CAMBurstIndicatorView : UIView {

	UIView* __backgroundView;
	UILabel* __countLabel;
	long long __numberOfPhotos;

}

@property (nonatomic,readonly) UIView * _backgroundView;               //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) UILabel * _countLabel;                  //@synthesize _countLabel=__countLabel - In the implementation block
@property (nonatomic,readonly) long long _numberOfPhotos;              //@synthesize _numberOfPhotos=__numberOfPhotos - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(UIView *)_backgroundView;
-(void)reset;
-(CGSize)intrinsicContentSize;
-(long long)_numberOfPhotos;
-(void)_performCaptureAnimation;
-(void)incrementWithCaptureAnimation:(BOOL)arg1 ;
-(void)finishIncrementingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateCountLabelWithNumberOfPhotos;
-(void)_commonCAMAvalancheIndicatorViewInitialization;
-(UILabel *)_countLabel;
@end

