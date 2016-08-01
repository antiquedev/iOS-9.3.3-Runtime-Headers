/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKMedicalIDEditorCell.h>

@class _HKEmergencyContact;

@interface HKMedicalIDEditorEmergencyContactCell : HKMedicalIDEditorCell {

	_HKEmergencyContact* _contact;

}

@property (nonatomic,retain) _HKEmergencyContact * contact;              //@synthesize contact=_contact - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(_HKEmergencyContact *)contact;
-(void)setContact:(_HKEmergencyContact *)arg1 ;
-(id)formattedValue;
-(void)_labelTapped:(id)arg1 ;
@end
