/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:11 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIDatePicker;

@interface PSUIDateTimePickerCell : PSTableCell {

	UIDatePicker* _datePicker;

}
+(double)preferredHeight;
-(void)timeZoneChanged:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)datePicker;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end
