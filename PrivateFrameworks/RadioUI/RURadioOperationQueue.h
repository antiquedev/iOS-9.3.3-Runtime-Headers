/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, RadioRequestContext, NSObject;

@interface RURadioOperationQueue : NSObject {

	NSOperationQueue* _operationQueue;
	RadioRequestContext* _requestContext;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,copy) RadioRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
+(id)sharedQueue;
-(id)init;
-(void)addStationWithRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)preparePlaybackWithOperation:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)addGetTracksOperation:(id)arg1 ;
-(void)loadRadioConfigurationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getHistoryWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_cancelPlaybackPreparation;
-(void)_preparePlaybackWithPrepareRadioPlaybackOperation:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)cancelPlaybackPreparation;
-(void)sendPlayEventCollection:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(RadioRequestContext *)requestContext;
-(void)setRequestContext:(RadioRequestContext *)arg1 ;
-(void)_addOperation:(id)arg1 ;
@end

