/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface GEOMapsServerMetadata : PBCodable <NSCopying> {

	NSMutableArray* _mapsSearchResults;
	NSMutableArray* _suggestionEntryMetadataDisplayeds;
	NSData* _suggestionEntryMetadataTappedOn;

}

@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadataTappedOn; 
@property (nonatomic,retain) NSData * suggestionEntryMetadataTappedOn;                        //@synthesize suggestionEntryMetadataTappedOn=_suggestionEntryMetadataTappedOn - In the implementation block
@property (nonatomic,retain) NSMutableArray * suggestionEntryMetadataDisplayeds;              //@synthesize suggestionEntryMetadataDisplayeds=_suggestionEntryMetadataDisplayeds - In the implementation block
@property (nonatomic,retain) NSMutableArray * mapsSearchResults;                              //@synthesize mapsSearchResults=_mapsSearchResults - In the implementation block
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
-(void)clearMapsSearchResults;
-(void)setSuggestionEntryMetadataDisplayeds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)suggestionEntryMetadataDisplayeds;
-(NSData *)suggestionEntryMetadataTappedOn;
-(BOOL)hasSuggestionEntryMetadataTappedOn;
-(void)clearSuggestionEntryMetadataDisplayeds;
-(unsigned long long)mapsSearchResultsCount;
-(void)setMapsSearchResults:(NSMutableArray *)arg1 ;
-(id)suggestionEntryMetadataDisplayedAtIndex:(unsigned long long)arg1 ;
-(id)mapsSearchResultAtIndex:(unsigned long long)arg1 ;
-(void)setSuggestionEntryMetadataTappedOn:(NSData *)arg1 ;
-(void)addMapsSearchResult:(id)arg1 ;
-(NSMutableArray *)mapsSearchResults;
-(void)addSuggestionEntryMetadataDisplayed:(id)arg1 ;
-(unsigned long long)suggestionEntryMetadataDisplayedsCount;
@end

