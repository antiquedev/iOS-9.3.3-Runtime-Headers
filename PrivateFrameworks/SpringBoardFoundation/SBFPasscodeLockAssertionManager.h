/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBFPasscodeLockAssertionTracker;

@interface SBFPasscodeLockAssertionManager : NSObject {

	SBFPasscodeLockAssertionTracker* _preventLockTracker;
	SBFPasscodeLockAssertionTracker* _transientTracker;

}
-(id)init;
-(id)description;
-(BOOL)isAssertionValid:(id)arg1 ;
-(BOOL)hasActiveAssertions;
-(void)addAssertion:(id)arg1 ;
-(void)removeAssertion:(id)arg1 ;
@end
