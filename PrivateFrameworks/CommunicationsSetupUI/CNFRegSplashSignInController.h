/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegSignInController.h>
#import <libobjc.A.dylib/AKTapToSignInViewControllerDelegate.h>

@class CNFRegSigninLearnMoreView, AKTapToSignInViewController, NSString;

@interface CNFRegSplashSignInController : CNFRegSignInController <AKTapToSignInViewControllerDelegate> {

	CNFRegSigninLearnMoreView* _signInView;
	AKTapToSignInViewController* _akSignInVC;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)specifierList;
-(id)_existingLearnMoreViewForSpecifier:(id)arg1 ;
-(id)_existingLearnMoreViewForSection:(long long)arg1 ;
-(id)_controllerToPresentOn;
-(void)tapToSignInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3 ;
-(void)_handleTimeout;
@end
