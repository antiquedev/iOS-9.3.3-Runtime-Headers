/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ALAssetsLibrary, AVAssetImageGenerator;

@interface SLSheetPreviewImageSource : NSObject {

	ALAssetsLibrary* _assetsLibrary;
	AVAssetImageGenerator* _assetImageGenerator;

}

@property (readonly) ALAssetsLibrary * assetsLibrary; 
-(void)_generatePreviewImageForAttachment:(id)arg1 queueToBlockWhileDownsampling:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(void)_fetchPreviewImageForAssetURL:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(void)_generatePreviewImageForVideoFileURL:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(ALAssetsLibrary *)assetsLibrary;
-(void)previewImageForAttachment:(id)arg1 queueToBlockWhileDownsampling:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(void)cancelVideoPreviewGeneration;
@end
