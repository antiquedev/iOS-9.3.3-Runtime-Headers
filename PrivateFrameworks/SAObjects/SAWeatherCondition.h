/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:16 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAWeatherCondition : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * conditionCode; 
@property (assign,nonatomic) long long conditionCodeIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)condition;
+(id)conditionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)conditionCode;
-(void)setConditionCode:(NSString *)arg1 ;
-(long long)conditionCodeIndex;
-(void)setConditionCodeIndex:(long long)arg1 ;
-(id)encodedClassName;
@end

