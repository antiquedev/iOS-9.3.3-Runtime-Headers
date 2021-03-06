/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:44 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIForceLevelClassifier.h>

@interface _UIPreviewInteractionForceLevelClassifier : _UIForceLevelClassifier {

	double _smoothedForce;
	double _maximumForce;
	double _timeMark;
	double _currentTime;
	double _previousTime;
	double _popOffsetInitial;
	double _popOffsetLongterm;
	double _popOffsetDecayAlpha;
	double _lowpassForceAlpha;
	double _popDecayingOffset;
	double _popReductionForce;
	double _progressToStrongThreshold;
	BOOL _allowsPopOffsetDecay;
	double _revealThreshold;
	double _standardThreshold;
	double _strongThreshold;
	double _hintAndPeekInterval;
	double _hintReductionForce;
	double _transitionInterval;
	double _actualHintForce;
	double _actualPeekForce;
	double _actualPopForce;
	double _actualHintTime;
	double _actualPeekTime;
	double _actualPopTime;
	unsigned long long _peekPopCount;

}

@property (assign,nonatomic) double revealThreshold;                         //@synthesize revealThreshold=_revealThreshold - In the implementation block
@property (assign,nonatomic) double standardThreshold;                       //@synthesize standardThreshold=_standardThreshold - In the implementation block
@property (assign,nonatomic) double strongThreshold;                         //@synthesize strongThreshold=_strongThreshold - In the implementation block
@property (assign,nonatomic) double hintAndPeekInterval;                     //@synthesize hintAndPeekInterval=_hintAndPeekInterval - In the implementation block
@property (assign,nonatomic) double hintReductionForce;                      //@synthesize hintReductionForce=_hintReductionForce - In the implementation block
@property (assign,nonatomic) double transitionInterval;                      //@synthesize transitionInterval=_transitionInterval - In the implementation block
@property (nonatomic,readonly) double actualHintForce;                       //@synthesize actualHintForce=_actualHintForce - In the implementation block
@property (nonatomic,readonly) double actualPeekForce;                       //@synthesize actualPeekForce=_actualPeekForce - In the implementation block
@property (nonatomic,readonly) double actualPopForce;                        //@synthesize actualPopForce=_actualPopForce - In the implementation block
@property (nonatomic,readonly) double actualHintTime;                        //@synthesize actualHintTime=_actualHintTime - In the implementation block
@property (nonatomic,readonly) double actualPeekTime;                        //@synthesize actualPeekTime=_actualPeekTime - In the implementation block
@property (nonatomic,readonly) double actualPopTime;                         //@synthesize actualPopTime=_actualPopTime - In the implementation block
@property (nonatomic,readonly) unsigned long long peekPopCount;              //@synthesize peekPopCount=_peekPopCount - In the implementation block
-(id)init;
-(void)reset;
-(void)touchForceMultiplierDidChange;
-(void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(CGPoint)arg3 ;
-(BOOL)wantsUnclampedForceValues;
-(id)transformerFromTouchForceMessageToProgressToForceLevel:(long long)arg1 minimumRequiredForceLevel:(long long)arg2 ;
-(double)_denormalizedTouchForceValue:(double)arg1 ;
-(double)_calculateProgressOfTouchForceValue:(double)arg1 toForceLevel:(long long)arg2 minimumRequiredForceLevel:(long long)arg3 ;
-(double)_thresholdForForceLevel:(long long)arg1 ;
-(double)_normalizedTouchForceValue:(double)arg1 ;
-(long long)_forceLevelForTouchForceValue:(double)arg1 ;
-(double)revealThreshold;
-(void)setRevealThreshold:(double)arg1 ;
-(double)standardThreshold;
-(void)setStandardThreshold:(double)arg1 ;
-(double)strongThreshold;
-(void)setStrongThreshold:(double)arg1 ;
-(double)hintAndPeekInterval;
-(void)setHintAndPeekInterval:(double)arg1 ;
-(double)hintReductionForce;
-(void)setHintReductionForce:(double)arg1 ;
-(double)transitionInterval;
-(void)setTransitionInterval:(double)arg1 ;
-(double)actualHintForce;
-(double)actualPeekForce;
-(double)actualPopForce;
-(double)actualHintTime;
-(double)actualPeekTime;
-(double)actualPopTime;
-(unsigned long long)peekPopCount;
@end

