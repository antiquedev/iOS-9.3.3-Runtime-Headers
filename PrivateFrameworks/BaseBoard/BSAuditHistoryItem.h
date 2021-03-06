/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:24 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSDate, NSString;

@interface BSAuditHistoryItem : NSObject <BSXPCCoding> {

	NSDate* _date;
	NSString* _description;

}

@property (nonatomic,retain) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * value;                        //@synthesize description=_description - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)itemWithString:(id)arg1 ;
+(id)itemWithWithFormat:(id)arg1 ;
-(id)itemWithString:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSDate *)date;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)_timeFormatter;
@end

