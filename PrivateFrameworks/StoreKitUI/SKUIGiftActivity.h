/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>
#import <libobjc.A.dylib/SKUIGiftViewControllerDelegate.h>

@class SKUIClientContext, SKUIProductPageItem, NSString;

@interface SKUIGiftActivity : UIActivity <SKUIGiftViewControllerDelegate> {

	SKUIClientContext* _clientContext;
	SKUIProductPageItem* _item;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(id)activityViewController;
-(id)_beforeActivity;
-(void)giftViewController:(id)arg1 didFinishWithResult:(BOOL)arg2 ;
-(id)initWithItem:(id)arg1 clientContext:(id)arg2 ;
@end
