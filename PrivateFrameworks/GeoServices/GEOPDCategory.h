/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDCategory : PBCodable <NSCopying> {

	int _level;
	NSMutableArray* _localizedNames;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasLevel; 
@property (assign,nonatomic) int level;                                    //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedNames;              //@synthesize localizedNames=_localizedNames - In the implementation block
+(id)categoryNamesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(BOOL)hasCategoryNamesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
+(id)_allCategoriesForPlaceData:(id)arg1 type:(unsigned)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)localizedNames;
-(void)clearLocalizedNames;
-(unsigned long long)localizedNamesCount;
-(void)setLocalizedNames:(NSMutableArray *)arg1 ;
-(BOOL)hasLevel;
-(void)setHasLevel:(BOOL)arg1 ;
-(id)localizedNameAtIndex:(unsigned long long)arg1 ;
-(void)addLocalizedName:(id)arg1 ;
@end

