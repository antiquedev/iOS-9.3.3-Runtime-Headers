/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:55 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <CoreFoundation/NSData.h>

@interface FigIOSurfaceData : NSData {

	IOSurfaceRef _surface;
	unsigned long long _length;
	const void* _bytes;

}
+(void)initialize;
+(id)dataWithIOSurface:(IOSurfaceRef)arg1 ;
+(id)dataWithIOSurface:(IOSurfaceRef)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 ;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 length:(unsigned long long)arg2 ;
@end

