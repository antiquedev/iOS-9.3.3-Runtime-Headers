/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:28 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EventKit/EventKit-Structs.h>
@class NSString, NSArray;

@interface EKRecurrenceHelper : NSObject {

	NSString* _specifier;
	BOOL _dirty;
	BOOL _parsed;
	NSArray* _daysOfTheWeek;
	NSArray* _daysOfTheMonth;
	NSArray* _daysOfTheYear;
	NSArray* _weeksOfTheYear;
	NSArray* _monthsOfTheYear;
	NSArray* _setPositions;

}

@property (nonatomic,readonly) BOOL isDirty; 
@property (nonatomic,copy) NSString * specifier; 
@property (nonatomic,copy) NSArray * daysOfTheWeek; 
@property (nonatomic,copy) NSArray * daysOfTheMonth; 
@property (nonatomic,copy) NSArray * daysOfTheYear; 
@property (nonatomic,copy) NSArray * weeksOfTheYear; 
@property (nonatomic,copy) NSArray * monthsOfTheYear; 
@property (nonatomic,copy) NSArray * setPositions; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)specifier;
-(void)setSpecifier:(NSString *)arg1 ;
-(void)revert;
-(void)_updateSpecifier;
-(void)_clearArrays;
-(void)_parseSpecifierIfNeeded;
-(void)_appendDaysOfTheWeek:(id)arg1 toSpecifier:(id)arg2 ;
-(void)_appendIndexList:(id)arg1 toSpecifier:(id)arg2 propertyKey:(unsigned short)arg3 ;
-(id)_parseDaysOfWeek:(SCD_Struct_EK11*)arg1 range:(SCD_Struct_EK10)arg2 ;
-(id)_parseIndexList:(SCD_Struct_EK11*)arg1 range:(SCD_Struct_EK10)arg2 ;
-(BOOL)isDirty;
-(NSArray *)daysOfTheMonth;
-(void)setDaysOfTheMonth:(NSArray *)arg1 ;
-(NSArray *)monthsOfTheYear;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(NSArray *)daysOfTheWeek;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(NSArray *)setPositions;
-(void)setSetPositions:(NSArray *)arg1 ;
-(NSArray *)daysOfTheYear;
-(NSArray *)weeksOfTheYear;
-(void)setDaysOfTheYear:(NSArray *)arg1 ;
-(void)setWeeksOfTheYear:(NSArray *)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
@end
