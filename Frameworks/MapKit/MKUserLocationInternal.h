/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:04 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKUserLocationAnnotation, MKAnnotation;
@class CLLocation, CLHeading, NSString;

@interface MKUserLocationInternal : NSObject {

	CLLocation* location;
	CLLocation* fixedLocation;
	CLLocation* predictedLocation;
	CLHeading* heading;
	NSString* title;
	NSString* subtitle;
	id<MKUserLocationAnnotation> _annotation;
	double timestamp;
	BOOL updating;
	double course;
	id<MKAnnotation> annotation;

}

@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,retain) CLLocation * fixedLocation; 
@property (nonatomic,retain) CLLocation * predictedLocation; 
@property (nonatomic,retain) CLHeading * heading; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,readonly) id<MKAnnotation> annotation; 
@property (assign,nonatomic) double timestamp; 
@property (assign,getter=isUpdating,nonatomic) BOOL updating; 
@property (assign,nonatomic) double course; 
-(void)setTitle:(NSString *)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(id<MKAnnotation>)annotation;
-(void)setHeading:(CLHeading *)arg1 ;
-(void)setCourse:(double)arg1 ;
-(CLHeading *)heading;
-(double)course;
-(BOOL)isUpdating;
-(CLLocation *)fixedLocation;
-(void)setUpdating:(BOOL)arg1 ;
-(void)setFixedLocation:(CLLocation *)arg1 ;
-(void)setPredictedLocation:(CLLocation *)arg1 ;
-(CLLocation *)predictedLocation;
@end

