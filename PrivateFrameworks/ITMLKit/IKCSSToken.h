/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface IKCSSToken : NSObject {

	unsigned short _charValue;
	long long _type;
	double _doubleValue;
	NSString* _stringValue;
	NSDictionary* _properties;

}

@property (assign,nonatomic) long long type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned short charValue;               //@synthesize charValue=_charValue - In the implementation block
@property (assign,nonatomic) double doubleValue;                     //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,retain) NSString * stringValue;                 //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,retain) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
-(id)description;
-(double)doubleValue;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
-(void)setCharValue:(unsigned short)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(unsigned short)charValue;
@end
