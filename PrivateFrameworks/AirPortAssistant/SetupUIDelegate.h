/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SetupUIDelegate
@optional
-(void)setupTaskResponseWithResult:(int)arg1 responseDict:(id)arg2 forController:(id)arg3;
-(void)setupRPCResponseWithResult:(int)arg1 rpcSelector:(int)arg2 responseDict:(id)arg3 forController:(id)arg4;
-(void)setupMonitoringMessage:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
-(void)setupMonitoredSettingChanged:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
-(void)setupProgressUpdated:(int)arg1 status:(int)arg2 paramDict:(id)arg3 forController:(id)arg4;
-(void)setupCompleteWithResult:(int)arg1 baseStationInfo:(id)arg2 forController:(id)arg3;

@end
