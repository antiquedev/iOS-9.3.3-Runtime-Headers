/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIScrollView.h>

@class MFComposeHeaderView, MFComposeSubjectView;

@interface _MFMailComposePlaceholderView : UIScrollView {

	MFComposeHeaderView* _toField;
	MFComposeHeaderView* _multiView;
	MFComposeSubjectView* _subjectView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setSubject:(id)arg1 ;
@end

