/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@interface AVAudioEnvironmentDistanceAttenuationParameters : NSObject {

	void* _impl;

}

@property (assign,nonatomic) long long distanceAttenuationModel; 
@property (assign,nonatomic) float referenceDistance; 
@property (assign,nonatomic) float maximumDistance; 
@property (assign,nonatomic) float rolloffFactor; 
-(void)dealloc;
-(id)init;
-(void)setDistanceAttenuationModel:(long long)arg1 ;
-(long long)distanceAttenuationModel;
-(float)referenceDistance;
-(void)setRolloffFactor:(float)arg1 ;
-(float)rolloffFactor;
-(void)setReferenceDistance:(float)arg1 ;
-(void)setMaximumDistance:(float)arg1 ;
-(id)initWithEnvironment:(AVAudioEnvironmentNodeImpl*)arg1 ;
-(float)maximumDistance;
@end
