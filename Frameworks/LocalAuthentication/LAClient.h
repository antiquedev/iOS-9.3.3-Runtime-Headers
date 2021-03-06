/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:14 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LAContextXPC.h>
#import <libobjc.A.dylib/LAContextCallbackXPC.h>

@protocol LAContextXPC, LAUIDelegate;
@class NSXPCConnection, NSError, NSMutableArray, NSData;

@interface LAClient : NSObject <LAContextXPC, LAContextCallbackXPC> {

	id<LAContextXPC> _remoteContext;
	NSXPCConnection* _daemonConnection;
	NSError* _permanentError;
	NSMutableArray* _callInvalidationBlocks;
	BOOL _shouldRecoverConnection;
	NSData* _externalizedContext;
	id<LAUIDelegate> _uiDelegate;
	NSData* _connectToContext;

}

@property (readonly) NSData * externalizedContext;                            //@synthesize externalizedContext=_externalizedContext - In the implementation block
@property (assign,nonatomic,__weak) id<LAUIDelegate> uiDelegate;              //@synthesize uiDelegate=_uiDelegate - In the implementation block
@property (nonatomic,retain) NSData * connectToContext;                       //@synthesize connectToContext=_connectToContext - In the implementation block
+(id)_queue;
+(void)_performInvalidationBlocks:(id)arg1 ;
+(void)clientWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
+(id)_recoveryQueue;
+(id)clientWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(void)prearmTouchIdWithReply:(/*^block*/id)arg1 ;
-(void)evaluateACL:(id)arg1 operation:(long long)arg2 options:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)enterPassword:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setCredential:(id)arg1 type:(long long)arg2 onlyGet:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)serverPropertyForOption:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)setServerPropertyForOption:(long long)arg1 value:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)invalidatedWithError:(id)arg1 ;
-(void)_scheduleRecovery;
-(BOOL)_setPermanentError:(id)arg1 ;
-(void)setupDaemonConnection:(id)arg1 remoteContext:(id)arg2 constInfo:(id)arg3 ;
-(void)setConnectToContext:(NSData *)arg1 ;
-(void)_recoverConnection;
-(void)_performCallId:(/*^block*/id)arg1 finally:(/*^block*/id)arg2 ;
-(id)_updateOptions:(id)arg1 ;
-(void)_performCallBool:(/*^block*/id)arg1 finally:(/*^block*/id)arg2 ;
-(id)serverPropertyForOption:(long long)arg1 error:(id*)arg2 ;
-(BOOL)setServerPropertyForOption:(long long)arg1 value:(id)arg2 error:(id*)arg3 ;
-(NSData *)connectToContext;
-(void)setUiDelegate:(id<LAUIDelegate>)arg1 ;
-(id<LAUIDelegate>)uiDelegate;
-(NSData *)externalizedContext;
-(void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

