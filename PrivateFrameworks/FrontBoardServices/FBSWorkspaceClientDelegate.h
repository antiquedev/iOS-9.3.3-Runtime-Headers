/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSWorkspaceClientDelegate <NSObject>
@required
-(void)clientSystemApplicationTerminated:(id)arg1;
-(void)clientBeginTransaction:(id)arg1;
-(void)clientEndTransaction:(id)arg1;
-(void)client:(id)arg1 handleCreateScene:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)client:(id)arg1 handleDestroyScene:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)client:(id)arg1 handleActions:(id)arg2;

@end

