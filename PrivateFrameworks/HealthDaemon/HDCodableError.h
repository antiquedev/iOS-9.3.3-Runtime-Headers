/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableError : PBCodable <NSCopying> {

	long long _code;
	NSString* _domain;
	NSString* _localizedDescription;
	SCD_Struct_HD16 _has;

}

@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                            //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasCode; 
@property (assign,nonatomic) long long code;                               //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedDescription; 
@property (nonatomic,retain) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)localizedDescription;
-(NSString *)domain;
-(long long)code;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(BOOL)hasLocalizedDescription;
-(BOOL)hasDomain;
-(void)setCode:(long long)arg1 ;
-(void)setHasCode:(BOOL)arg1 ;
-(BOOL)hasCode;
-(void)setDomain:(NSString *)arg1 ;
@end
