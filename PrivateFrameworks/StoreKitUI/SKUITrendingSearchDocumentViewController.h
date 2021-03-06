/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:28 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class SKUITrendingSearchView, SKUITrendingSearchTemplateElement, NSString;

@interface SKUITrendingSearchDocumentViewController : SKUIViewController <SKUIDocumentViewController> {

	SKUITrendingSearchView* _resultsView;
	SKUITrendingSearchTemplateElement* _template;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)_tapAction:(id)arg1 ;
-(void)documentDidUpdate:(id)arg1 ;
-(id)initWithTemplateElement:(id)arg1 ;
-(void)_reloadResultsView;
-(UIEdgeInsets)_resultsViewContentInset;
-(void)_resultButtonAction:(id)arg1 ;
@end

