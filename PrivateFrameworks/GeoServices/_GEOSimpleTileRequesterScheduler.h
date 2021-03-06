/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _GEOSimpleTileRequesterScheduler : NSObject {

	NSMutableArray* _requesters;
	NSMutableArray* _inProgress;

}
+(id)sharedScheduler;
-(void)dealloc;
-(void)addTileRequester:(id)arg1 ;
-(void)removeTileRequester:(id)arg1 ;
-(void)sendNextRequestIfNecessary;
-(void)operationDidStop:(id)arg1 ;
@end

