/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WPHomeKitDelegate <NSObject>
@optional
-(void)homeKitStartedScanning:(id)arg1;
-(void)homeKitStoppedScanning:(id)arg1;
-(void)homeKit:(id)arg1 failedToStartScanningWithError:(id)arg2;
-(void)homeKit:(id)arg1 allowDuplicate:(BOOL)arg2;

@required
-(void)homeKitDidUpdateState:(id)arg1;
-(void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;

@end

