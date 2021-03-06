/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/MusicUpNextTableViewDelegate.h>
#import <libobjc.A.dylib/MusicUpNextAggregateDataSourceDelegate.h>
#import <libobjc.A.dylib/MusicUpNextNowPlayingLockupViewDelegate.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class MusicUpNextTableView, NSIndexPath, MusicUpNextNowPlayingLockupView, UIView, MusicClientContext, MusicUpNextAggregateDataSource, MusicAVPlayer, NSString, SKUIClientContext;

@interface MusicUpNextViewController : UIViewController <UITableViewDataSource, MusicUpNextTableViewDelegate, MusicUpNextAggregateDataSourceDelegate, MusicUpNextNowPlayingLockupViewDelegate, MusicClientContextConsuming, UIViewControllerTransitioningDelegate> {

	MusicUpNextTableView* _tableView;
	NSIndexPath* _indexPathForNowPlayingFrame;
	MusicUpNextNowPlayingLockupView* _nowPlayingView;
	UIView* _hairlineView;
	UIEdgeInsets _appliedEdgeInsets;
	BOOL _ignoreUpdates;
	BOOL _isReordering;
	BOOL _loadingCells;
	BOOL _didMutateWhileLoading;
	BOOL _shouldDismissOnItemChange;
	BOOL _hidesNowPlaying;
	BOOL _shouldDismissImmediately;
	MusicClientContext* _clientContext;
	MusicUpNextAggregateDataSource* _dataSource;
	MusicAVPlayer* _player;
	UIView* _itemContentViewContainerView;

}

@property (nonatomic,readonly) MusicUpNextAggregateDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) MusicAVPlayer * player;                                     //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) UIView * itemContentViewContainerView;                    //@synthesize itemContentViewContainerView=_itemContentViewContainerView - In the implementation block
@property (nonatomic,readonly) BOOL shouldDismissOnItemChange;                           //@synthesize shouldDismissOnItemChange=_shouldDismissOnItemChange - In the implementation block
@property (assign,nonatomic) BOOL hidesNowPlaying;                                       //@synthesize hidesNowPlaying=_hidesNowPlaying - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissImmediately;                              //@synthesize shouldDismissImmediately=_shouldDismissImmediately - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
+(id)upNextViewControllerWithPlayer:(id)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(MusicUpNextAggregateDataSource *)dataSource;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)tableView:(id)arg1 willBeginReorderingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndReorderingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didCancelReorderingRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setPlayer:(MusicAVPlayer *)arg1 ;
-(MusicAVPlayer *)player;
-(void)tableView:(id)arg1 didSelectContextualActionsButton:(id)arg2 forCell:(id)arg3 ;
-(void)_preferredContentSizeDidChange:(id)arg1 ;
-(void)_updateTableViewInsets;
-(void)_dismissUpNext;
-(double)_maximumRowHeight;
-(id)_translateTableViewUpdatesToMoveIfPossible:(id)arg1 ;
-(void)_reloadNowPlayingView;
-(UIView *)itemContentViewContainerView;
-(void)_playlistManagerDisableUserQueueModifcationsDidChange:(id)arg1 ;
-(void)setHidesNowPlaying:(BOOL)arg1 ;
-(CGRect)_rectForQueue;
-(CGRect)_rectForNowPlayingAndQueue;
-(void)tableView:(id)arg1 pinView:(id)arg2 didUpdatePinLocation:(long long)arg3 ;
-(void)aggregateDataSource:(id)arg1 didUpdate:(id)arg2 ;
-(void)nowPlayingLockupView:(id)arg1 touchEnded:(id)arg2 ;
-(void)prepareForDismissal;
-(BOOL)shouldDismissOnItemChange;
-(BOOL)hidesNowPlaying;
-(BOOL)shouldDismissImmediately;
-(void)setShouldDismissImmediately:(BOOL)arg1 ;
@end

