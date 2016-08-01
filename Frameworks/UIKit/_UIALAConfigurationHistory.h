/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UILAConfigurationHistory.h>
#import <UIKit/_UIALAPropertySource.h>

@class NSString, NSSet;

@interface _UIALAConfigurationHistory : _UILAConfigurationHistory <_UIALAPropertySource> {

	BOOL _hasEstablishedAlignmentValues;
	BOOL _inAlignmentLayoutUpdateSection;
	unsigned long long _alignment;

}

@property (assign,nonatomic) BOOL hasEstablishedAlignmentValues;                                                       //@synthesize hasEstablishedAlignmentValues=_hasEstablishedAlignmentValues - In the implementation block
@property (assign,getter=isInAlignmentLayoutUpdateSection,nonatomic) BOOL inAlignmentLayoutUpdateSection;              //@synthesize inAlignmentLayoutUpdateSection=_inAlignmentLayoutUpdateSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) BOOL layoutFillsCanvas; 
@property (assign,nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling; 
@property (nonatomic,readonly) NSSet * _newlyHiddenItems; 
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems; 
@property (assign,nonatomic) unsigned long long alignment;                                                             //@synthesize alignment=_alignment - In the implementation block
-(void)setAlignment:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)alignment;
-(void)setHasEstablishedAlignmentValues:(BOOL)arg1 ;
-(void)setInAlignmentLayoutUpdateSection:(BOOL)arg1 ;
-(BOOL)hasEstablishedAlignmentValues;
-(BOOL)isInAlignmentLayoutUpdateSection;
@end
