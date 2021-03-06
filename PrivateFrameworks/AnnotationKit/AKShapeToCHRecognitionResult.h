/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:04 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class CHRecognitionResult, UIBezierPath, NSArray;

@interface AKShapeToCHRecognitionResult : NSObject {

	long long _tag;
	CHRecognitionResult* _result;
	UIBezierPath* _doodlePath;
	NSArray* _strokesInInputView;
	CGRect _doodlePathBoundsInInputView;
	CGRect _strokesBoundsInInputView;

}

@property (assign) long long tag;                                   //@synthesize tag=_tag - In the implementation block
@property (retain) CHRecognitionResult * result;                    //@synthesize result=_result - In the implementation block
@property (retain) UIBezierPath * doodlePath;                       //@synthesize doodlePath=_doodlePath - In the implementation block
@property (assign) CGRect doodlePathBoundsInInputView;              //@synthesize doodlePathBoundsInInputView=_doodlePathBoundsInInputView - In the implementation block
@property (retain) NSArray * strokesInInputView;                    //@synthesize strokesInInputView=_strokesInInputView - In the implementation block
@property (assign) CGRect strokesBoundsInInputView;                 //@synthesize strokesBoundsInInputView=_strokesBoundsInInputView - In the implementation block
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(CHRecognitionResult *)result;
-(void)setResult:(CHRecognitionResult *)arg1 ;
-(id)initWith:(long long)arg1 result:(id)arg2 ;
-(UIBezierPath *)doodlePath;
-(void)setDoodlePath:(UIBezierPath *)arg1 ;
-(CGRect)doodlePathBoundsInInputView;
-(void)setDoodlePathBoundsInInputView:(CGRect)arg1 ;
-(NSArray *)strokesInInputView;
-(void)setStrokesInInputView:(NSArray *)arg1 ;
-(CGRect)strokesBoundsInInputView;
-(void)setStrokesBoundsInInputView:(CGRect)arg1 ;
@end

