/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDAppSubscriptionDataCodeAnchorEntity : HDHealthEntity
+(id)columnsDefinition;
+(id)databaseTable;
+(long long)protectionClass;
+(id)tableAliases;
+(BOOL)setAnchor:(id)arg1 forDataCode:(long long)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)_predicateForDataCode:(long long)arg1 ;
+(BOOL)_getAnchorsWithArray:(id)arg1 predicate:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)anchorForDataCode:(long long)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
@end

