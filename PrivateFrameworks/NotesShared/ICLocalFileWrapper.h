/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileWrapper.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData;

@interface ICLocalFileWrapper : NSFileWrapper <NSSecureCoding> {

	NSURL* _localURL;
	NSData* _cachedData;

}

@property (nonatomic,retain) NSURL * localURL;                 //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,retain) NSData * cachedData;              //@synthesize cachedData=_cachedData - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isDirectory;
-(id)fileWrappers;
-(void)removeFileWrapper:(id)arg1 ;
-(id)addFileWrapper:(id)arg1 ;
-(BOOL)isSymbolicLink;
-(BOOL)matchesContentsOfURL:(id)arg1 ;
-(BOOL)readFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)symbolicLinkDestinationURL;
-(id)keyForFileWrapper:(id)arg1 ;
-(id)serializedRepresentation;
-(id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)regularFileContents;
-(id)preferredFilename;
-(NSURL *)localURL;
-(BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id*)arg4 ;
-(NSData *)cachedData;
-(void)setCachedData:(NSData *)arg1 ;
-(id)initWithLocalURL:(id)arg1 ;
-(void)setLocalURL:(NSURL *)arg1 ;
-(id)dataWithError:(id*)arg1 ;
-(id)fileAttributes;
-(id)filename;
@end
