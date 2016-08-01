/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIEvent.h>

@interface UIMoveEvent : UIEvent {

	long long _moveDirection;
	unsigned long long _focusHeading;

}

@property (assign,setter=_setMoveDirection:,nonatomic) long long _moveDirection;                     //@synthesize moveDirection=_moveDirection - In the implementation block
@property (assign,setter=_setFocusHeading:,nonatomic) unsigned long long _focusHeading;              //@synthesize focusHeading=_focusHeading - In the implementation block
-(long long)type;
-(void)_setMoveDirection:(long long)arg1 ;
-(void)_setFocusHeading:(unsigned long long)arg1 ;
-(unsigned long long)_focusHeading;
-(long long)_moveDirection;
-(void)_sendEventToResponder:(id)arg1 ;
@end
