/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:23 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptInterface.h>

@class SKProductPageViewController;

@interface SKScriptInterface : SUScriptInterface {

	SKProductPageViewController* _parentProductPageViewController;

}

@property (assign,nonatomic,__weak) SKProductPageViewController * parentProductPageViewController;              //@synthesize parentProductPageViewController=_parentProductPageViewController - In the implementation block
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(id)makeStoreSheetRequest;
-(void)showStoreSheetWithRequest:(id)arg1 animated:(BOOL)arg2 ;
-(void)setParentProductPageViewController:(SKProductPageViewController *)arg1 ;
-(SKProductPageViewController *)parentProductPageViewController;
@end

