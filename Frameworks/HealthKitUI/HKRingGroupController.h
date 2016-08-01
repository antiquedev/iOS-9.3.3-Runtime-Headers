/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <HealthKitUI/HKAnimatableObject.h>

@protocol HKRingGroupAnimationStatusDelegate;
@class NSArray;

@interface HKRingGroupController : HKAnimatableObject {

	BOOL _ringStartingStateIsDirty;
	long long* _iconAnimationFrameNumbers;
	long long _numberOfRings;
	double _ringDiameter;
	double _ringInterspacing;
	double _ringThickness;
	double _ringIconSize;
	double _ringScale;
	double _backingOrigin;
	double _additionalSpacingAtIndex;
	id<HKRingGroupAnimationStatusDelegate> _animationStatusDelegate;
	NSArray* _rings;
	CGPoint _center;

}

@property (nonatomic,readonly) long long numberOfRings;                                                          //@synthesize numberOfRings=_numberOfRings - In the implementation block
@property (assign,nonatomic) double ringDiameter;                                                                //@synthesize ringDiameter=_ringDiameter - In the implementation block
@property (assign,nonatomic) double ringInterspacing;                                                            //@synthesize ringInterspacing=_ringInterspacing - In the implementation block
@property (assign,nonatomic) double ringThickness;                                                               //@synthesize ringThickness=_ringThickness - In the implementation block
@property (assign,nonatomic) double ringIconSize;                                                                //@synthesize ringIconSize=_ringIconSize - In the implementation block
@property (assign,nonatomic) double ringScale;                                                                   //@synthesize ringScale=_ringScale - In the implementation block
@property (assign,nonatomic) CGPoint center;                                                                     //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) double backingOrigin;                                                               //@synthesize backingOrigin=_backingOrigin - In the implementation block
@property (assign,nonatomic) double additionalSpacingAtIndex;                                                    //@synthesize additionalSpacingAtIndex=_additionalSpacingAtIndex - In the implementation block
@property (assign,nonatomic,__weak) id<HKRingGroupAnimationStatusDelegate> animationStatusDelegate;              //@synthesize animationStatusDelegate=_animationStatusDelegate - In the implementation block
@property (nonatomic,retain) NSArray * rings;                                                                    //@synthesize rings=_rings - In the implementation block
+(id)animationTimingFunction;
+(double)defaultAnimationDuration;
-(void)dealloc;
-(id)init;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(void)update:(double)arg1 ;
-(BOOL)_setCenter:(CGPoint)arg1 ;
-(void)addAnimation:(id)arg1 forRingGroupPropertyType:(unsigned long long)arg2 ;
-(id)_newAnimatablePropertyForType:(unsigned long long)arg1 ;
-(BOOL)areAnimationsInProgress;
-(id)initWithNumberOfRings:(long long)arg1 ;
-(void)setRingDiameter:(double)arg1 ;
-(void)setRingInterspacing:(double)arg1 ;
-(void)setRingThickness:(double)arg1 ;
-(void)setRingIconSize:(double)arg1 ;
-(void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setTopColor:(id)arg1 bottomColor:(id)arg2 ofRingAtIndex:(long long)arg3 ;
-(void)setIconFirstFrameOrigin:(CGPoint)arg1 frameSize:(CGSize)arg2 frameCount:(long long)arg3 columns:(long long)arg4 ofRingAtIndex:(long long)arg5 ;
-(void)setIconDotTextureOrigin:(CGPoint)arg1 ofRingAtIndex:(long long)arg2 ;
-(void)setDotPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_markRingStartingStateDirty;
-(id<HKRingGroupAnimationStatusDelegate>)animationStatusDelegate;
-(double)_diameterForRingAtIndex:(unsigned long long)arg1 ;
-(double)_scaledRingThickness;
-(double)ringIconSize;
-(double)_scaledRingDiameter;
-(double)_scaledRingInterspacing;
-(double)ringScale;
-(void)setRingScale:(double)arg1 ;
-(double)ringDiameter;
-(double)ringThickness;
-(void)_updateRingDiameters;
-(void)_updateRingThicknesses;
-(void)_updateRingIconProperties;
-(double)_scaledRingIconSize;
-(void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 duration:(double)arg4 timingFunction:(id)arg5 completion:(/*^block*/id)arg6 ;
-(double)_adjustedDurationForRingWithIndex:(long long)arg1 startPercentage:(double)arg2 targetPercentage:(double)arg3 defaultDuration:(double)arg4 ;
-(void)setOpacity:(float)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)addOpacityAnimation:(id)arg1 forRingAtIndex:(long long)arg2 ;
-(BOOL)ringsAreEmpty;
-(long long)indexOfRingAtPoint:(CGPoint)arg1 ;
-(long long)numberOfRings;
-(double)ringInterspacing;
-(double)backingOrigin;
-(void)setBackingOrigin:(double)arg1 ;
-(double)additionalSpacingAtIndex;
-(void)setAdditionalSpacingAtIndex:(double)arg1 ;
-(void)setAnimationStatusDelegate:(id<HKRingGroupAnimationStatusDelegate>)arg1 ;
-(NSArray *)rings;
-(void)setRings:(NSArray *)arg1 ;
@end
