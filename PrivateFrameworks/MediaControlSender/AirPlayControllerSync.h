/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AirPlayControllerSync
@required
-(int)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 response:(id*)arg4;
-(int)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3;
-(void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3;
-(id)getProperty:(id)arg1 qualifier:(id)arg2 status:(int*)arg3;

@end

