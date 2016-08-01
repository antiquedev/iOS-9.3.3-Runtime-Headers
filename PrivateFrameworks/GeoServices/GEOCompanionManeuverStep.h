/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSMutableArray;


@protocol GEOCompanionManeuverStep <NSObject>
@property (assign,nonatomic) BOOL hasManeuverType; 
@property (assign,nonatomic) int maneuverType; 
@property (nonatomic,retain) NSMutableArray * maneuverNames; 
@property (nonatomic,retain) NSMutableArray * signposts; 
@property (assign,nonatomic) BOOL hasJunctionType; 
@property (assign,nonatomic) int junctionType; 
@property (nonatomic,readonly) unsigned long long junctionElementsCount; 
@property (nonatomic,readonly) SCD_Struct_GE68* junctionElements; 
@property (nonatomic,readonly) int transportType; 
@required
-(int)transportType;
-(NSMutableArray *)maneuverNames;
-(unsigned long long)junctionElementsCount;
-(BOOL)hasJunctionType;
-(void)setSignposts:(id)arg1;
-(id)maneuverNameAtIndex:(unsigned long long)arg1;
-(NSMutableArray *)signposts;
-(unsigned long long)maneuverNamesCount;
-(void)setHasJunctionType:(BOOL)arg1;
-(void)clearSignposts;
-(BOOL)hasManeuverType;
-(void)setJunctionType:(int)arg1;
-(int)junctionType;
-(void)setManeuverNames:(id)arg1;
-(void)setHasManeuverType:(BOOL)arg1;
-(unsigned long long)signpostsCount;
-(void)setManeuverType:(int)arg1;
-(id)signpostAtIndex:(unsigned long long)arg1;
-(int)maneuverType;
-(void)addSignpost:(id)arg1;
-(void)clearManeuverNames;
-(void)addManeuverName:(id)arg1;
-(SCD_Struct_GE68*)junctionElements;

@end
