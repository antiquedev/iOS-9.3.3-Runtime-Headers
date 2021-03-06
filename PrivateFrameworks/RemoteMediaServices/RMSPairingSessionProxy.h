/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteMediaServices/RMSSessionProxy.h>
#import <libobjc.A.dylib/RMSPairingSession.h>

@protocol RMSPairingSessionDelegate;
@class RMSIDSClient, NSString;

@interface RMSPairingSessionProxy : RMSSessionProxy <RMSPairingSession> {

	RMSIDSClient* _idsClient;
	BOOL _pairing;
	id<RMSPairingSessionDelegate> _delegate;
	NSString* _passcode;
	NSString* _advertisedAppName;
	NSString* _advertisedDeviceName;
	NSString* _advertisedDeviceModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<RMSPairingSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * passcode;                                        //@synthesize passcode=_passcode - In the implementation block
@property (nonatomic,retain) NSString * advertisedAppName;                               //@synthesize advertisedAppName=_advertisedAppName - In the implementation block
@property (nonatomic,retain) NSString * advertisedDeviceName;                            //@synthesize advertisedDeviceName=_advertisedDeviceName - In the implementation block
@property (nonatomic,retain) NSString * advertisedDeviceModel;                           //@synthesize advertisedDeviceModel=_advertisedDeviceModel - In the implementation block
-(void)setDelegate:(id<RMSPairingSessionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<RMSPairingSessionDelegate>)delegate;
-(NSString *)passcode;
-(void)setPasscode:(NSString *)arg1 ;
-(void)_handleSessionDidEndNotification:(id)arg1 ;
-(void)heartbeatDidFail;
-(void)endPairing;
-(void)beginPairing;
-(NSString *)advertisedAppName;
-(void)setAdvertisedAppName:(NSString *)arg1 ;
-(NSString *)advertisedDeviceName;
-(void)setAdvertisedDeviceName:(NSString *)arg1 ;
-(NSString *)advertisedDeviceModel;
-(void)setAdvertisedDeviceModel:(NSString *)arg1 ;
-(void)_handleDidPairWithServiceNotification:(id)arg1 ;
-(void)_handlePairingDidFailNotification:(id)arg1 ;
-(void)_notifyDelegatePairingFailed;
@end

