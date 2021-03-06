/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCloudQuotaUI/iCloudQuotaUI-Structs.h>
#import <iCloudQuotaUI/ICQPageView.h>

@protocol ICQPageDelegate;
@class _ICQUpgradeCompletePageSpecification, UILabel, UIButton, ICQLink, UILayoutGuide, NSArray;

@interface ICQUpgradeCompleteView : ICQPageView {

	_ICQUpgradeCompletePageSpecification* _upgradeCompletePageSpecification;
	BOOL _layoutGuideProblem;
	id<ICQPageDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIButton* _checkmarkButton;
	UIButton* _doneButton;
	ICQLink* _doneLink;
	UILayoutGuide* _navigationBarLayoutGuide;
	UILayoutGuide* _aboveCheckLayoutGuide;
	UILayoutGuide* _betweenCheckDoneLayoutGuide;
	UILayoutGuide* _belowDoneLayoutGuide;
	NSArray* _activeConstraints;

}

@property (nonatomic,retain) _ICQUpgradeCompletePageSpecification * upgradeCompletePageSpecification;              //@synthesize upgradeCompletePageSpecification=_upgradeCompletePageSpecification - In the implementation block
@property (assign,nonatomic,__weak) id<ICQPageDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                                               //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIButton * checkmarkButton;                                                           //@synthesize checkmarkButton=_checkmarkButton - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                                                                //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,readonly) ICQLink * doneLink;                                                                 //@synthesize doneLink=_doneLink - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * navigationBarLayoutGuide;                                           //@synthesize navigationBarLayoutGuide=_navigationBarLayoutGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * aboveCheckLayoutGuide;                                              //@synthesize aboveCheckLayoutGuide=_aboveCheckLayoutGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * betweenCheckDoneLayoutGuide;                                        //@synthesize betweenCheckDoneLayoutGuide=_betweenCheckDoneLayoutGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * belowDoneLayoutGuide;                                               //@synthesize belowDoneLayoutGuide=_belowDoneLayoutGuide - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                                                          //@synthesize activeConstraints=_activeConstraints - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<ICQPageDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<ICQPageDelegate>)delegate;
-(UILabel *)titleLabel;
-(UILabel *)messageLabel;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDoneButton:(UIButton *)arg1 ;
-(UIButton *)doneButton;
-(void)doneButtonTapped:(id)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(NSArray *)activeConstraints;
-(_ICQUpgradeCompletePageSpecification *)upgradeCompletePageSpecification;
-(void)setUpgradeCompletePageSpecification:(_ICQUpgradeCompletePageSpecification *)arg1 ;
-(double)_superGetTopMargin;
-(UILayoutGuide *)navigationBarLayoutGuide;
-(ICQLink *)doneLink;
-(id)upgradeCompleteSpecification;
-(UIButton *)checkmarkButton;
-(void)setCheckmarkButton:(UIButton *)arg1 ;
-(UILayoutGuide *)aboveCheckLayoutGuide;
-(UILayoutGuide *)betweenCheckDoneLayoutGuide;
-(UILayoutGuide *)belowDoneLayoutGuide;
@end

