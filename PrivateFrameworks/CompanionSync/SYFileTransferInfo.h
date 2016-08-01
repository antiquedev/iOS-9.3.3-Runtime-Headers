/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SYMessageHeader;

@interface SYFileTransferInfo : PBCodable <NSCopying> {

	unsigned long long _decompressedFileSize;
	NSString* _endAnchor;
	SYMessageHeader* _header;
	NSString* _startAnchor;

}

@property (nonatomic,retain) SYMessageHeader * header;                             //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) BOOL hasStartAnchor; 
@property (nonatomic,retain) NSString * startAnchor;                               //@synthesize startAnchor=_startAnchor - In the implementation block
@property (nonatomic,readonly) BOOL hasEndAnchor; 
@property (nonatomic,retain) NSString * endAnchor;                                 //@synthesize endAnchor=_endAnchor - In the implementation block
@property (assign,nonatomic) unsigned long long decompressedFileSize;              //@synthesize decompressedFileSize=_decompressedFileSize - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)decompressedFileSize;
-(void)setDecompressedFileSize:(unsigned long long)arg1 ;
-(void)setStartAnchor:(NSString *)arg1 ;
-(BOOL)hasStartAnchor;
-(void)setEndAnchor:(NSString *)arg1 ;
-(BOOL)hasEndAnchor;
-(NSString *)startAnchor;
-(NSString *)endAnchor;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
@end
