/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:23 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRDiffBase.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSDictionary;

@interface NRDeviceDiff : NRDiffBase <NSFastEnumeration> {

	NSDictionary* _diffPropertyDiffs;

}

@property (nonatomic,readonly) NSDictionary * diffPropertyDiffs;              //@synthesize diffPropertyDiffs=_diffPropertyDiffs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)initWithDiffPropertyDiffs:(id)arg1 ;
-(id)diffPropertyDiffForName:(id)arg1 ;
-(NSDictionary *)diffPropertyDiffs;
-(id)allPropertyNames;
@end
