/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKFocusAttachmentView.h>

@interface CMKFocusLockAttachmentView : CMKFocusAttachmentView {

	BOOL _locked;

}

@property (assign,getter=isLocked,nonatomic) BOOL locked;              //@synthesize locked=_locked - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isLocked;
-(void)setLocked:(BOOL)arg1 ;
-(void)_updateText;
@end
