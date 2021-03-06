/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:47 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableDictionary, NSObject;

@interface MSConnection : NSObject {

	NSXPCConnection* _center;
	NSXPCConnection* _noWakeCenter;
	NSMutableDictionary* _serverSideConfig;
	NSObject*<OS_dispatch_queue> _serverSideConfigQueue;
	int _serverSideConfigNotificationToken;

}
+(id)sharedConnection;
-(void)dealloc;
-(id)init;
-(id)pause;
-(void)checkForOutstandingActivities;
-(void)refreshServerSideConfigurationForPersonID:(id)arg1 ;
-(id)_machErrorWithUnderlyingError:(id)arg1 ;
-(void)_waitForMessageToBeSent;
-(void)handleSubscriptionPushForPersonID:(id)arg1 ;
-(void)abortActivitiesForPersonID:(id)arg1 ;
-(BOOL)enqueueAssetCollections:(id)arg1 personID:(id)arg2 outError:(id*)arg3 ;
-(BOOL)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 outError:(id*)arg3 ;
-(void)pollForSubscriptionUpdatesForPersonID:(id)arg1 ;
-(id)serverSideConfigurationForPersonID:(id)arg1 ;
-(void)forgetPersonID:(id)arg1 ;
-(void)resetServerStateForPersonID:(id)arg1 ;
-(void)resume:(id)arg1 ;
-(void)deleteAssetCollections:(id)arg1 personID:(id)arg2 ;
-(void)isBusyCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isBusy;
@end

