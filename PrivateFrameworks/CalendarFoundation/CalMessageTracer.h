/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CalMessageTracer : NSObject
+(void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 signature2:(id)arg4 summarize:(BOOL)arg5 ;
+(void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 result:(int)arg4 ;
+(void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 result:(int)arg4 value:(id)arg5 summarize:(BOOL)arg6 ;
+(void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 signature2:(id)arg4 result:(int)arg5 value:(id)arg6 value2:(id)arg7 value3:(id)arg8 uid:(id)arg9 uid2:(id)arg10 wakeState:(id)arg11 summarize:(BOOL)arg12 ;
+(void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 result:(int)arg4 value:(id)arg5 value2:(id)arg6 uid:(id)arg7 ;
+(void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 result:(int)arg4 value:(id)arg5 ;
+(void)logError:(id)arg1 message:(id)arg2 domain:(id)arg3 uid:(id)arg4 ;
+(void)traceWithDomain:(id)arg1 signature:(id)arg2 signature2:(id)arg3 summarize:(BOOL)arg4 ;
+(void)traceWithDomain:(id)arg1 signature:(id)arg2 result:(int)arg3 ;
+(void)traceWithDomain:(id)arg1 signature:(id)arg2 summarize:(BOOL)arg3 ;
+(void)traceWithDomain:(id)arg1 value:(id)arg2 summarize:(BOOL)arg3 ;
+(void)log:(id)arg1 domain:(id)arg2 summarize:(BOOL)arg3 ;
+(void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 summarize:(BOOL)arg4 ;
+(void)log:(id)arg1 domain:(id)arg2 signature:(id)arg3 result:(int)arg4 value:(id)arg5 value2:(id)arg6 value3:(id)arg7 uid:(id)arg8 uid2:(id)arg9 wakeState:(id)arg10 ;
+(void)logException:(id)arg1 message:(id)arg2 domain:(id)arg3 ;
+(void)logError:(id)arg1 message:(id)arg2 domain:(id)arg3 ;
@end

