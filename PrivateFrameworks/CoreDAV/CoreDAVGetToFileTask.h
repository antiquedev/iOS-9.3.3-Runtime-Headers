/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:23 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVGetTask.h>

@class NSFileHandle;

@interface CoreDAVGetToFileTask : CoreDAVGetTask {

	NSFileHandle* _destinationFile;

}

@property (nonatomic,retain) NSFileHandle * destinationFile;              //@synthesize destinationFile=_destinationFile - In the implementation block
-(void)dealloc;
-(NSFileHandle *)destinationFile;
-(id)initWithURL:(id)arg1 destinationFile:(id)arg2 ;
-(void)setDestinationFile:(NSFileHandle *)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(BOOL)shouldLogResponseBody;
@end

