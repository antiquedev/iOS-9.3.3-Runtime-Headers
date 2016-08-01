/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:47 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>

@class UIView, SUSegmentedControl, NSArray;

@interface MSPurchasesViewController : SUViewController {

	long long _activeViewControllerIndex;
	UIView* _containerView;
	SUSegmentedControl* _segmentedControl;
	NSArray* _viewControllers;

}
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tabBarControllerDidReselectTabBarItem:(id)arg1 ;
-(id)copyArchivableContext;
-(void)restoreArchivableContext:(id)arg1 ;
-(void)invalidateForMemoryPurge;
-(id)_activeViewController;
-(id)initWithSection:(id)arg1 ;
-(void)_segmentedControlAction:(id)arg1 ;
-(id)_newSegmentedControlWithPageSectionGroup:(id)arg1 ;
-(void)_tabConfigurationChangedNotification:(id)arg1 ;
-(void)_reloadSegmentedControlPlacement;
-(void)_reloadViewControllersWithSection:(id)arg1 ;
-(void)_showActiveViewController;
-(void)_setActiveViewControllerIndex:(long long)arg1 ;
-(id)_newViewControllerForPageSection:(id)arg1 ;
@end
