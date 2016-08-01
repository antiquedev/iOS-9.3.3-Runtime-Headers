/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIView.h>

@class UITextView, CAGradientLayer;

@interface _SFJavaScriptDialogTextView : UIView {

	UITextView* _textView;
	double _preferredMaxLayoutWidth;
	CAGradientLayer* _topGradient;
	CAGradientLayer* _bottomGradient;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)setText:(id)arg1 ;
-(void)layoutMarginsDidChange;
-(CGSize)intrinsicContentSize;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
@end
