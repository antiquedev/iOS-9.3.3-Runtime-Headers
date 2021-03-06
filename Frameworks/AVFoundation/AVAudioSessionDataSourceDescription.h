/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class NSNumber, NSString, NSArray;

@interface AVAudioSessionDataSourceDescription : NSObject {

	void* _impl;

}

@property (readonly) NSNumber * dataSourceID; 
@property (readonly) NSString * dataSourceName; 
@property (readonly) NSString * location; 
@property (readonly) NSString * orientation; 
@property (readonly) NSArray * supportedPolarPatterns; 
@property (readonly) NSString * selectedPolarPattern; 
@property (readonly) NSString * preferredPolarPattern; 
+(id)privateCreateOrConfigureArray:(id)arg1 withRawSourceArray:(id)arg2 portID:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)orientation;
-(NSString *)location;
-(BOOL)isEqualToDataSource:(id)arg1 ;
-(id)privateGetOwningPortID;
-(NSNumber *)dataSourceID;
-(NSString *)dataSourceName;
-(NSString *)selectedPolarPattern;
-(DataSourceDescriptionImpl*)privateGetImplementation;
-(void)configurePolarPatterns:(id)arg1 ;
-(id)initWithRawSourceDescription:(id)arg1 andOwningPortID:(id)arg2 ;
-(BOOL)privateMatchesRawDescription:(id)arg1 ;
-(NSString *)preferredPolarPattern;
-(NSArray *)supportedPolarPatterns;
-(BOOL)setPreferredPolarPattern:(id)arg1 error:(id*)arg2 ;
@end

