/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:17 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PGPictureInPictureApplication : NSObject {

	int _processIdentifier;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) int processIdentifier;                    //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)pictureInPictureApplicationWithProcessIdentifier:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)bundleIdentifier;
-(int)processIdentifier;
-(id)initWithProcessIdentifier:(int)arg1 ;
@end

