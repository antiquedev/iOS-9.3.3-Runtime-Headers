/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:44 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAPRelayAccessoryDelegate <HAPAccessoryDelegate>
@optional
-(void)accessory:(id)arg1 didUpdateAccessoryIdentifier:(id)arg2;
-(void)accessory:(id)arg1 didUpdateAccessoryAccessToken:(id)arg2;

@required
-(void)accessory:(id)arg1 didUpdateRelayEnabled:(BOOL)arg2;
-(void)accessory:(id)arg1 didUpdateRelayState:(unsigned long long)arg2;
-(void)accessory:(id)arg1 didActivateRelayWithError:(id)arg2;
-(void)accessory:(id)arg1 didPairRelayWithError:(id)arg2;

@end
