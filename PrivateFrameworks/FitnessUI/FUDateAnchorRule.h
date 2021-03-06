/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FUDateAnchorRule : NSObject {

	unsigned long long _calendarUnit;
	long long _roundingValue;

}

@property (assign,nonatomic) unsigned long long calendarUnit;              //@synthesize calendarUnit=_calendarUnit - In the implementation block
@property (assign,nonatomic) long long roundingValue;                      //@synthesize roundingValue=_roundingValue - In the implementation block
-(unsigned long long)calendarUnit;
-(void)setRoundingValue:(long long)arg1 ;
-(void)setCalendarUnit:(unsigned long long)arg1 ;
-(id)generateAnchorFromDate:(id)arg1 ;
-(id)_floorDate:(id)arg1 ;
-(id)_anchorDiffComponents;
-(BOOL)_componentsSuccessful:(id)arg1 ;
-(long long)roundingValue;
@end

