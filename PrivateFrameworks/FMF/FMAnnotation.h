/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FMAccuracyOverlay, UIColor, UIImage, NSString;


@protocol FMAnnotation <NSObject>
@property (nonatomic,retain) FMAccuracyOverlay * overlay; 
@property (assign,nonatomic) double horizontalAccuracy; 
@property (assign,nonatomic) SCD_Struct_FM1 coordinate; 
@property (assign,nonatomic) double distanceFromUser; 
@property (assign,nonatomic) BOOL isBorderEnabled; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIImage * largeAnnotationIcon; 
@property (nonatomic,retain) UIImage * smallAnnotationIcon; 
@property (nonatomic,retain) UIImage * largeOverlayIcon; 
@property (nonatomic,retain) UIImage * smallOverlayIcon; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@optional
-(NSString *)title;
-(NSString *)subtitle;
-(void)setCoordinate:(SCD_Struct_FM1)arg1;

@required
-(UIColor *)tintColor;
-(void)setTintColor:(id)arg1;
-(FMAccuracyOverlay *)overlay;
-(void)setHorizontalAccuracy:(double)arg1;
-(BOOL)hasKnownLocation;
-(SCD_Struct_FM1)coordinate;
-(double)horizontalAccuracy;
-(void)setOverlay:(id)arg1;
-(BOOL)isThisDevice;
-(double)distanceFromUser;
-(void)setDistanceFromUser:(double)arg1;
-(BOOL)isBorderEnabled;
-(UIImage *)largeAnnotationIcon;
-(UIImage *)smallAnnotationIcon;
-(UIImage *)largeOverlayIcon;
-(void)setLargeOverlayIcon:(id)arg1;
-(UIImage *)smallOverlayIcon;
-(void)setSmallOverlayIcon:(id)arg1;
-(void)setIsBorderEnabled:(BOOL)arg1;
-(void)setSmallAnnotationIcon:(id)arg1;
-(void)setLargeAnnotationIcon:(id)arg1;

@end

