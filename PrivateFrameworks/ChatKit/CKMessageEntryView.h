/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CKMessageEntryContentViewDelegate.h>
#import <libobjc.A.dylib/CKAudioRecorderDelegate.h>
#import <libobjc.A.dylib/CKActionMenuControllerDelegate.h>
#import <libobjc.A.dylib/CKMessageEntryRecordedAudioViewDelegate.h>
#import <libobjc.A.dylib/CKActionMenuGestureRecognizerButtonDelegate.h>
#import <libobjc.A.dylib/CKInlineAudioReplyButtonDelegate.h>

@protocol CKMessageEntryViewDelegate;
@class NSArray, CKConversation, CKMessageEntryContentView, CKMessageEntryWaveformView, UIButton, CKActionMenuGestureRecognizerButton, CKInlineAudioReplyButtonController, UILabel, _UITextFieldRoundedRectBackgroundViewNeue, _UIBackdropView, UIView, CKAudioRecorder, CKComposition, CKActionMenuController, CKMessageEntryRecordedAudioView, CKMessageEntryAudioHintView, CAMShutterButton, NSString;

@interface CKMessageEntryView : UIView <CKMessageEntryContentViewDelegate, CKAudioRecorderDelegate, CKActionMenuControllerDelegate, CKMessageEntryRecordedAudioViewDelegate, CKActionMenuGestureRecognizerButtonDelegate, CKInlineAudioReplyButtonDelegate> {

	BOOL _shouldShowSendButton;
	BOOL _shouldShowSubject;
	BOOL _shouldShowPhotoButton;
	BOOL _shouldShowCharacterCount;
	BOOL _shouldKnockoutCoverView;
	BOOL _keyboardVisible;
	BOOL _composingRecipient;
	BOOL _failedRecipients;
	BOOL _unreachableEmergencyRecipient;
	BOOL _sendingMessage;
	BOOL _characterCountHidden;
	BOOL _shouldCenterCharacterCount;
	BOOL _performingActionMenuSend;
	NSArray* _keyCommands;
	id<CKMessageEntryViewDelegate> _delegate;
	CKConversation* _conversation;
	CKMessageEntryContentView* _contentView;
	CKMessageEntryWaveformView* _waveformView;
	UIButton* _photoButton;
	UIButton* _sendButton;
	UIButton* _audioButton;
	CKActionMenuGestureRecognizerButton* _audioActionMenuGestureRecognizerButton;
	CKActionMenuGestureRecognizerButton* _videoActionMenuGestureRecognizerButton;
	CKInlineAudioReplyButtonController* _audioReplyButton;
	UILabel* _characterCountLabel;
	_UITextFieldRoundedRectBackgroundViewNeue* _coverView;
	_UIBackdropView* _backdropView;
	UIView* _knockoutCoverView;
	UIView* _dividerLine;
	CKAudioRecorder* _recorder;
	CKComposition* _audioComposition;
	CKActionMenuController* _audioActionMenuController;
	CKMessageEntryRecordedAudioView* _recordedAudioView;
	CKMessageEntryAudioHintView* _audioHintView;
	unsigned long long _displayMode;
	UIView* _contentClipView;
	CAMShutterButton* _shutterButton;
	CGSize _photoButtonSize;
	CGSize _sendButtonSize;
	CGSize _audioButtonSize;
	CGSize _characterCountSize;
	CGSize _waveformViewSize;
	UIEdgeInsets _marginInsets;
	UIEdgeInsets _coverInsets;
	UIEdgeInsets _sendTextAlignmentInsets;
	CGRect _audioActionMenuFrame;

}

@property (assign,nonatomic) UIEdgeInsets marginInsets;                                                                 //@synthesize marginInsets=_marginInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets coverInsets;                                                                  //@synthesize coverInsets=_coverInsets - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSendButton;                                                                 //@synthesize shouldShowSendButton=_shouldShowSendButton - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSubject;                                                                    //@synthesize shouldShowSubject=_shouldShowSubject - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPhotoButton;                                                                //@synthesize shouldShowPhotoButton=_shouldShowPhotoButton - In the implementation block
@property (assign,nonatomic) BOOL shouldShowCharacterCount;                                                             //@synthesize shouldShowCharacterCount=_shouldShowCharacterCount - In the implementation block
@property (assign,nonatomic) id<CKMessageEntryViewDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                                             //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) CKMessageEntryContentView * contentView;                                                   //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) CKComposition * composition; 
@property (nonatomic,retain,readonly) CKComposition * compositionWithAcceptedAutocorrection; 
@property (nonatomic,retain) CKMessageEntryWaveformView * waveformView;                                                 //@synthesize waveformView=_waveformView - In the implementation block
@property (nonatomic,retain) UIButton * photoButton;                                                                    //@synthesize photoButton=_photoButton - In the implementation block
@property (assign,nonatomic) BOOL shouldKnockoutCoverView;                                                              //@synthesize shouldKnockoutCoverView=_shouldKnockoutCoverView - In the implementation block
@property (assign,getter=isKeyboardVisible,nonatomic) BOOL keyboardVisible;                                             //@synthesize keyboardVisible=_keyboardVisible - In the implementation block
@property (nonatomic,readonly) BOOL isAudioActionMenuVisible; 
@property (getter=isRecording,nonatomic,readonly) BOOL recording; 
@property (nonatomic,readonly) BOOL hasRecording; 
@property (assign,nonatomic) id<CKActionMenuGestureRecognizerButtonDelegate> videoDelegate; 
@property (assign,getter=isComposingRecipient,nonatomic) BOOL composingRecipient;                                       //@synthesize composingRecipient=_composingRecipient - In the implementation block
@property (assign,getter=hasFailedRecipients,nonatomic) BOOL failedRecipients;                                          //@synthesize failedRecipients=_failedRecipients - In the implementation block
@property (assign,getter=hasUnreachableEmergencyRecipient,nonatomic) BOOL unreachableEmergencyRecipient;                //@synthesize unreachableEmergencyRecipient=_unreachableEmergencyRecipient - In the implementation block
@property (assign,getter=isSendingMessage,nonatomic) BOOL sendingMessage;                                               //@synthesize sendingMessage=_sendingMessage - In the implementation block
@property (nonatomic,retain) UIButton * sendButton;                                                                     //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,retain) UIButton * audioButton;                                                                    //@synthesize audioButton=_audioButton - In the implementation block
@property (nonatomic,retain) CKActionMenuGestureRecognizerButton * audioActionMenuGestureRecognizerButton;              //@synthesize audioActionMenuGestureRecognizerButton=_audioActionMenuGestureRecognizerButton - In the implementation block
@property (nonatomic,retain) CKActionMenuGestureRecognizerButton * videoActionMenuGestureRecognizerButton;              //@synthesize videoActionMenuGestureRecognizerButton=_videoActionMenuGestureRecognizerButton - In the implementation block
@property (nonatomic,retain) CKInlineAudioReplyButtonController * audioReplyButton;                                     //@synthesize audioReplyButton=_audioReplyButton - In the implementation block
@property (nonatomic,retain) UILabel * characterCountLabel;                                                             //@synthesize characterCountLabel=_characterCountLabel - In the implementation block
@property (assign,nonatomic) CGSize photoButtonSize;                                                                    //@synthesize photoButtonSize=_photoButtonSize - In the implementation block
@property (assign,nonatomic) CGSize sendButtonSize;                                                                     //@synthesize sendButtonSize=_sendButtonSize - In the implementation block
@property (assign,nonatomic) CGSize audioButtonSize;                                                                    //@synthesize audioButtonSize=_audioButtonSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sendTextAlignmentInsets;                                                      //@synthesize sendTextAlignmentInsets=_sendTextAlignmentInsets - In the implementation block
@property (assign,nonatomic) CGSize characterCountSize;                                                                 //@synthesize characterCountSize=_characterCountSize - In the implementation block
@property (nonatomic,retain) _UITextFieldRoundedRectBackgroundViewNeue * coverView;                                     //@synthesize coverView=_coverView - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                                                            //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UIView * knockoutCoverView;                                                                //@synthesize knockoutCoverView=_knockoutCoverView - In the implementation block
@property (nonatomic,retain) UIView * dividerLine;                                                                      //@synthesize dividerLine=_dividerLine - In the implementation block
@property (assign,getter=isCharacterCountHidden,nonatomic) BOOL characterCountHidden;                                   //@synthesize characterCountHidden=_characterCountHidden - In the implementation block
@property (assign,nonatomic) BOOL shouldCenterCharacterCount;                                                           //@synthesize shouldCenterCharacterCount=_shouldCenterCharacterCount - In the implementation block
@property (nonatomic,retain) CKAudioRecorder * recorder;                                                                //@synthesize recorder=_recorder - In the implementation block
@property (nonatomic,retain) CKComposition * audioComposition;                                                          //@synthesize audioComposition=_audioComposition - In the implementation block
@property (nonatomic,retain) CKActionMenuController * audioActionMenuController;                                        //@synthesize audioActionMenuController=_audioActionMenuController - In the implementation block
@property (assign,nonatomic) CGRect audioActionMenuFrame;                                                               //@synthesize audioActionMenuFrame=_audioActionMenuFrame - In the implementation block
@property (nonatomic,retain) CKMessageEntryRecordedAudioView * recordedAudioView;                                       //@synthesize recordedAudioView=_recordedAudioView - In the implementation block
@property (assign,nonatomic) CGSize waveformViewSize;                                                                   //@synthesize waveformViewSize=_waveformViewSize - In the implementation block
@property (nonatomic,retain) CKMessageEntryAudioHintView * audioHintView;                                               //@synthesize audioHintView=_audioHintView - In the implementation block
@property (assign,nonatomic) unsigned long long displayMode;                                                            //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,retain) UIView * contentClipView;                                                                  //@synthesize contentClipView=_contentClipView - In the implementation block
@property (assign,getter=isPerformingActionMenuSend,nonatomic) BOOL performingActionMenuSend;                           //@synthesize performingActionMenuSend=_performingActionMenuSend - In the implementation block
@property (nonatomic,copy) NSArray * keyCommands;                                                                       //@synthesize keyCommands=_keyCommands - In the implementation block
@property (nonatomic,retain) CAMShutterButton * shutterButton;                                                          //@synthesize shutterButton=_shutterButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(UIEdgeInsets)coverViewInsetsForMarginInsets:(UIEdgeInsets)arg1 shouldShowPhotoButton:(BOOL)arg2 shouldShowCharacterCount:(BOOL)arg3 shouldCenterCharacterCount:(BOOL*)arg4 ;
+(UIEdgeInsets)coverViewInsetsForMarginInsets:(UIEdgeInsets)arg1 shouldShowPhotoButton:(BOOL)arg2 shouldShowCharacterCount:(BOOL)arg3 ;
+(id)audioButtonImage;
+(UIEdgeInsets)contentViewInsetsForMarginInsets:(UIEdgeInsets)arg1 shouldShowPhotoButton:(BOOL)arg2 shouldShowCharacterCount:(BOOL)arg3 ;
-(void)setDelegate:(id<CKMessageEntryViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<CKMessageEntryViewDelegate>)delegate;
-(NSArray *)keyCommands;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(CKMessageEntryContentView *)contentView;
-(void)setContentView:(CKMessageEntryContentView *)arg1 ;
-(void)setKeyCommands:(NSArray *)arg1 ;
-(void)setRecorder:(CKAudioRecorder *)arg1 ;
-(CKAudioRecorder *)recorder;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(unsigned long long)displayMode;
-(double)_accessoryViewFadeDuration;
-(void)setKeyboardVisible:(BOOL)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(CKConversation *)conversation;
-(void)actionMenuGestureRecognizerButtonDidTouchDownButton:(id)arg1 ;
-(BOOL)actionMenuGestureRecognizerButtonShouldShowHint:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonShowHint:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonDidTouchUpInsideButton:(id)arg1 ;
-(BOOL)actionMenuGestureRecognizerButtonIsShowingHint:(id)arg1 ;
-(BOOL)actionMenuGestureRecognizerButtonShouldRecognizeGesture:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonGestureDidBegin:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonGestureDidEnd:(id)arg1 ;
-(BOOL)hasUnreachableEmergencyRecipient;
-(UIEdgeInsets)coverInsets;
-(UIView *)dividerLine;
-(CKMessageEntryAudioHintView *)audioHintView;
-(UIButton *)photoButton;
-(BOOL)shouldShowPhotoButton;
-(CGSize)photoButtonSize;
-(UIButton *)sendButton;
-(UIEdgeInsets)sendTextAlignmentInsets;
-(BOOL)shouldShowSendButton;
-(CGSize)sendButtonSize;
-(BOOL)shouldShowCharacterCount;
-(CGSize)characterCountSize;
-(BOOL)shouldCenterCharacterCount;
-(_UITextFieldRoundedRectBackgroundViewNeue *)coverView;
-(UIView *)knockoutCoverView;
-(UIView *)contentClipView;
-(UILabel *)characterCountLabel;
-(BOOL)isCharacterCountHidden;
-(CKComposition *)composition;
-(CGSize)audioButtonSize;
-(UIButton *)audioButton;
-(CAMShutterButton *)shutterButton;
-(CGSize)waveformViewSize;
-(BOOL)isAudioActionMenuVisible;
-(CGRect)audioActionMenuFrame;
-(CKMessageEntryWaveformView *)waveformView;
-(CKMessageEntryRecordedAudioView *)recordedAudioView;
-(void)_setupWaveformView;
-(void)loadRecordedAudioViewsIfNeeded;
-(CKComposition *)audioComposition;
-(UIEdgeInsets)marginInsets;
-(void)setShouldCenterCharacterCount:(BOOL)arg1 ;
-(void)setCoverInsets:(UIEdgeInsets)arg1 ;
-(double)placeholderHeight;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)setShouldShowSendButton:(BOOL)arg1 ;
-(void)setShouldShowSubject:(BOOL)arg1 ;
-(void)setShouldShowPhotoButton:(BOOL)arg1 ;
-(void)setShouldShowCharacterCount:(BOOL)arg1 ;
-(void)setKnockoutCoverView:(UIView *)arg1 ;
-(void)setDividerLine:(UIView *)arg1 ;
-(void)touchUpInsideSendButton:(id)arg1 ;
-(void)setSendButton:(UIButton *)arg1 ;
-(void)setAudioButton:(UIButton *)arg1 ;
-(void)setAudioActionMenuGestureRecognizerButton:(CKActionMenuGestureRecognizerButton *)arg1 ;
-(void)setShutterButton:(CAMShutterButton *)arg1 ;
-(void)setAudioReplyButton:(CKInlineAudioReplyButtonController *)arg1 ;
-(void)setSendButtonSize:(CGSize)arg1 ;
-(void)setAudioButtonSize:(CGSize)arg1 ;
-(void)setSendTextAlignmentInsets:(UIEdgeInsets)arg1 ;
-(void)setPhotoButtonSize:(CGSize)arg1 ;
-(void)setPhotoButton:(UIButton *)arg1 ;
-(id<CKActionMenuGestureRecognizerButtonDelegate>)videoDelegate;
-(void)setVideoActionMenuGestureRecognizerButton:(CKActionMenuGestureRecognizerButton *)arg1 ;
-(void)setCharacterCountLabel:(UILabel *)arg1 ;
-(void)setCharacterCountSize:(CGSize)arg1 ;
-(void)setCharacterCountHidden:(BOOL)arg1 ;
-(void)setCoverView:(_UITextFieldRoundedRectBackgroundViewNeue *)arg1 ;
-(void)setContentClipView:(UIView *)arg1 ;
-(void)configureForDisplayMode:(unsigned long long)arg1 ;
-(void)keyCommandSend:(id)arg1 ;
-(void)conversationPreferredServiceChanged:(id)arg1 ;
-(void)messageReceived:(id)arg1 ;
-(void)updateEntryView;
-(void)updateResponseContext;
-(void)setAudioComposition:(CKComposition *)arg1 ;
-(void)setComposition:(CKComposition *)arg1 ;
-(CKActionMenuController *)audioActionMenuController;
-(BOOL)isRecording;
-(CKActionMenuGestureRecognizerButton *)videoActionMenuGestureRecognizerButton;
-(void)clearResponseContext;
-(void)setPerformingActionMenuSend:(BOOL)arg1 ;
-(BOOL)isPerformingActionMenuSend;
-(void)setAudioActionMenuController:(CKActionMenuController *)arg1 ;
-(BOOL)shouldRecordForService:(id)arg1 ;
-(void)cancelRecordingAndShowAudioHint;
-(void)presentAudioActionMenu;
-(void)setWaveformView:(CKMessageEntryWaveformView *)arg1 ;
-(void)setWaveformViewSize:(CGSize)arg1 ;
-(void)configureAudioActionMenuControllerForPlayback:(BOOL)arg1 ;
-(void)pauseMenuItemAction:(id)arg1 ;
-(void)playMenuItemAction:(id)arg1 ;
-(void)audioMenuItemAction:(id)arg1 ;
-(void)sendMenuItemAction:(id)arg1 ;
-(void)setAudioActionMenuFrame:(CGRect)arg1 ;
-(void)setAudioHintView:(CKMessageEntryAudioHintView *)arg1 ;
-(void)startRecordingForRaiseGesture;
-(BOOL)sendButtonEnabled;
-(BOOL)isSendingMessage;
-(BOOL)photoButtonEnabled;
-(BOOL)hasFailedRecipients;
-(BOOL)isComposingRecipient;
-(void)touchUpInsideDeleteAudioRecordingButton:(id)arg1 ;
-(void)setRecordedAudioView:(CKMessageEntryRecordedAudioView *)arg1 ;
-(void)messageEntryContentViewDidChange:(id)arg1 ;
-(BOOL)messageEntryContentViewShouldBeginEditing:(id)arg1 ;
-(void)messageEntryContentViewDidBeginEditing:(id)arg1 ;
-(void)messageEntryContentViewDidEndEditing:(id)arg1 ;
-(BOOL)messageEntryContentView:(id)arg1 shouldInsertMediaObjects:(id)arg2 ;
-(void)messageEntryContentView:(id)arg1 didTapMediaObject:(id)arg2 ;
-(void)audioRecorderRecordingDidChange:(id)arg1 ;
-(void)audioRecorderRecordingDidFail:(id)arg1 ;
-(void)audioRecorderDidUpdateAveragePower:(float)arg1 ;
-(void)actionMenuControllerWillPresentActionMenu:(id)arg1 animated:(BOOL)arg2 ;
-(void)actionMenuControllerWillDismissActionMenu:(id)arg1 animated:(BOOL)arg2 ;
-(void)actionMenuControllerDidDismissActionMenu:(id)arg1 ;
-(void)messageEntryRecordedAudioView:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2 ;
-(void)audioReplyButtonStart:(id)arg1 ;
-(void)audioReplyButtonStop:(id)arg1 ;
-(void)audioReplyButtonCancel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 marginInsets:(UIEdgeInsets)arg2 shouldShowSendButton:(BOOL)arg3 shouldShowSubject:(BOOL)arg4 shouldShowPhotoButton:(BOOL)arg5 shouldShowCharacterCount:(BOOL)arg6 ;
-(CKComposition *)compositionWithAcceptedAutocorrection;
-(void)setShouldKnockoutCoverView:(BOOL)arg1 ;
-(void)dismissAudioActionMenuAnimated:(BOOL)arg1 ;
-(BOOL)hasRecording;
-(void)setVideoDelegate:(id<CKActionMenuGestureRecognizerButtonDelegate>)arg1 ;
-(void)setComposingRecipient:(BOOL)arg1 ;
-(void)setFailedRecipients:(BOOL)arg1 ;
-(void)setUnreachableEmergencyRecipient:(BOOL)arg1 ;
-(void)setSendingMessage:(BOOL)arg1 ;
-(void)stopRecordingForRaiseGestureWithFailure:(BOOL)arg1 ;
-(BOOL)shouldShowSubject;
-(BOOL)shouldKnockoutCoverView;
-(BOOL)isKeyboardVisible;
-(CKActionMenuGestureRecognizerButton *)audioActionMenuGestureRecognizerButton;
-(CKInlineAudioReplyButtonController *)audioReplyButton;
@end

