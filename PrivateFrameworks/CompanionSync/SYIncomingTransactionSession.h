/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/SYSession.h>

@class SYChangeMessage;

@interface SYIncomingTransactionSession : SYSession {

	unsigned long long _activity;
	SYChangeMessage* _message;
	/*^block*/id _completion;
	BOOL canRestart;
	BOOL canRollback;
	long long state;

}
-(void)cancel;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)start:(/*^block*/id)arg1 ;
-(unsigned long long)protocolVersion;
-(BOOL)isResetSync;
-(BOOL)isSending;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)didCompleteSession;
-(void)_sendComplete;
-(void)_sendChanges;
-(void)_sendCancelled;
-(id)initWithService:(id)arg1 transaction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)wasCancelled;
@end
