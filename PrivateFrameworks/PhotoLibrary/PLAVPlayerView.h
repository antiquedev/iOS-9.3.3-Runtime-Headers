/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:11 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLayer;

@interface PLAVPlayerView : UIView {

	unsigned long long _scaleMode;

}

@property (nonatomic,retain) AVPlayer * player; 
@property (assign,nonatomic) unsigned long long scaleMode;                //@synthesize scaleMode=_scaleMode - In the implementation block
@property (nonatomic,readonly) CGRect videoRect; 
@property (nonatomic,retain,readonly) AVPlayerLayer * layer; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)scaleMode;
-(void)setScaleMode:(unsigned long long)arg1 ;
-(void)setScaleMode:(unsigned long long)arg1 duration:(double)arg2 ;
-(CGRect)videoRect;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayer *)player;
@end
