/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CBAttribute.h>

@class CBCharacteristic, CBPeripheral, NSNumber;

@interface CBDescriptor : CBAttribute {

	CBCharacteristic* _characteristic;
	id _value;
	CBPeripheral* _peripheral;
	NSNumber* _handle;

}

@property (assign,nonatomic) CBCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (retain) id value;                                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) CBPeripheral * peripheral;                    //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,readonly) NSNumber * handle;                            //@synthesize handle=_handle - In the implementation block
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithCharacteristic:(id)arg1 dictionary:(id)arg2 ;
-(id)handleValueUpdated:(id)arg1 ;
-(id)handleValueWritten:(id)arg1 ;
-(NSNumber *)handle;
-(void)setCharacteristic:(CBCharacteristic *)arg1 ;
-(CBPeripheral *)peripheral;
-(CBCharacteristic *)characteristic;
@end
