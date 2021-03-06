/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:35 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTFrameworkProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSMutableDictionary, RTRoutineManagerRegistrantApplicationPrediction, NSString, RTEventAgentHelper;

@interface RTRoutineManager : NSObject <RTFrameworkProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;
	/*^block*/id _visitHandler;
	NSMutableDictionary* _scenarioTriggerHandlers;
	RTRoutineManagerRegistrantApplicationPrediction* _applicationPredictionRegistrant;
	/*^block*/id _nextPredictedLocationsOfInterestHandler;
	NSString* _restorationIdentifier;
	RTEventAgentHelper* _eventAgentHelper;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                                                //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,copy) id visitHandler;                                                                                  //@synthesize visitHandler=_visitHandler - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * scenarioTriggerHandlers;                                                    //@synthesize scenarioTriggerHandlers=_scenarioTriggerHandlers - In the implementation block
@property (nonatomic,retain) RTRoutineManagerRegistrantApplicationPrediction * applicationPredictionRegistrant;              //@synthesize applicationPredictionRegistrant=_applicationPredictionRegistrant - In the implementation block
@property (nonatomic,copy) id nextPredictedLocationsOfInterestHandler;                                                       //@synthesize nextPredictedLocationsOfInterestHandler=_nextPredictedLocationsOfInterestHandler - In the implementation block
@property (nonatomic,retain) NSString * restorationIdentifier;                                                               //@synthesize restorationIdentifier=_restorationIdentifier - In the implementation block
@property (nonatomic,retain) RTEventAgentHelper * eventAgentHelper;                                                          //@synthesize eventAgentHelper=_eventAgentHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
+(id)modeOfTransportationToString:(long long)arg1 ;
+(id)routineModeToString:(long long)arg1 ;
-(void)createConnection;
-(void)dealloc;
-(id)init;
-(NSString *)restorationIdentifier;
-(void)setRestorationIdentifier:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchRoutineEnabledWithHandler:(/*^block*/id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithRestorationIdentifier:(id)arg1 ;
-(id)visitHandler;
-(void)startMonitoringVisitsWithHandler:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)scenarioTriggerHandlers;
-(void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(RTRoutineManagerRegistrantApplicationPrediction *)applicationPredictionRegistrant;
-(void)startMonitoringForPredictedApplicationsUsingPredicate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)nextPredictedLocationsOfInterestHandler;
-(void)startMonitoringForPredictedApplicationsWithHandler:(/*^block*/id)arg1 ;
-(void)setVisitHandler:(id)arg1 ;
-(void)setNextPredictedLocationsOfInterestHandler:(id)arg1 ;
-(void)handleDaemonStart;
-(void)fetchMonitoredScenarioTriggerTypesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchPredictedExitDatesWithHandler:(/*^block*/id)arg1 ;
-(void)startMonitoringNextPredictedLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(void)setScenarioTriggerHandlers:(NSMutableDictionary *)arg1 ;
-(void)setApplicationPredictionRegistrant:(RTRoutineManagerRegistrantApplicationPrediction *)arg1 ;
-(RTEventAgentHelper *)eventAgentHelper;
-(void)setEventAgentHelper:(RTEventAgentHelper *)arg1 ;
-(void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1 ;
-(void)fetchLocationOfInterestAtCachedLocationWithHandler:(/*^block*/id)arg1 ;
-(void)fetchLocationOfInterestAtCurrentLocationWithHandler:(/*^block*/id)arg1 ;
-(void)fetchNextPredictedLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)_createConnection;
-(void)stopMonitoringForPredictedApplications;
-(void)fetchPathToDiagnosticFilesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchBBPluginSupportedWithHandler:(/*^block*/id)arg1 ;
-(void)setRoutineEnabled:(BOOL)arg1 ;
-(void)onVisit:(id)arg1 withError:(id)arg2 ;
-(void)onScenarioTrigger:(id)arg1 withError:(id)arg2 ;
-(void)onPredictedApplications:(id)arg1 error:(id)arg2 ;
-(void)onNextPredictedLocationsOfInterest:(id)arg1 withError:(id)arg2 ;
-(void)clearRoutine;
-(void)stopMonitoringVisits;
-(void)stopMonitoringNextPredictedLocationsOfInterest;
-(void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)fetchLocationsOfInterestOfType:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchAllLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)fetchPredictedConditionsForAction:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchRoutineModeFromLocation:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchLocationOfInterestAtLocation:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
@end

