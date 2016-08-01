/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, FLFollowUpController;

@interface HMDFollowUpController : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	FLFollowUpController* _followUpController;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) FLFollowUpController * followUpController;              //@synthesize followUpController=_followUpController - In the implementation block
-(id)init;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)clearFollowUpItems;
-(FLFollowUpController *)followUpController;
-(void)postFollowUpItemForIncomingInvitations:(id)arg1 ;
-(void)setFollowUpController:(FLFollowUpController *)arg1 ;
-(void)_postFollowUpItemWithUniqueIdentifier:(id)arg1 title:(id)arg2 informativeText:(id)arg3 actionURL:(id)arg4 actionLabelText:(id)arg5 showNotification:(BOOL)arg6 ;
-(void)_clearFollowUpItems;
-(void)postFollowUpItemWithUniqueIdentifier:(id)arg1 title:(id)arg2 informativeText:(id)arg3 actionURL:(id)arg4 actionLabelText:(id)arg5 showNotification:(BOOL)arg6 ;
@end
