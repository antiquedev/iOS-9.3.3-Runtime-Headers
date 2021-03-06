/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVAdItem.h>

@class RURadioAdTrack, RadioStation, NSString;

@interface RURadioAdAVItem : MPAVAdItem {

	RURadioAdTrack* _adTrack;
	RadioStation* _station;
	NSString* _stationHash;
	long long _stationID;
	NSString* _stationName;
	NSString* _stationStringID;

}

@property (nonatomic,retain) RadioStation * station;                    //@synthesize station=_station - In the implementation block
@property (nonatomic,readonly) NSString * stationHash;                  //@synthesize stationHash=_stationHash - In the implementation block
@property (nonatomic,readonly) long long stationID;                     //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,readonly) NSString * stationName;                  //@synthesize stationName=_stationName - In the implementation block
@property (nonatomic,readonly) NSString * stationStringID;              //@synthesize stationStringID=_stationStringID - In the implementation block
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(unsigned long long)type;
-(id)title;
-(long long)stationID;
-(void)loadAssetAndPlayerItem;
-(BOOL)isStreamable;
-(BOOL)supportsSkip;
-(id)titlesForTime:(double)arg1 ;
-(void)reevaluateType;
-(BOOL)usesSubscriptionLease;
-(void)_applyLoudnessInfo;
-(NSString *)stationHash;
-(RadioStation *)station;
-(id)album;
-(id)mpuReporting_externalID;
-(unsigned long long)mpuReporting_itemType;
-(BOOL)mpuReporting_shouldReportPlayEventsToStore;
-(id)initWithAdTrack:(id)arg1 ;
-(id)mainTitle;
-(NSString *)stationStringID;
-(BOOL)supportsLikedState;
-(BOOL)isLikedStateEnabled;
-(id)adTrack;
-(void)setStation:(RadioStation *)arg1 ;
-(void)_loadMediaItemWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(NSString *)stationName;
@end

