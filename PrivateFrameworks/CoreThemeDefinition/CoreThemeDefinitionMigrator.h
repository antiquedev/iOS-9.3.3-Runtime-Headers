/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:39 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMigrationManager, NSURL, NSString;

@interface CoreThemeDefinitionMigrator : NSObject {

	NSMigrationManager* _migrationManager;
	NSURL* _documentURL;
	long long _oldVersion;
	long long _newVersion;
	NSString* temporaryMigrationPath;

}

@property (copy) NSString * temporaryMigrationPath; 
-(void)dealloc;
-(NSString *)temporaryMigrationPath;
-(void)setTemporaryMigrationPath:(NSString *)arg1 ;
-(BOOL)_checkDiskSpace:(id*)arg1 ;
-(id)mappingModelForMigrationWithError:(id*)arg1 ;
-(BOOL)_updateMetadata:(id*)arg1 ;
-(id)initWithURL:(id)arg1 oldVersion:(long long)arg2 newVersion:(long long)arg3 ;
-(BOOL)migrateWithError:(id*)arg1 ;
@end

