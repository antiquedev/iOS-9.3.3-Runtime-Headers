/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ODDIteratorAttributes : NSObject {

	int mAxis;
	int mPointType;
	BOOL mHideLastTransition;
	int mStart;
	unsigned mCount;
	int mStep;

}
-(unsigned)count;
-(void)setAxis:(int)arg1 ;
-(int)axis;
-(int)start;
-(void)setStart:(int)arg1 ;
-(void)setCount:(unsigned)arg1 ;
-(int)step;
-(void)setPointType:(int)arg1 ;
-(void)setHideLastTransition:(BOOL)arg1 ;
-(void)setStep:(int)arg1 ;
-(int)pointType;
-(BOOL)hideLastTransition;
@end

