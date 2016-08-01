/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIBarItem.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol _UIBarButtonItemViewOwner;
@class NSString, NSSet, UIImage, UIView, NSDictionary, UINavigationItem, UIBarButtonItemGroup, UILayoutGuide, UIToolbarButton, UIColor;

@interface UIBarButtonItem : UIBarItem <NSCoding> {

	NSString* _title;
	NSSet* _possibleTitles;
	SEL _action;
	id _target;
	UIImage* _image;
	UIImage* _landscapeImagePhone;
	UIEdgeInsets _imageInsets;
	UIEdgeInsets _landscapeImagePhoneInsets;
	double _width;
	UIView* _view;
	long long _tag;
	id _appearanceStorage;
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned viewIsCustom : 1;
		unsigned isMinibarView : 1;
		unsigned disableAutosizing : 1;
		unsigned selected : 1;
		unsigned imageHasEffects : 1;
	}  _barButtonItemFlags;
	BOOL _flexible;
	BOOL __showsBackButtonIndicator;
	BOOL __hidden;
	BOOL __viewWantsLetterpressImage;
	BOOL __needsViewUpdateForLetterpressImage;
	BOOL _groupRepresentative;
	double _toolbarCharge;
	double _minimumWidth;
	double _maximumWidth;
	NSSet* _possibleSystemItems;
	NSDictionary* _stylesForSizingTitles;
	UIBarButtonItem* __itemVariation;
	UINavigationItem* __owningNavigationItem;
	UIBarButtonItemGroup* __owningButtonGroup;
	id<_UIBarButtonItemViewOwner> __viewOwner;
	/*^block*/id __autoValidationHandler;
	UILayoutGuide* __popoverLayoutGuide;
	UIBarButtonItemGroup* _buttonGroup;

}

@property (nonatomic,readonly) BOOL _needsViewUpdateForLetterpressImage; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) UIToolbarButton * _toolbarButton; 
@property (setter=_setMiniImage:,getter=_miniImage,nonatomic,retain) UIImage * miniImage; 
@property (assign,setter=_setMiniImageInsets:,getter=_miniImageInsets,nonatomic) UIEdgeInsets miniImageInsets; 
@property (nonatomic,readonly) BOOL isSystemItem; 
@property (nonatomic,readonly) long long systemItem; 
@property (setter=_setPossibleSystemItems:,getter=_possibleSystemItems,nonatomic,copy) NSSet * possibleSystemItems; 
@property (setter=_setPossibleItemVariations:,nonatomic,copy) NSSet * _possibleItemVariations; 
@property (setter=_setItemVariation:,nonatomic,retain) UIBarButtonItem * _itemVariation; 
@property (assign,nonatomic) BOOL selected; 
@property (assign,setter=_setImageHasEffects:,nonatomic) BOOL _imageHasEffects; 
@property (assign,nonatomic) long long style; 
@property (assign,nonatomic) double width; 
@property (nonatomic,copy) NSSet * possibleTitles; 
@property (nonatomic,retain) UIView * customView; 
@property (assign,nonatomic) SEL action;                                                                                         //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) id target;                                                                                   //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) UIColor * tintColor; 
@property (setter=_setPossibleSystemItems:,getter=_possibleSystemItems,nonatomic,copy) NSSet * possibleSystemItems;              //@synthesize possibleSystemItems=_possibleSystemItems - In the implementation block
@property (setter=_setItemVariation:,nonatomic,retain) UIBarButtonItem * _itemVariation;                                         //@synthesize _itemVariation=__itemVariation - In the implementation block
@property (setter=_setStylesForSizingTitles:,nonatomic,copy) NSDictionary * _stylesForSizingTitles;                              //@synthesize stylesForSizingTitles=_stylesForSizingTitles - In the implementation block
@property (assign,setter=_setShowsBackButtonIndicator:,nonatomic) BOOL _showsBackButtonIndicator;                                //@synthesize _showsBackButtonIndicator=__showsBackButtonIndicator - In the implementation block
@property (assign,setter=_setHidden:,nonatomic) BOOL _hidden;                                                                    //@synthesize _hidden=__hidden - In the implementation block
@property (assign,setter=_setOwningNavigationItem:,nonatomic,__weak) UINavigationItem * _owningNavigationItem;                   //@synthesize _owningNavigationItem=__owningNavigationItem - In the implementation block
@property (assign,setter=_setOwningButtonGroup:,nonatomic,__weak) UIBarButtonItemGroup * _owningButtonGroup;                     //@synthesize _owningButtonGroup=__owningButtonGroup - In the implementation block
@property (assign,setter=_setViewOwner:,nonatomic,__weak) id<_UIBarButtonItemViewOwner> _viewOwner;                              //@synthesize _viewOwner=__viewOwner - In the implementation block
@property (setter=_setAutoValidationHandler:,nonatomic,copy) id _autoValidationHandler;                                          //@synthesize _autoValidationHandler=__autoValidationHandler - In the implementation block
@property (setter=_setPopoverLayoutGuide:,nonatomic,retain) UILayoutGuide * _popoverLayoutGuide;                                 //@synthesize _popoverLayoutGuide=__popoverLayoutGuide - In the implementation block
@property (assign,setter=_setToolbarCharge:,nonatomic) double _toolbarCharge;                                                    //@synthesize toolbarCharge=_toolbarCharge - In the implementation block
@property (assign,setter=_setMinimumWidth:,nonatomic) double _minimumWidth;                                                      //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (assign,setter=_setMaximumWidth:,nonatomic) double _maximumWidth;                                                      //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (assign,setter=_setFlexible:,nonatomic) BOOL _flexible;                                                                //@synthesize flexible=_flexible - In the implementation block
@property (nonatomic,readonly) BOOL _viewWantsLetterpressImage;                                                                  //@synthesize _viewWantsLetterpressImage=__viewWantsLetterpressImage - In the implementation block
@property (nonatomic,readonly) BOOL _needsViewUpdateForLetterpressImage;                                                         //@synthesize _needsViewUpdateForLetterpressImage=__needsViewUpdateForLetterpressImage - In the implementation block
@property (nonatomic,__weak,readonly) UIBarButtonItemGroup * buttonGroup;                                                        //@synthesize buttonGroup=_buttonGroup - In the implementation block
@property (nonatomic,readonly) BOOL groupRepresentative;                                                                         //@synthesize groupRepresentative=_groupRepresentative - In the implementation block
+(void)_getSystemItemStyle:(long long*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 action:(SEL*)arg5 forBarStyle:(long long)arg6 landscape:(BOOL)arg7 alwaysBordered:(BOOL)arg8 usingSystemItem:(long long)arg9 usingItemStyle:(long long)arg10 ;
+(Class)classForNavigationButton;
+(Class)classForToolbarButton;
+(id)_appearanceBlindViewClasses;
-(id)scriptingID;
-(void)_updateView;
-(BOOL)_isImageBarButtonItem;
-(double)_leftImagePaddingForEdgeMarginInNavBar;
-(double)_rightImagePaddingForEdgeMarginInNavBar;
-(void)_getSystemItemStyle:(long long*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 action:(SEL*)arg5 forBarStyle:(long long)arg6 landscape:(BOOL)arg7 alwaysBordered:(BOOL)arg8 ;
-(void)_getNavBarEdgeSizeAdjust:(CGSize*)arg1 imageInsets:(UIEdgeInsets*)arg2 landscape:(BOOL)arg3 ;
-(void)_getToolbarEdgeInsets:(UIEdgeInsets*)arg1 imageInsets:(UIEdgeInsets*)arg2 glowInsets:(UIEdgeInsets*)arg3 forBarStyle:(long long)arg4 landscape:(BOOL)arg5 alwaysBordered:(BOOL)arg6 ;
-(id)window;
-(id)view;
-(id)nextResponder;
-(void)setView:(id)arg1 ;
-(BOOL)isCustomViewItem;
-(BOOL)isMinibarView;
-(void)setIsMinibarView:(BOOL)arg1 ;
-(void)_sendAction:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)hasTitle;
-(id)resolvedTitle;
-(BOOL)hasImage;
-(id)_imageForState:(unsigned long long)arg1 metrics:(long long)arg2 position:(long long)arg3 type:(long long)arg4 ;
-(id)_resolveSystemTitle;
-(BOOL)_resolveSystemImage:(id*)arg1 metrics:(long long)arg2 position:(long long)arg3 type:(long long)arg4 ;
-(id)createViewForNavigationItem:(id)arg1 ;
-(BOOL)_shouldBezelSystemButtonImage;
-(double)_width;
-(BOOL)_imageHasEffects;
-(id)createViewForToolbar:(id)arg1 ;
-(void)_applyPositionAdjustmentToSegmentedControl:(id)arg1 ;
-(id)_miniImage;
-(void)_setMiniImage:(id)arg1 ;
-(UIEdgeInsets)_miniImageInsets;
-(void)_setMiniImageInsets:(UIEdgeInsets)arg1 ;
-(UIToolbarButton *)_toolbarButton;
-(void)_setImageHasEffects:(BOOL)arg1 ;
-(id)_foregroundColorForLetterpressWithView:(id)arg1 ;
-(void)_setWidth:(double)arg1 ;
-(void)_connectInterfaceBuilderEventConnection:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)title;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)image;
-(id)target;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(id)_appearanceStorage;
-(BOOL)_needsViewUpdateForLetterpressImage;
-(BOOL)_hidden;
-(BOOL)_showsBackButtonIndicator;
-(void)_setOwningNavigationItem:(id)arg1 ;
-(BOOL)isSystemItem;
-(long long)systemItem;
-(id)landscapeImagePhone;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 barMetrics:(long long)arg3 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(NSDictionary *)_stylesForSizingTitles;
-(void)_setStylesForSizingTitles:(id)arg1 ;
-(id)_possibleSystemItems;
-(double)_minimumWidth;
-(double)_maximumWidth;
-(void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(double)width;
-(void)setAction:(SEL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(void)_setPossibleItemVariations:(id)arg1 ;
-(void)_setItemVariation:(id)arg1 ;
-(id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(id)titleTextAttributesForState:(unsigned long long)arg1 ;
-(UIView *)customView;
-(BOOL)_flexible;
-(void)_setHidden:(BOOL)arg1 ;
-(BOOL)selected;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)imageInsets;
-(id)initWithCustomView:(id)arg1 ;
-(void)setWidth:(double)arg1 ;
-(void)_setToolbarCharge:(double)arg1 ;
-(void)setLandscapeImagePhone:(id)arg1 ;
-(void)setCustomView:(UIView *)arg1 ;
-(id<_UIBarButtonItemViewOwner>)_viewOwner;
-(id)_itemForPresenting;
-(void)setPossibleTitles:(NSSet *)arg1 ;
-(UINavigationItem *)_owningNavigationItem;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(id)initWithImage:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(id)initWithImage:(id)arg1 landscapeImagePhone:(id)arg2 style:(long long)arg3 target:(id)arg4 action:(SEL)arg5 ;
-(id)initWithBarButtonSystemItem:(long long)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)setLandscapeImagePhoneInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)landscapeImagePhoneInsets;
-(UIBarButtonItemGroup *)_owningButtonGroup;
-(void)_setButtonGroup:(id)arg1 isRepresentative:(BOOL)arg2 ;
-(void)_executeValidationHandler;
-(id)_viewForPresenting;
-(CGRect)_rectForPresenting;
-(NSSet *)_possibleItemVariations;
-(id)itemVariation;
-(NSSet *)possibleTitles;
-(void)_setSystemItem:(long long)arg1 ;
-(void)_setPossibleSystemItems:(id)arg1 ;
-(id)backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(void)setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(double)backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(UIOffset)titlePositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(double)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(UIOffset)backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1 ;
-(double)_toolbarCharge;
-(void)_setMinimumWidth:(double)arg1 ;
-(void)_setMaximumWidth:(double)arg1 ;
-(void)_setFlexible:(BOOL)arg1 ;
-(UIBarButtonItem *)_itemVariation;
-(void)_setShowsBackButtonIndicator:(BOOL)arg1 ;
-(void)_setOwningButtonGroup:(id)arg1 ;
-(void)_setViewOwner:(id)arg1 ;
-(id)_autoValidationHandler;
-(void)_setAutoValidationHandler:(/*^block*/id)arg1 ;
-(UILayoutGuide *)_popoverLayoutGuide;
-(void)_setPopoverLayoutGuide:(id)arg1 ;
-(BOOL)_viewWantsLetterpressImage;
-(UIBarButtonItemGroup *)buttonGroup;
-(BOOL)groupRepresentative;
@end
