/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUISearchFieldDelegate.h>

@class SKUIClientContext, UIViewController, SKUISearchFieldController, NSString;

@interface SKUIIPadSearchController : NSObject <SKUISearchFieldDelegate> {

	SKUIClientContext* _clientContext;
	UIViewController* _parentViewController;
	SKUISearchFieldController* _searchFieldController;

}

@property (nonatomic,__weak,readonly) UIViewController * parentViewController;                 //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) SKUISearchFieldController * searchFieldController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UIViewController *)parentViewController;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)initWithParentViewController:(id)arg1 ;
-(id)newSearchFieldBarItem;
-(void)reloadSearchField;
-(void)_termDidChangeNotification:(id)arg1 ;
-(id)_searchFieldController;
-(void)setNumberOfSearchResults:(long long)arg1 ;
-(void)searchFieldController:(id)arg1 requestSearch:(id)arg2 ;
-(SKUISearchFieldController *)searchFieldController;
-(void)setSearchFieldPlaceholderText:(id)arg1 ;
-(void)setSearchFieldText:(id)arg1 ;
@end
