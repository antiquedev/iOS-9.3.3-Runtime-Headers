/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSearchResultsCell.h>

@class UISwitch, PSSpecifierAction, PSSpecifier;

@interface PSSearchResultsSwitchCell : PSSearchResultsCell {

	UISwitch* _switch;
	PSSpecifierAction* _action;
	PSSpecifier* _specifier;

}

@property (nonatomic,copy) PSSpecifierAction * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;               //@synthesize specifier=_specifier - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(PSSpecifierAction *)action;
-(void)setAction:(PSSpecifierAction *)arg1 ;
-(void)prepareForReuse;
-(PSSpecifier *)specifier;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(void)reloadValue:(BOOL)arg1 ;
-(void)_switchValueChanged:(id)arg1 ;
@end
