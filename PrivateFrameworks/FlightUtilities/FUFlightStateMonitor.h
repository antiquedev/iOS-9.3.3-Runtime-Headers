/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:35 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface FUFlightStateMonitor : NSObject {

	NSMutableDictionary* _updateInformation;
	NSString* _flightFactoryProvider;

}

@property (copy) NSString * flightFactoryProvider;                         //@synthesize flightFactoryProvider=_flightFactoryProvider - In the implementation block
@property (readonly) NSMutableDictionary * updateInformation;              //@synthesize updateInformation=_updateInformation - In the implementation block
+(id)sharedMonitor;
-(void)dealloc;
-(NSString *)flightFactoryProvider;
-(void)setFlightFactoryProvider:(NSString *)arg1 ;
-(NSMutableDictionary *)updateInformation;
-(void)addTimersForFlight:(id)arg1 flightTicket:(id)arg2 ;
-(id)addObserverForFlight:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(void)removeUpdatesForFlightTicket:(id)arg1 ;
@end

