/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PerformanceAnalysis/PACountedSampleFrame.h>

@class NSMutableSet;

@interface PACountedSampleTreeFrame : PACountedSampleFrame {

	unsigned long long _state;
	NSMutableSet* _children;

}

@property (readonly) NSMutableSet * children; 
@property (readonly) BOOL isLeafFrame; 
@property (assign) unsigned long long state;               //@synthesize state=_state - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSMutableSet *)children;
-(id)initWithSampleFrame:(id)arg1 andState:(unsigned long long)arg2 ;
-(BOOL)isLeafFrame;
@end
