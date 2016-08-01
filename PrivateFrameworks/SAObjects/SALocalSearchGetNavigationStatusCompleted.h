/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:17 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SABackgroundContextObject.h>

@class SALocalSearchAceNavigationEta, SALocalSearchRoute, NSString;

@interface SALocalSearchGetNavigationStatusCompleted : SABaseCommand <SAServerBoundCommand, SABackgroundContextObject>

@property (nonatomic,retain) SALocalSearchAceNavigationEta * nextManeuverEta; 
@property (nonatomic,retain) SALocalSearchAceNavigationEta * overallEta; 
@property (nonatomic,retain) SALocalSearchRoute * route; 
@property (nonatomic,copy) NSString * trafficIncidentAlertType; 
@property (nonatomic,copy) NSString * volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)getNavigationStatusCompleted;
+(id)getNavigationStatusCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setRoute:(SALocalSearchRoute *)arg1 ;
-(SALocalSearchRoute *)route;
-(id)groupIdentifier;
-(SALocalSearchAceNavigationEta *)nextManeuverEta;
-(void)setNextManeuverEta:(SALocalSearchAceNavigationEta *)arg1 ;
-(SALocalSearchAceNavigationEta *)overallEta;
-(void)setOverallEta:(SALocalSearchAceNavigationEta *)arg1 ;
-(NSString *)trafficIncidentAlertType;
-(void)setTrafficIncidentAlertType:(NSString *)arg1 ;
-(void)setVolume:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)volume;
@end
