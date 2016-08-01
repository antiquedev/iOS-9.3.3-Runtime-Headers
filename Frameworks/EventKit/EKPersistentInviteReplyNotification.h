/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKPersistentObject.h>

@class EKPersistentCalendar, NSString, NSDate;

@interface EKPersistentInviteReplyNotification : EKPersistentObject

@property (nonatomic,readonly) EKPersistentCalendar * calendar; 
@property (nonatomic,readonly) NSString * calendarName; 
@property (nonatomic,readonly) NSString * shareeDisplayName; 
@property (nonatomic,readonly) NSString * shareeAddress; 
@property (nonatomic,readonly) NSString * shareeFirstName; 
@property (nonatomic,readonly) NSString * shareeLastName; 
@property (nonatomic,readonly) unsigned long long status; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) BOOL alerted; 
+(id)defaultPropertiesToLoad;
+(id)relations;
-(EKPersistentCalendar *)calendar;
-(unsigned long long)status;
-(NSString *)shareeDisplayName;
-(NSString *)shareeAddress;
-(NSString *)shareeFirstName;
-(NSString *)shareeLastName;
-(NSString *)calendarName;
-(NSDate *)creationDate;
-(BOOL)alerted;
@end
