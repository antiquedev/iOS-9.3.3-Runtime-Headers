/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BFFLocaleCountry : NSObject {

	NSString* _name;
	NSString* _code;

}

@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * code;              //@synthesize code=_code - In the implementation block
+(/*^block*/id)comparatorForLocale:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)code;
-(void)setCode:(NSString *)arg1 ;
@end
