/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol UIKeyCommandDiscoverabilityHUDColumnViewDelegate;
@class UIKeyCommandDiscoverabilityHUDVisualStyle, UIFont, UILayoutGuide, NSArray;

@interface UIKeyCommandDiscoverabilityHUDColumnView : UIView {

	id<UIKeyCommandDiscoverabilityHUDColumnViewDelegate> _delegate;
	UIKeyCommandDiscoverabilityHUDVisualStyle* _visualStyle;
	UIFont* _baseFont;
	UILayoutGuide* _descriptionColumnLayoutGuide;
	UILayoutGuide* _modifiersColumnLayoutGuide;
	UILayoutGuide* _inputStringColumnLayoutGuide;
	NSArray* _descriptionViews;
	NSArray* _modifierViews;
	NSArray* _inputStringViews;
	NSArray* _constraints;
	double _fontScaleFactor;

}

@property (assign,nonatomic) double fontScaleFactor;              //@synthesize fontScaleFactor=_fontScaleFactor - In the implementation block
-(void)setFontScaleFactor:(double)arg1 ;
-(void)setKeyCommands:(id)arg1 ;
-(id)initWithVisualStyle:(id)arg1 delegate:(id)arg2 ;
-(double)fontScaleFactor;
@end
