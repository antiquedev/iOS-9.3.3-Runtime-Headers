/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UITriggerVC/UITriggerVC-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CSLUIPBUIPluginTriggerResponse : PBCodable <NSCopying> {

	NSString* _errorString;
	BOOL _success;

}

@property (assign,nonatomic) BOOL success;                        //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorString; 
@property (nonatomic,retain) NSString * errorString;              //@synthesize errorString=_errorString - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(NSString *)errorString;
-(void)setErrorString:(NSString *)arg1 ;
-(BOOL)hasErrorString;
@end
