/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:18 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AITTarget.framework/AITTarget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AITTargetObserverRecord : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _handler;
	id _observer;

}

@property (readonly) id observer;                                     //@synthesize observer=_observer - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) id handler;                                      //@synthesize handler=_handler - In the implementation block
+(id)recordForObserver:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)observer;
-(id)handler;
-(NSObject*<OS_dispatch_queue>)queue;
@end

