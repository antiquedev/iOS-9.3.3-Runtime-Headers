/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OISFUZipArchive, NSMutableDictionary;

@interface TCBundleResourcePackage : NSObject {

	OISFUZipArchive* mZipArchive;
	NSMutableDictionary* mEntryMap;

}
-(void)dealloc;
-(id)initWithZipArchive:(id)arg1 ;
-(id)entryWithName:(id)arg1 cacheResult:(BOOL)arg2 ;
@end

