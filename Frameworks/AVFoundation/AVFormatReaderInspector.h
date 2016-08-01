/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspector.h>

@interface AVFormatReaderInspector : AVAssetInspector {

	OpaqueFigFormatReaderRef _formatReader;
	BOOL didCheckForSaveRestriction;
	BOOL hasSaveRestriction;

}

@property (setter=_setFormatReader:,getter=_formatReader,nonatomic,retain) OpaqueFigFormatReaderRef formatReader; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SCD_Struct_CM5)duration;
-(CGSize)naturalSize;
-(float)preferredRate;
-(float)preferredVolume;
-(float)preferredSoundCheckVolumeNormalization;
-(int)naturalTimeScale;
-(BOOL)providesPreciseDurationAndTiming;
-(id)alternateTrackGroups;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(BOOL)isExportable;
-(BOOL)isComposable;
-(BOOL)canContainFragments;
-(BOOL)containsFragments;
-(OpaqueFigFormatReaderRef)_formatReader;
-(id)initWithFormatReader:(OpaqueFigFormatReaderRef)arg1 ;
-(void)_setFormatReader:(OpaqueFigFormatReaderRef)arg1 ;
-(BOOL)_hasQTSaveRestriction;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(id)lyrics;
-(id)trackReferences;
-(CGAffineTransform)preferredTransform;
-(id)commonMetadata;
-(long long)trackCount;
-(BOOL)isReadable;
-(void)finalize;
@end
