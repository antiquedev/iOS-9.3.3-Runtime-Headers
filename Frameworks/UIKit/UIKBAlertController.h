/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>

@protocol UIKBAlertControllerDelegate;
@interface UIKBAlertController : UIAlertController {

	id<UIKBAlertControllerDelegate> _kbDelegate;

}

@property (assign,nonatomic) id<UIKBAlertControllerDelegate> kbDelegate;              //@synthesize kbDelegate=_kbDelegate - In the implementation block
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id<UIKBAlertControllerDelegate>)kbDelegate;
-(void)setKbDelegate:(id<UIKBAlertControllerDelegate>)arg1 ;
@end

