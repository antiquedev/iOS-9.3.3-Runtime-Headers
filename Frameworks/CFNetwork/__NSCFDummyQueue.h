/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface __NSCFDummyQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
-(int)maxConcurrentOperationCount;
-(void)dealloc;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(id)initWithDispatchQueue:(id)arg1 ;
@end

