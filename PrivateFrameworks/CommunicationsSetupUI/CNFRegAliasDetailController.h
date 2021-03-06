/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegListController.h>

@class CNFRegAlias, PSSpecifier, NSArray;

@interface CNFRegAliasDetailController : CNFRegListController {

	CNFRegAlias* _alias;
	PSSpecifier* _removeGroupSpecifier;
	PSSpecifier* _removeButtonSpecifier;
	NSArray* _resendValidationSpecifierGroup;

}

@property (nonatomic,retain) CNFRegAlias * alias;              //@synthesize alias=_alias - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)bundle;
-(void)setAlias:(CNFRegAlias *)arg1 ;
-(CNFRegAlias *)alias;
-(id)specifierList;
-(void)_setupEventHandlers;
-(void)_buildSpecifierCache:(id)arg1 ;
-(id)initWithRegController:(id)arg1 alias:(id)arg2 ;
-(void)_showAliasValidationError:(id)arg1 ;
-(BOOL)_shouldShowResendButton;
-(void)setRemoveAliasEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_showResendGroup:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)showRemoveAliasConfirmation;
-(void)_updateUIAnimated:(BOOL)arg1 ;
-(void)forgetAliasTapped:(id)arg1 ;
-(void)resendValidationEmailTapped:(id)arg1 ;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidEnterBackground;
@end

