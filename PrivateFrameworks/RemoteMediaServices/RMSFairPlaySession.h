/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
@interface RMSFairPlaySession : NSObject {

	FPSAPContextOpaque_Ref _sessionToken;
	FairPlayHWInfo_ _hardwareInfo;
	BOOL _handshakeComplete;

}

@property (getter=isHandshakeComplete,nonatomic,readonly) BOOL handshakeComplete;              //@synthesize handshakeComplete=_handshakeComplete - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(id)_hexStringForData:(id)arg1 ;
-(BOOL)_getHardwareInfo:(FairPlayHWInfo_*)arg1 ;
-(id)handshakeIterationWithData:(id)arg1 ;
-(id)handshakeData;
-(id)headerForURL:(id)arg1 ;
-(BOOL)isHandshakeComplete;
@end

