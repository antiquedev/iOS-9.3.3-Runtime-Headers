/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/TPLCDBar.h>

@class UIView, TPLCDTextView, TPLCDSubImageView;

@interface TPLCDView : TPLCDBar {

	UIView* _contentView;
	TPLCDTextView* _textView;
	TPLCDTextView* _labelView;
	TPLCDSubImageView* _imageView;
	unsigned _layoutAsLabelled : 1;
	BOOL _verticallyCenterTextViewIfLabelless;

}

@property (assign) BOOL verticallyCenterTextViewIfLabelless;              //@synthesize verticallyCenterTextViewIfLabelless=_verticallyCenterTextViewIfLabelless - In the implementation block
+(double)defaultTextFontSize;
+(double)defaultLabelFontSize;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setShadowColor:(id)arg1 ;
-(CGRect)_labelFrame;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(CGRect)fullSizedContentViewFrame;
-(id)initWithDefaultSizeForOrientation:(long long)arg1 ;
-(id)subImage;
-(void)_resetContentViewFrame;
-(double)_textVInset;
-(double)_labelVInset;
-(BOOL)shouldCenterContentView;
-(BOOL)verticallyCenterTextViewIfLabelless;
-(CGRect)_text1Frame;
-(BOOL)shouldCenterText;
-(CGRect)_imageViewFrame;
-(void)setLabel:(id)arg1 animate:(BOOL)arg2 ;
-(void)didFinishAnimatingLCDLabelFadeOut:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)setContentsAlpha:(double)arg1 ;
-(void)setTextFontSize:(double)arg1 ;
-(void)setLabelFontSize:(double)arg1 ;
-(void)blinkLabel;
-(void)setSubImage:(id)arg1 ;
-(void)setLayoutAsLabelled:(BOOL)arg1 ;
-(void)setSecondLineText:(id)arg1 ;
-(id)secondLineText;
-(void)setVerticallyCenterTextViewIfLabelless:(BOOL)arg1 ;
-(CGRect)textFrame;
@end

