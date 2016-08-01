/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:46 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSArray, PLOperator, NSObject, NSMutableArray, NSString;

@interface PLNSNotificationOperatorComposition : NSObject {

	NSArray* _notificationNames;
	/*^block*/id _operatorBlock;
	PLOperator* _operator;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _notificationObservers;

}

@property (retain) NSArray * notificationNames;                         //@synthesize notificationNames=_notificationNames - In the implementation block
@property (readonly) NSString * notificationName; 
@property (nonatomic,copy) id operatorBlock;                            //@synthesize operatorBlock=_operatorBlock - In the implementation block
@property (__weak) PLOperator * operator;                               //@synthesize operator=_operator - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (retain) NSMutableArray * notificationObservers;              //@synthesize notificationObservers=_notificationObservers - In the implementation block
-(void)dealloc;
-(NSArray *)notificationNames;
-(id)operatorBlock;
-(void)setOperatorBlock:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg1 forNotifications:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)initWithOperator:(id)arg1 forNotifications:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(NSMutableArray *)notificationObservers;
-(void)setNotificationNames:(NSArray *)arg1 ;
-(void)setNotificationObservers:(NSMutableArray *)arg1 ;
-(PLOperator *)operator;
-(void)listenForNotifications:(BOOL)arg1 ;
-(id)initWithOperator:(id)arg1 forNotification:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)setOperator:(PLOperator *)arg1 ;
-(id)initWithWorkQueue:(id)arg1 forNotification:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSString *)notificationName;
@end
