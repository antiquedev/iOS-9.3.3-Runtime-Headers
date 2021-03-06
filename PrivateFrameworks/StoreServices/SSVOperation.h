/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSOperation, NSMutableArray, NSObject;

@interface SSVOperation : NSOperation {

	NSOperation* _childOperation;
	NSMutableArray* _childRequests;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(void)addChildRequest:(id)arg1 ;
-(void)removeChildRequest:(id)arg1 ;
-(void)cancel;
-(id)init;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(void)runChildOperation:(id)arg1 ;
@end

