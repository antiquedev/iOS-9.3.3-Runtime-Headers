/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLGeocoder, NSString;

@interface ICLocationContext : NSObject <CLLocationManagerDelegate> {

	CLGeocoder* _geocoder;

}

@property (nonatomic,retain) CLGeocoder * geocoder;                 //@synthesize geocoder=_geocoder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedContext;
-(id)init;
-(void)lookupPlaceAtLatitude:(double)arg1 longitude:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)setGeocoder:(CLGeocoder *)arg1 ;
-(CLGeocoder *)geocoder;
@end
