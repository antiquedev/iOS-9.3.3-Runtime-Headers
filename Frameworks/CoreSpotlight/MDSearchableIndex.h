/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:14 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CSSearchableIndex.h>

@interface MDSearchableIndex : CSSearchableIndex
+(id)sharedInstance;
-(void)performIndexJob:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)performIndexJob:(id)arg1 ;
-(void)indexSearchableItems:(id)arg1 stateInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

