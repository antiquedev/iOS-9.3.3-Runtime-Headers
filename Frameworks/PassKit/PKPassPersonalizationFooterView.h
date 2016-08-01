/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol PKPassPersonalizationFooterViewDelegate;
@class UITextView, NSString;

@interface PKPassPersonalizationFooterView : UIView <UITextViewDelegate> {

	UITextView* _privacyTextView;
	id<PKPassPersonalizationFooterViewDelegate> _delegate;

}

@property (assign,nonatomic) id<PKPassPersonalizationFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<PKPassPersonalizationFooterViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<PKPassPersonalizationFooterViewDelegate>)delegate;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(id)initWithOrganizationName:(id)arg1 delegate:(id)arg2 ;
@end
