/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriUIViewController;
#import <SiriUI/SiriUI-Structs.h>
@class NSUUID, UIViewController, AceObject;

@interface SiriUITranscriptItem : NSObject {

	BOOL _snippetViewControllerHasBeenUnloaded;
	NSUUID* _itemIdentifier;
	UIViewController*<SiriUIViewController> _viewController;
	AceObject* _aceObject;
	CGRect _previousFrame;

}

@property (nonatomic,copy) NSUUID * itemIdentifier;                                               //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) UIViewController*<SiriUIViewController> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) AceObject * aceObject;                                               //@synthesize aceObject=_aceObject - In the implementation block
@property (assign,nonatomic) BOOL snippetViewControllerHasBeenUnloaded;                           //@synthesize snippetViewControllerHasBeenUnloaded=_snippetViewControllerHasBeenUnloaded - In the implementation block
@property (assign,nonatomic) CGRect previousFrame;                                                //@synthesize previousFrame=_previousFrame - In the implementation block
+(id)transcriptItemWithAceObject:(id)arg1 ;
-(id)description;
-(void)setViewController:(UIViewController*<SiriUIViewController>)arg1 ;
-(UIViewController*<SiriUIViewController>)viewController;
-(id)initWithAceObject:(id)arg1 ;
-(NSUUID *)itemIdentifier;
-(void)setItemIdentifier:(NSUUID *)arg1 ;
-(AceObject *)aceObject;
-(void)setAceObject:(AceObject *)arg1 ;
-(BOOL)snippetViewControllerHasBeenUnloaded;
-(void)setSnippetViewControllerHasBeenUnloaded:(BOOL)arg1 ;
-(CGRect)previousFrame;
-(void)setPreviousFrame:(CGRect)arg1 ;
@end
