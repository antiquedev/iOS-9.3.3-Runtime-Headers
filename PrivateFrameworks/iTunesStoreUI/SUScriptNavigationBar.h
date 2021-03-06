/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptNavigationItem, NSArray, SUScriptButton, NSString;

@interface SUScriptNavigationBar : SUScriptObject

@property (readonly) SUScriptNavigationItem * backNavigationItem; 
@property (assign) long long barStyle; 
@property (readonly) NSArray * navigationItems; 
@property (copy) id translucent; 
@property (readonly) SUScriptNavigationItem * topNavigationItem; 
@property (readonly) long long barStyleBlack; 
@property (readonly) long long barStyleDefault; 
@property (retain) SUScriptButton * leftButton; 
@property (retain) id<SUScriptNavigationItem> leftItem; 
@property (retain) NSString * prompt; 
@property (retain) SUScriptButton * rightButton; 
@property (retain) id<SUScriptNavigationItem> rightItem; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(id)init;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(NSArray *)navigationItems;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(void)setTranslucent:(id)arg1 ;
-(void)setNavigationItems:(NSArray *)arg1 ;
-(id)attributeKeys;
-(void)setLeftButton:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightButton:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithNativeNavigationBar:(id)arg1 ;
-(id)_nativeNavigationBar;
-(void)tearDownUserInterface;
-(id)_topNavigationItem;
-(id<SUScriptNavigationItem>)leftItem;
-(id<SUScriptNavigationItem>)rightItem;
-(void)setLeftItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)_copyTopNavigationItem;
-(id)buttonWithTitle:(id)arg1 style:(id)arg2 target:(id)arg3 action:(id)arg4 ;
-(SUScriptNavigationItem *)backNavigationItem;
-(void)setBackNavigationItem:(SUScriptNavigationItem *)arg1 ;
-(void)setLeftItem:(id<SUScriptNavigationItem>)arg1 ;
-(void)setRightItem:(id<SUScriptNavigationItem>)arg1 ;
-(void)setTopNavigationItem:(SUScriptNavigationItem *)arg1 ;
-(SUScriptNavigationItem *)topNavigationItem;
-(id)translucent;
-(long long)barStyleBlack;
-(long long)barStyleDefault;
-(void)setLeftButton:(SUScriptButton *)arg1 ;
-(void)setRightButton:(SUScriptButton *)arg1 ;
-(SUScriptButton *)leftButton;
-(SUScriptButton *)rightButton;
-(id)scriptAttributeKeys;
-(id)_className;
@end

