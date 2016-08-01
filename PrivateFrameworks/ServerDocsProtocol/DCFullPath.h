/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DCService, NSString, NSData, NSURL;

@interface DCFullPath : NSObject {

	DCService* _service;
	NSString* _string;

}

@property (retain,readonly) NSData * documentIdentifier; 
@property (retain,readonly) DCService * service;                      //@synthesize service=_service - In the implementation block
@property (retain,readonly) NSString * string;                        //@synthesize string=_string - In the implementation block
@property (retain,readonly) NSURL * url; 
+(id)uploadFullPathWithParentRelativePath:(id)arg1 name:(id)arg2 ;
+(id)fullPathWithString:(id)arg1 forService:(id)arg2 ;
+(id)documentRootForService:(id)arg1 ;
+(id)metadataRootForService:(id)arg1 ;
+(id)fullPathWithString:(id)arg1 relativePath:(id)arg2 ;
+(id)metadataFullPathWithDocumentIdentifier:(id)arg1 name:(id)arg2 forService:(id)arg3 ;
+(id)fullPathWithDocumentIdentifier:(id)arg1 relativePath:(id)arg2 ;
+(id)_fullPathWithString:(id)arg1 forService:(id)arg2 ;
+(id)_fullPathWithRoot:(id)arg1 documentIdentifier:(id)arg2 name:(id)arg3 forService:(id)arg4 ;
+(id)_uploadDirectoryNameWithParentRelativePath:(id)arg1 ;
+(id)_fullPathWithDocumentIdentifier:(id)arg1 name:(id)arg2 forService:(id)arg3 ;
-(id)description;
-(id)debugDescription;
-(NSURL *)url;
-(NSString *)string;
-(DCService *)service;
-(NSData *)documentIdentifier;
@end
