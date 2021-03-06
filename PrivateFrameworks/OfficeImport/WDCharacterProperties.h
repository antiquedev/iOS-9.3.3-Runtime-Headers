/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:55 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class WDDocument;

@interface WDCharacterProperties : NSObject {

	WDDocument* mDocument;
	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	SCD_Struct_WD104* mOriginalProperties;
	SCD_Struct_WD104* mTrackedProperties;

}
+(SEL)fontSelectorForFontType:(int)arg1 ;
+(SEL)fontOverriddenSelectorForFontType:(int)arg1 ;
+(SEL)setFontSelectorForFontType:(int)arg1 ;
-(int)reverseBooleanProperty:(int)arg1 ;
-(BOOL)deletionDifferentFrom:(id)arg1 mode:(int)arg2 ;
-(BOOL)editDifferentFrom:(id)arg1 mode:(int)arg2 ;
-(BOOL)formattingChangedDifferentFrom:(id)arg1 mode:(int)arg2 ;
-(BOOL)isBooleanProbablyDifferent:(unsigned char)arg1 than:(unsigned char)arg2 ;
-(BOOL)isAnythingOverriddenIn:(SCD_Struct_WD104*)arg1 ;
-(void)dealloc;
-(void)setHidden:(int)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setPosition:(short)arg1 ;
-(short)position;
-(id)font;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setFontSize:(unsigned short)arg1 ;
-(int)highlightColor;
-(void)setHighlight:(BOOL)arg1 ;
-(id)symbolFont;
-(void)setHighlightColor:(int)arg1 ;
-(id)document;
-(id)initWithDocument:(id)arg1 ;
-(void)setSpacing:(short)arg1 ;
-(short)spacing;
-(void)setKerning:(unsigned short)arg1 ;
-(int)shadow;
-(void)setShadow:(int)arg1 ;
-(unsigned short)fontSize;
-(unsigned short)kerning;
-(int)hidden;
-(BOOL)isDeletedOverridden;
-(int)deleted;
-(BOOL)isHiddenOverridden;
-(BOOL)isBaseStyleOverridden;
-(id)baseStyle;
-(BOOL)isRightToLeftOverridden;
-(int)rightToLeft;
-(BOOL)isShadingOverridden;
-(id)shading;
-(int)languageForDefaultText;
-(BOOL)isFontOverridden;
-(id)fontForFontType:(int)arg1 ;
-(BOOL)isBoldOverridden;
-(int)bold;
-(BOOL)isItalicOverridden;
-(int)italic;
-(BOOL)isStrikeThroughOverridden;
-(int)strikeThrough;
-(BOOL)isDoubleStrikeThroughOverridden;
-(int)doubleStrikeThrough;
-(BOOL)isFontSizeOverridden;
-(BOOL)isVerticalAlignOverridden;
-(int)verticalAlign;
-(BOOL)isUnderlineOverridden;
-(int)underline;
-(BOOL)isSmallCapsOverridden;
-(int)smallCaps;
-(BOOL)isCapsOverridden;
-(int)caps;
-(BOOL)isColorOverridden;
-(void)setBold:(int)arg1 ;
-(void)setItalic:(int)arg1 ;
-(void)setRightToLeft:(int)arg1 ;
-(void)setCaps:(int)arg1 ;
-(void)setSymbolFont:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)setDeleted:(int)arg1 ;
-(void)setUnderline:(int)arg1 ;
-(id)border;
-(int)outline;
-(void)setOutline:(int)arg1 ;
-(void)setResolveMode:(int)arg1 ;
-(int)resolveMode;
-(void)setFormattingChanged:(int)arg1 ;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1 ;
-(BOOL)isFormattingChangedOverridden;
-(int)formattingChanged;
-(BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(void)clearBaseStyle;
-(void)setExtendedFont:(id)arg1 ;
-(void)setFarEastFont:(id)arg1 ;
-(id)mutableShading;
-(void)setBaseStyle:(id)arg1 ;
-(id)mutableBorder;
-(BOOL)isBorderOverridden;
-(BOOL)isExtendedFontOverridden;
-(id)extendedFont;
-(BOOL)isFarEastFontOverridden;
-(id)farEastFont;
-(BOOL)isSymbolFontOverridden;
-(BOOL)isSymbolCharacterOverridden;
-(unsigned short)symbolCharacter;
-(void)setSymbolCharacter:(unsigned short)arg1 ;
-(void)setBoldForBiText:(int)arg1 ;
-(void)setItalicForBiText:(int)arg1 ;
-(BOOL)isOutlineColorOverridden;
-(id)outlineColor;
-(void)setOutlineColor:(id)arg1 ;
-(BOOL)isOutline2010WidthOverridden;
-(float)outline2010Width;
-(void)setOutline2010Width:(float)arg1 ;
-(void)setEmbossed:(int)arg1 ;
-(void)setImprint:(int)arg1 ;
-(BOOL)isUnderlineColorOverridden;
-(id)underlineColor;
-(void)setUnderlineColor:(id)arg1 ;
-(void)setStrikeThrough:(int)arg1 ;
-(void)setDoubleStrikeThrough:(int)arg1 ;
-(void)setLigature:(int)arg1 ;
-(void)setSmallCaps:(int)arg1 ;
-(void)setLowerCase:(BOOL)arg1 ;
-(BOOL)isSpacingOverridden;
-(BOOL)isPositionOverridden;
-(BOOL)isKerningOverridden;
-(BOOL)isTextScaleOverridden;
-(unsigned short)textScale;
-(void)setTextScale:(unsigned short)arg1 ;
-(void)setVerticalAlign:(int)arg1 ;
-(void)setEmphasisMark:(int)arg1 ;
-(void)setColorAuto:(BOOL)arg1 ;
-(BOOL)isLanguageForDefaultTextOverridden;
-(void)setLanguageForDefaultText:(int)arg1 ;
-(void)setSpecialCharacter:(BOOL)arg1 ;
-(void)setListCharacterPictureBullet:(BOOL)arg1 ;
-(BOOL)isLanguageForFarEastOverridden;
-(int)languageForFarEast;
-(void)setLanguageForFarEast:(int)arg1 ;
-(BOOL)isLanguageForBiTextOverridden;
-(int)languageForBiText;
-(void)setLanguageForBiText:(int)arg1 ;
-(BOOL)isFontSizeForBiTextOverridden;
-(unsigned short)fontSizeForBiText;
-(void)setFontSizeForBiText:(unsigned short)arg1 ;
-(BOOL)isBoldForBiTextOverridden;
-(int)boldForBiText;
-(BOOL)isItalicForBiTextOverridden;
-(int)italicForBiText;
-(BOOL)isOutlineOverridden;
-(BOOL)isEmbossedOverridden;
-(int)embossed;
-(BOOL)isImprintOverridden;
-(int)imprint;
-(BOOL)isShadowOverridden;
-(BOOL)isLigatureOverridden;
-(int)ligature;
-(BOOL)isHighlightOverridden;
-(BOOL)isHighlight;
-(BOOL)isHighlightColorOverridden;
-(BOOL)isLowerCaseOverridden;
-(BOOL)isLowerCase;
-(BOOL)isEmphasisMarkOverridden;
-(int)emphasisMark;
-(BOOL)isColorAutoOverridden;
-(BOOL)isColorAuto;
-(BOOL)isSpecialCharacterOverridden;
-(BOOL)isSpecialCharacter;
-(BOOL)isListCharacterPictureBulletOverridden;
-(BOOL)isListCharacterPictureBullet;
-(BOOL)isCharPositionOfPictureBulletInBookmarkOverridden;
-(int)charPositionOfPictureBulletInBookmark;
-(void)setCharPositionOfPictureBulletInBookmark:(int)arg1 ;
-(void)applyPropertiesFrom:(id)arg1 ifOverriddenIn:(id)arg2 ;
-(void)removeEmptyFormattingChanges:(id)arg1 ;
-(void)setFont:(id)arg1 forFontType:(int)arg2 ;
-(int)fontHint;
-(void)setFontHint:(int)arg1 ;
-(BOOL)isFontHintOverridden;
-(float)shadow2010Opacity;
-(void)setShadow2010Opacity:(float)arg1 ;
-(BOOL)isShadow2010OpacityOverridden;
-(id)reflection;
-(void)setReflection:(id)arg1 ;
-(BOOL)isReflectionOverridden;
-(id)shadow2010;
-(void)setShadow2010:(id)arg1 ;
-(BOOL)isShadow2010Overridden;
-(int)useCsFont;
-(void)setUseCsFont:(int)arg1 ;
-(BOOL)isUseCsFontOverridden;
-(BOOL)deletionDifferentFrom:(id)arg1 ;
-(BOOL)editDifferentFrom:(id)arg1 ;
-(BOOL)formattingChangedDifferentFrom:(id)arg1 ;
-(BOOL)embeddedObject;
-(void)setEmbeddedObject:(BOOL)arg1 ;
-(BOOL)isEmbeddedObjectOverridden;
-(BOOL)ole2;
-(void)setOle2:(BOOL)arg1 ;
-(BOOL)isOle2Overridden;
-(int)objectIDForOle2;
-(void)setObjectIDForOle2:(int)arg1 ;
-(BOOL)isObjectIDForOle2Overridden;
-(int)offsetToPictureData;
-(void)setOffsetToPictureData:(int)arg1 ;
-(BOOL)isOffsetToPictureDataOverridden;
-(BOOL)horizontalInVertical;
-(void)setHorizontalInVertical:(BOOL)arg1 ;
-(BOOL)isHorizontalInVerticalOverridden;
-(BOOL)compressHorizontalInVertical;
-(void)setCompressHorizontalInVertical:(BOOL)arg1 ;
-(BOOL)isCompressHorizontalInVerticalOverridden;
-(BOOL)twoLinesInOne;
-(void)setTwoLinesInOne:(BOOL)arg1 ;
-(BOOL)isTwoLinesInOneOverridden;
-(int)bracketTwoLinesInOne;
-(void)setBracketTwoLinesInOne:(int)arg1 ;
-(BOOL)isBracketTwoLinesInOneOverridden;
-(void)negateFormattingChangesWithDefaults:(id)arg1 ;
-(void)copyPropertiesInto:(id)arg1 ;
-(int)edited;
-(void)setEdited:(int)arg1 ;
-(BOOL)isEditedOverridden;
-(unsigned short)indexToAuthorIDOfDeletion;
-(void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1 ;
-(BOOL)isIndexToAuthorIDOfDeletionOverridden;
-(unsigned short)indexToAuthorIDOfEdit;
-(void)setIndexToAuthorIDOfEdit:(unsigned short)arg1 ;
-(BOOL)isIndexToAuthorIDOfEditOverridden;
-(id)deletionDate;
-(void)setDeletionDate:(id)arg1 ;
-(BOOL)isDeletionDateOverridden;
-(id)editDate;
-(void)setEditDate:(id)arg1 ;
-(BOOL)isEditDateOverridden;
-(BOOL)isFontOverriddenForFontType:(int)arg1 ;
@end

