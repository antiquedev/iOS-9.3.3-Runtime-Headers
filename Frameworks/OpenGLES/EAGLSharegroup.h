/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:28 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpenGLES/OpenGLES-Structs.h>
@class NSString;

@interface EAGLSharegroup : NSObject {

	EAGLSharegroupPrivate* _private;
	NSString* debugLabel;

}

@property (nonatomic,copy) NSString * debugLabel; 
-(id)initWithAPI:(unsigned long long)arg1 sharedWithCompute:(BOOL)arg2 ;
-(NSString *)debugLabel;
-(void)loadGLIPlugin:(_GLDPixelFormatRec*)arg1 sharedWithCompute:(BOOL)arg2 ;
-(GLISharedRecRef)getGLIShared;
-(void)setDebugLabel:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithAPI:(unsigned long long)arg1 ;
-(unsigned long long)APIs;
@end

