/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface _SYXpcTransactionManager : NSObject {

	NSMutableDictionary* _table;
	NSObject*<OS_dispatch_queue> _syncQ;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)beginTransactionWithName:(id)arg1 file:(id)arg2 line:(int)arg3 andFunction:(id)arg4 ;
-(void)endTransactionWithName:(id)arg1 file:(id)arg2 line:(int)arg3 andFunction:(id)arg4 ;
-(void)logOpenTransactions;
@end

