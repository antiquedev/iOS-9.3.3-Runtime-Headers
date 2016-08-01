/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PASampleThreadData;

@interface PATimestampIndexedSampleThread : NSObject {

	unsigned long long _lastTimestampIndex;
	PASampleThreadData* _sampleThread;

}

@property (assign) unsigned long long lastTimestampIndex;              //@synthesize lastTimestampIndex=_lastTimestampIndex - In the implementation block
@property (readonly) PASampleThreadData * sampleThread;                //@synthesize sampleThread=_sampleThread - In the implementation block
-(void)dealloc;
-(id)debugDescription;
-(unsigned long long)lastTimestampIndex;
-(void)setLastTimestampIndex:(unsigned long long)arg1 ;
-(id)initWithSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(PASampleThreadData *)sampleThread;
@end
