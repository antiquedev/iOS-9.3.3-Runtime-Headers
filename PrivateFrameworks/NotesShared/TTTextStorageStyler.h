/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TTTextStorageStyler <NSObject>
@required
-(void)styleText:(id)arg1 inRange:(NSRange)arg2 fixModelAttributes:(BOOL)arg3;
-(void)resetGuessedFontSizes;
-(id)modelForStyleAttributes:(id)arg1 filterAttributes:(BOOL)arg2;
-(id)styleForModelAttributes:(id)arg1;
-(void)guessFontSizeThresholdsForTTStylesInAttributedString:(id)arg1;

@end

