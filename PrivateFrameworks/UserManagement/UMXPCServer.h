/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:24 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/UMUserSwitchManagement.h>
#import <libobjc.A.dylib/UMUserSwitchManagement_Private.h>

@class NSString, NSDictionary, NSData, NSMutableArray, NSXPCConnection, NSXPCListener;

@interface UMXPCServer : NSObject <NSXPCListenerDelegate, UMUserSwitchManagement, UMUserSwitchManagement_Private> {

	BOOL _currentlyBroadcastingWillSwitchToUser;
	BOOL _didRegisterStakeholder;
	BOOL _didBroadcastWillSwitchToUser;
	BOOL _didSendTasks;
	unsigned _interruptionRetryCount;
	id _stakeholder;
	unsigned long long _stakeholderType;
	NSString* _machServiceName;
	unsigned long long _unregistrationStatus;
	NSString* _unregistrationReason;
	NSDictionary* _personaSpec;
	NSData* _passcodeData;
	NSData* _contextData;
	/*^block*/id _registrationCompletionHandler;
	/*^block*/id _switchCompletionHandler;
	/*^block*/id _suspendQuotasCompletionHandler;
	/*^block*/id _uploadContentCompletionHandler;
	/*^block*/id _willSwitchCompletionHandler;
	NSMutableArray* _switchBlockingTasks;
	NSMutableArray* _syncTasks;
	/*^block*/id _bubblePopHandler;
	unsigned long long _willSwitchToUserAddedTaskCount;
	NSXPCConnection* _xpcConnection;
	NSXPCListener* _xpcListener;

}

@property (assign,nonatomic,__weak) id stakeholder;                                          //@synthesize stakeholder=_stakeholder - In the implementation block
@property (assign,nonatomic) unsigned long long stakeholderType;                             //@synthesize stakeholderType=_stakeholderType - In the implementation block
@property (nonatomic,retain) NSString * machServiceName;                                     //@synthesize machServiceName=_machServiceName - In the implementation block
@property (assign,nonatomic) unsigned long long unregistrationStatus;                        //@synthesize unregistrationStatus=_unregistrationStatus - In the implementation block
@property (nonatomic,retain) NSString * unregistrationReason;                                //@synthesize unregistrationReason=_unregistrationReason - In the implementation block
@property (nonatomic,retain) NSDictionary * personaSpec;                                     //@synthesize personaSpec=_personaSpec - In the implementation block
@property (nonatomic,retain) NSData * passcodeData;                                          //@synthesize passcodeData=_passcodeData - In the implementation block
@property (nonatomic,retain) NSData * contextData;                                           //@synthesize contextData=_contextData - In the implementation block
@property (nonatomic,copy) id registrationCompletionHandler;                                 //@synthesize registrationCompletionHandler=_registrationCompletionHandler - In the implementation block
@property (nonatomic,copy) id switchCompletionHandler;                                       //@synthesize switchCompletionHandler=_switchCompletionHandler - In the implementation block
@property (nonatomic,copy) id suspendQuotasCompletionHandler;                                //@synthesize suspendQuotasCompletionHandler=_suspendQuotasCompletionHandler - In the implementation block
@property (nonatomic,copy) id uploadContentCompletionHandler;                                //@synthesize uploadContentCompletionHandler=_uploadContentCompletionHandler - In the implementation block
@property (nonatomic,copy) id willSwitchCompletionHandler;                                   //@synthesize willSwitchCompletionHandler=_willSwitchCompletionHandler - In the implementation block
@property (nonatomic,retain) NSMutableArray * switchBlockingTasks;                           //@synthesize switchBlockingTasks=_switchBlockingTasks - In the implementation block
@property (nonatomic,retain) NSMutableArray * syncTasks;                                     //@synthesize syncTasks=_syncTasks - In the implementation block
@property (nonatomic,copy) id bubblePopHandler;                                              //@synthesize bubblePopHandler=_bubblePopHandler - In the implementation block
@property (assign,nonatomic) BOOL currentlyBroadcastingWillSwitchToUser;                     //@synthesize currentlyBroadcastingWillSwitchToUser=_currentlyBroadcastingWillSwitchToUser - In the implementation block
@property (assign,nonatomic) unsigned long long willSwitchToUserAddedTaskCount;              //@synthesize willSwitchToUserAddedTaskCount=_willSwitchToUserAddedTaskCount - In the implementation block
@property (assign,nonatomic) BOOL didRegisterStakeholder;                                    //@synthesize didRegisterStakeholder=_didRegisterStakeholder - In the implementation block
@property (assign,nonatomic) BOOL didBroadcastWillSwitchToUser;                              //@synthesize didBroadcastWillSwitchToUser=_didBroadcastWillSwitchToUser - In the implementation block
@property (assign,nonatomic) BOOL didSendTasks;                                              //@synthesize didSendTasks=_didSendTasks - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSXPCListener * xpcListener;                                    //@synthesize xpcListener=_xpcListener - In the implementation block
@property (assign,nonatomic) unsigned interruptionRetryCount;                                //@synthesize interruptionRetryCount=_interruptionRetryCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(id)init;
-(void)addTask:(id)arg1 ;
-(NSData *)contextData;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)suspendQuotasWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resumeQuotas;
-(void)switchToLoginUserWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)registerCriticalUserSwitchStakeHolder:(id)arg1 ;
-(void)setStakeholderType:(unsigned long long)arg1 ;
-(void)setRegistrationCompletionHandler:(id)arg1 ;
-(void)_registerStakeholder:(id)arg1 ;
-(void)_raiseExceptionIfWeDoNotHaveAStakeholder;
-(id)stakeholder;
-(void)setUnregistrationStatus:(unsigned long long)arg1 ;
-(void)setUnregistrationReason:(NSString *)arg1 ;
-(void)_sendXPCMessageToServerOfType:(unsigned long long)arg1 ;
-(unsigned long long)stakeholderType;
-(void)setStakeholder:(id)arg1 ;
-(void)setDidRegisterStakeholder:(BOOL)arg1 ;
-(void)setSwitchCompletionHandler:(id)arg1 ;
-(void)setPersonaSpec:(NSDictionary *)arg1 ;
-(void)setPasscodeData:(NSData *)arg1 ;
-(void)setContextData:(NSData *)arg1 ;
-(void)setSuspendQuotasCompletionHandler:(id)arg1 ;
-(void)setBubblePopHandler:(id)arg1 ;
-(NSMutableArray *)switchBlockingTasks;
-(void)_raiseExceptionIfWeDoNotHaveASyncStakeholder;
-(NSMutableArray *)syncTasks;
-(BOOL)didRegisterStakeholder;
-(void)_sendXPCMessageToServerOfType:(unsigned long long)arg1 backingObject:(id)arg2 ;
-(void)uploadContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)willSwitchToUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)readyToSwitchToUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)userSwitchTaskListDidUpdate;
-(void)bubbleDidPop;
-(unsigned)interruptionRetryCount;
-(void)setInterruptionRetryCount:(unsigned)arg1 ;
-(void)_resendXPCMessages;
-(void)_tearDownConnectionToUMServer;
-(void)_setUpUMServerXPCConnectionIfNeeded:(id)arg1 ;
-(void)_setUpXPCConnectionToUMServerIfNeeded;
-(int)_pid;
-(id)switchCompletionHandler;
-(NSDictionary *)personaSpec;
-(NSData *)passcodeData;
-(void)setDidSendTasks:(BOOL)arg1 ;
-(id)uploadContentCompletionHandler;
-(void)setUploadContentCompletionHandler:(id)arg1 ;
-(id)registrationCompletionHandler;
-(unsigned long long)unregistrationStatus;
-(NSString *)unregistrationReason;
-(BOOL)currentlyBroadcastingWillSwitchToUser;
-(unsigned long long)willSwitchToUserAddedTaskCount;
-(void)setWillSwitchToUserAddedTaskCount:(unsigned long long)arg1 ;
-(id)willSwitchCompletionHandler;
-(id)bubblePopHandler;
-(id)suspendQuotasCompletionHandler;
-(void)setCurrentlyBroadcastingWillSwitchToUser:(BOOL)arg1 ;
-(void)setDidBroadcastWillSwitchToUser:(BOOL)arg1 ;
-(BOOL)didBroadcastWillSwitchToUser;
-(void)_broadcastWillSwitchToUser:(id)arg1 ;
-(void)setWillSwitchCompletionHandler:(id)arg1 ;
-(void)_broadcastReadyToSwitchToUser:(id)arg1 ;
-(BOOL)didSendTasks;
-(void)setSwitchBlockingTasks:(NSMutableArray *)arg1 ;
-(void)setSyncTasks:(NSMutableArray *)arg1 ;
-(void)registerUserSwitchStakeHolder:(id)arg1 ;
-(void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3 ;
-(NSString *)machServiceName;
-(id)_server;
-(void)removeTask:(id)arg1 ;
-(void)setMachServiceName:(NSString *)arg1 ;
-(void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2 ;
-(NSXPCListener *)xpcListener;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)switchToLoginUserWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resumeSync;
-(void)terminateSyncWithCompletionHandler:(/*^block*/id)arg1 ;
@end

