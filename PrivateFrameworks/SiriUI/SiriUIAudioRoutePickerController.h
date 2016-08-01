/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:55 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriUIAudioRoutePickerControllerDelegate;
@class NSString, UIWindow, SiriRoutePickerAlertController;

@interface SiriUIAudioRoutePickerController : NSObject {

	id<SiriUIAudioRoutePickerControllerDelegate> _delegate;
	NSString* _audioCategory;
	UIWindow* _window;
	BOOL _hasRoutesToPick;
	BOOL _bluetoothIsPicked;
	SiriRoutePickerAlertController* _pickerAlertController;

}

@property (assign,nonatomic,__weak) id<SiriUIAudioRoutePickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SiriRoutePickerAlertController * pickerAlertController;                    //@synthesize pickerAlertController=_pickerAlertController - In the implementation block
+(id)_nameForRouteInfo:(id)arg1 isSelected:(BOOL*)arg2 isBluetooth:(BOOL*)arg3 isOverride:(BOOL*)arg4 audioRouteName:(id*)arg5 ;
-(void)setDelegate:(id<SiriUIAudioRoutePickerControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SiriUIAudioRoutePickerControllerDelegate>)delegate;
-(void)_pickableRoutesChanged:(id)arg1 ;
-(void)_routeChanged:(id)arg1 ;
-(void)_showAlertControllerFromViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_selectRouteWithInfo:(id)arg1 ;
-(void)_dismissAlertController:(BOOL)arg1 ;
-(SiriRoutePickerAlertController *)pickerAlertController;
-(void)_fetchPickableRoutesForCategory:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_removeWindow;
-(void)setPickerAlertController:(SiriRoutePickerAlertController *)arg1 ;
-(BOOL)isShowingPicker;
-(void)cancelPickerAnimated:(BOOL)arg1 ;
-(id)initWithCategory:(id)arg1 delegate:(id)arg2 ;
-(void)showPickerFromViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)refreshRoutes;
-(BOOL)hasRoutesToPick;
-(BOOL)bluetoothIsPicked;
@end
