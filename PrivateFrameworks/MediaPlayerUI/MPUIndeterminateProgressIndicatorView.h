/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>

@interface MPUIndeterminateProgressIndicatorView : UIView {

	double _progressLineWidth;
	double _progressGap;

}

@property (assign,nonatomic) double progressLineWidth;              //@synthesize progressLineWidth=_progressLineWidth - In the implementation block
@property (assign,nonatomic) double progressGap;                    //@synthesize progressGap=_progressGap - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)tintColorDidChange;
-(void)didMoveToSuperview;
-(void)_willEnterForeground:(id)arg1 ;
-(void)_updateAnimation;
-(double)progressLineWidth;
-(double)progressGap;
-(void)setProgressLineWidth:(double)arg1 ;
-(void)setProgressGap:(double)arg1 ;
@end

