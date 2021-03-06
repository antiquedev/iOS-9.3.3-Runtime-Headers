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

@class PBUnknownFields, GEOURLRouteHandle, NSMutableArray;

@interface GEOStorageRouteRequestStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOURLRouteHandle* _routeHandle;
	int _transportType;
	NSMutableArray* _waypoints;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,retain) NSMutableArray * waypoints;                     //@synthesize waypoints=_waypoints - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteHandle; 
@property (nonatomic,retain) GEOURLRouteHandle * routeHandle;                //@synthesize routeHandle=_routeHandle - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(void)setRouteHandle:(GEOURLRouteHandle *)arg1 ;
-(BOOL)hasRouteHandle;
-(GEOURLRouteHandle *)routeHandle;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)waypointsCount;
-(id)waypointsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)waypoints;
-(void)setWaypoints:(NSMutableArray *)arg1 ;
-(void)addWaypoints:(id)arg1 ;
-(void)clearWaypoints;
@end

