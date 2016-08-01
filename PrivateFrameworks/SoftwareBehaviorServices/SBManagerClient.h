/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/SoftwareBehaviorServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareBehaviorServices/SoftwareBehaviorServices-Structs.h>
#import <libobjc.A.dylib/SBManagerClientInterface.h>

@protocol SBManagerClientDelegate;
@class NSXPCConnection;

@interface SBManagerClient : NSObject <SBManagerClientInterface> {

	NSXPCConnection* _serverConnection;
	id<SBManagerClientDelegate> _delegate;
	BOOL _connected;
	BOOL _serverIsExiting;
	int _clientType;
	dispatch_queue_sRef _queue;

}

@property (assign,nonatomic) id<SBManagerClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int clientType;                                    //@synthesize clientType=_clientType - In the implementation block
@property (assign) dispatch_queue_sRef queue;                                   //@synthesize queue=_queue - In the implementation block
-(id)_remoteInterface;
-(void)setDelegate:(id<SBManagerClientDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SBManagerClientDelegate>)delegate;
-(void)invalidate;
-(id)initWithDelegate:(id)arg1 ;
-(dispatch_queue_sRef)queue;
-(void)setQueue:(dispatch_queue_sRef)arg1 ;
-(id)initWithDelegate:(id)arg1 clientType:(int)arg2 ;
-(void)setClientType:(int)arg1 ;
-(void)connectToServerIfNecessary;
-(void)_invalidateConnection;
-(id)_remoteInterfaceWithErrorHandler:(/*^block*/id)arg1 connectIfNecessary:(BOOL)arg2 ;
-(void)_setClientType;
-(id)_remoteInterfaceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)noteConnectionDropped;
-(void)noteServerExiting;
-(int)clientType;
-(void)setSoftwareBehaviorID:(id)arg1 withBundle:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)isSoftwareBehaviorBundleSupported:(/*^block*/id)arg1 ;
-(void)copySoftwareBehaviorValue:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)checkForSoftwareBehaviorBundleUpdate:(/*^block*/id)arg1 ;
@end
