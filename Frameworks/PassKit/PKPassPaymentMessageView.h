/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKPassFooterContentView.h>

@class UILabel, UIButton, UIImageView, UIView;

@interface PKPassPaymentMessageView : PKPassFooterContentView {

	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UIButton* _button;
	UIImageView* _alertImageView;
	UIView* _bottomRule;

}
-(void)dealloc;
-(void)layoutSubviews;
-(id)_titleLabel;
-(id)_bodyLabel;
-(id)_actionButton;
-(id)initWithPass:(id)arg1 title:(id)arg2 body:(id)arg3 buttonTitle:(id)arg4 action:(SEL)arg5 isImportant:(BOOL)arg6 ;
-(id)_bottomRule;
-(id)_alertImage;
-(id)initWithPass:(id)arg1 title:(id)arg2 body:(id)arg3 ;
@end
