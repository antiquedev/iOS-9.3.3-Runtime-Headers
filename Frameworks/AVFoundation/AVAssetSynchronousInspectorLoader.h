/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspectorLoader.h>

@class AVAssetInspector;

@interface AVAssetSynchronousInspectorLoader : AVAssetInspectorLoader {

	AVAssetInspector* _assetInspector;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SCD_Struct_CM5)duration;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isExportable;
-(BOOL)isComposable;
-(id)assetInspector;
-(id)initWithAssetInspector:(id)arg1 ;
-(id)lyrics;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)isPlayable;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isReadable;
@end

