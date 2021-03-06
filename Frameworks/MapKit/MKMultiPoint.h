/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKShape.h>

@interface MKMultiPoint : MKShape {

	SCD_Struct_MK7* _points;
	unsigned long long _pointCount;
	SCD_Struct_MK10 _boundingRect;

}

@property (nonatomic,readonly) unsigned long long pointCount;              //@synthesize pointCount=_pointCount - In the implementation block
-(void)dealloc;
-(unsigned long long)pointCount;
-(SCD_Struct_MK7*)points;
-(BOOL)intersectsMapRect:(SCD_Struct_MK10)arg1 ;
-(SCD_Struct_MK10)boundingMapRect;
-(void)_calculateBounds;
-(void)getCoordinates:(SCD_Struct_MK7*)arg1 range:(NSRange)arg2 ;
-(void)_setCoordinates:(SCD_Struct_MK7*)arg1 count:(unsigned long long)arg2 ;
-(void)_setBounds:(SCD_Struct_MK10)arg1 ;
-(void)_assignPoints:(SCD_Struct_MK7*)arg1 count:(unsigned long long)arg2 ;
-(void)_wrapAroundTheDateline:(SCD_Struct_MK7*)arg1 count:(unsigned long long)arg2 ;
-(void)_setPoints:(SCD_Struct_MK7*)arg1 count:(unsigned long long)arg2 ;
-(SCD_Struct_MK7)coordinate;
@end

