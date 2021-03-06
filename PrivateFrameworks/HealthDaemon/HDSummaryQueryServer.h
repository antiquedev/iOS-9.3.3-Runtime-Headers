/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@class HDListByTypeStatisticsBuilder, NSDate, _HKFilter;

@interface HDSummaryQueryServer : HDQueryServer {

	BOOL _deliversUpdates;
	HDListByTypeStatisticsBuilder* _statisticsBuilder;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDate* _noonStartDate;
	NSDate* _noonEndDate;
	_HKFilter* _noonStartEndFilter;

}
-(id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 healthDaemon:(id)arg6 ;
-(void)_queue_start;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(BOOL)_shouldListenForUpdates;
-(BOOL)_shouldObserveAllSampleTypes;
-(void)_queue_fetchAndDeliverAllStatisticsInitial:(BOOL)arg1 ;
-(void)_queue_updateStatisticsWithObjects:(id)arg1 anchor:(id)arg2 ;
-(BOOL)_shouldAcceptSample:(id)arg1 ;
@end

