/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOSearchAttribution : PBCodable <NSCopying> {

	NSMutableArray* _attributionURLs;
	NSString* _sourceIdentifier;
	unsigned _sourceVersion;

}

@property (nonatomic,retain) NSString * sourceIdentifier;                   //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned sourceVersion;                        //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributionURLs;              //@synthesize attributionURLs=_attributionURLs - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)sourceVersion;
-(void)setSourceVersion:(unsigned)arg1 ;
-(NSMutableArray *)attributionURLs;
-(void)setAttributionURLs:(NSMutableArray *)arg1 ;
-(NSString *)sourceIdentifier;
-(void)clearAttributionURLs;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(unsigned long long)attributionURLsCount;
-(void)addAttributionURLs:(id)arg1 ;
-(id)attributionURLsAtIndex:(unsigned long long)arg1 ;
@end
