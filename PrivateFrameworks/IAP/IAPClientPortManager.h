/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:17 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/IAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSMutableDictionary, NSObject;

@interface IAPClientPortManager : NSObject {

	NSMutableDictionary* _portList;
	NSObject*<OS_dispatch_queue> _portListQueue;
	BOOL _iaptransportdIsRunning;
	NSObject*<OS_xpc_object> _iaptransportdXPCConnection;

}

@property (assign,nonatomic) BOOL iaptransportdIsRunning; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)sendData:(id)arg1 data:(char*)arg2 length:(unsigned short)arg3 ;
-(int)unregisterSendDataHandler:(id)arg1 ;
-(BOOL)iaptransportdIsRunning;
-(void)setIaptransportdIsRunning:(BOOL)arg1 ;
-(int)registerSendDataHandler:(id)arg1 queue:(id)arg2 sendBlock:(/*^block*/id)arg3 ;
-(int)forwardAccessoryDataToIAP:(id)arg1 data:(const char*)arg2 length:(unsigned short)arg3 ;
-(void)reRegisterHandlers;
@end

