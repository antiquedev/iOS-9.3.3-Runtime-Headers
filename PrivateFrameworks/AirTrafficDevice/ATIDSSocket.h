/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATSocket.h>

@class IDSDeviceConnection, IDSDevice, ATIDSService;

@interface ATIDSSocket : ATSocket {

	IDSDeviceConnection* _deviceConnection;
	unsigned _wifiWriteBufferSize;
	unsigned _btWriteBufferSize;
	IDSDevice* _device;
	ATIDSService* _service;
	long long _priority;

}

@property (nonatomic,readonly) IDSDevice * device;                  //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) ATIDSService * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) long long priority;                  //@synthesize priority=_priority - In the implementation block
-(void)dealloc;
-(long long)priority;
-(BOOL)open;
-(ATIDSService *)service;
-(id)initWithDevice:(id)arg1 service:(id)arg2 priority:(long long)arg3 ;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
-(void)addTransportUpgradeException;
-(void)removeTransportUpgradeException;
-(void)closeDescriptor;
-(IDSDevice *)device;
@end

