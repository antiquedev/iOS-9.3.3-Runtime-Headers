/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TTSVoiceAssetManager : NSObject {

	NSMutableDictionary* _resourceCache;

}
+(id)sharedInstance;
-(void)setAutoDownloadedVoiceAssets:(id)arg1 ;
-(void)getAutoDownloadedVoiceAssets:(/*^block*/id)arg1 ;
-(id)_voiceAssetQueryForVoiceName:(id)arg1 language:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 version:(id)arg5 localOnly:(BOOL)arg6 ;
-(id)_voiceAssetForASAsset:(id)arg1 ;
-(void)automaticallyDownloadVoiceAssetsIfNeeded;
-(id)_autoDownloadedAssets;
-(void)_automaticallyDownloadVoiceAssetsIfNeeded;
-(id)resourcePathForLanguage:(id)arg1 gender:(long long)arg2 footprint:(long long)arg3 voiceName:(id)arg4 outAsset:(id*)arg5 ;
-(void)getCustomVoiceAssetsLocalOnly:(BOOL)arg1 language:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)startDownloadingVoiceAsset:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end

