/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMediaFeeder.h>

@class NSArray;

@interface OKMediaFeederURLs : OKMediaFeeder {

	NSArray* _mediaURLs;

}
+(id)supportedSettings;
+(BOOL)isRemote;
+(id)mediaFeederWithMediaObjects:(id)arg1 ;
+(id)mediaFeederWithMediaURLs:(id)arg1 ;
+(BOOL)supportLiveUpdates;
-(void)dealloc;
-(id)init;
-(id)initWithSettings:(id)arg1 ;
-(id)initWithMediaObjects:(id)arg1 ;
-(id)initWithMediaURLs:(id)arg1 ;
-(id)feederSettings;
-(BOOL)canBePersisted;
-(id)reloadMediaObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfMediaObjects;
-(id)mediaObjectsAtIndexes:(id)arg1 ;
-(id)mediaObjectURLsAtIndexes:(id)arg1 ;
-(id)indexesForMediaObjects:(id)arg1 ;
@end

