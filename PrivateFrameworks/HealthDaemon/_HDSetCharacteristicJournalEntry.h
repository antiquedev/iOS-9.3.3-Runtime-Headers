/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class HKCharacteristicType;

@interface _HDSetCharacteristicJournalEntry : HDJournalEntry {

	id _value;
	HKCharacteristicType* _dataType;

}

@property (nonatomic,readonly) id value;                                     //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) HKCharacteristicType * dataType;              //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)behavior;
+(void)applyEntries:(id)arg1 withDaemon:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)value;
-(HKCharacteristicType *)dataType;
@end

