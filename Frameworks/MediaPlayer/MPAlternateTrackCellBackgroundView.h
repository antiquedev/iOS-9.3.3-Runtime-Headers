/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>

@class UIBezierPath;

@interface MPAlternateTrackCellBackgroundView : UIView {

	int _sectionLocation;
	UIBezierPath* _fillPath;
	UIBezierPath* _strokePath;

}

@property (assign,nonatomic) int sectionLocation;              //@synthesize sectionLocation=_sectionLocation - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSectionLocation:(int)arg1 animated:(BOOL)arg2 ;
-(int)sectionLocation;
-(void)setSectionLocation:(int)arg1 ;
-(void)_invalidatePaths;
-(void)_createBezierPathWithCornerRadius:(double)arg1 bottomRadius:(double)arg2 animating:(BOOL)arg3 ;
@end

