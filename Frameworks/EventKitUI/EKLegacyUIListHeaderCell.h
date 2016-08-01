/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:15 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@class EKLegacyUIListHeaderCellContentView;

@interface EKLegacyUIListHeaderCell : UIView {

	EKLegacyUIListHeaderCellContentView* _contentView;
	BOOL _showWeekNumber;

}

@property (assign,nonatomic) double date; 
@property (assign,nonatomic) BOOL indentsForDots; 
@property (nonatomic,readonly) BOOL reusable; 
@property (assign,nonatomic) BOOL showWeekNumber;              //@synthesize showWeekNumber=_showWeekNumber - In the implementation block
-(void)setOpaque:(BOOL)arg1 ;
-(void)setNeedsDisplay;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)date;
-(id)_backgroundImage;
-(void)setDate:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 date:(double)arg2 ;
-(void)setShowWeekNumber:(BOOL)arg1 ;
-(void)setIndentsForDots:(BOOL)arg1 ;
-(BOOL)indentsForDots;
-(BOOL)reusable;
-(BOOL)showWeekNumber;
@end
