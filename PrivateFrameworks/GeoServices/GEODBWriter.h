/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSString, NSMutableArray, NSMutableSet, NSLock, NSObject;

@interface GEODBWriter : NSObject {

	NSString* _path;
	sqlite3Ref _db;
	sqlite3_stmtRef _versionQuery;
	sqlite3_stmtRef _versionInsert;
	sqlite3_stmtRef _editionQuery;
	sqlite3_stmtRef _editionDelete;
	sqlite3_stmtRef _editionInvalidate;
	sqlite3_stmtRef _editionUpdate;
	sqlite3_stmtRef _editionInvalidateAll;
	sqlite3_stmtRef _tileInsert;
	sqlite3_stmtRef _tileDelete;
	sqlite3_stmtRef _tileSize;
	sqlite3_stmtRef _sizeQuery;
	long long _lastRowID;
	unsigned long long _databaseSize;
	unsigned long long _maxDatabaseSize;
	BOOL _closed;
	BOOL _defunct;
	NSMutableArray* _writeList;
	NSMutableSet* _uncommitedWriteSet;
	unsigned long long _pendingWriteBytes;
	NSLock* _writeListLock;
	NSObject*<OS_dispatch_queue> _writeQueue;
	void* _editionMap;
	long long _evictionRowsThreshold;
	SCD_Struct_GE54* _expirationRecords;
	unsigned long long _expirationRecordCount;
	BOOL _preloading;
	double _lastCheckedGeneralExpiration;
	unsigned long long _tileCacheMinimumWriteCount;
	unsigned long long _tileCacheMinimumWriteBytes;
	unsigned long long _tileCacheMaximumWriteCount;
	unsigned long long _tileCacheMaximumWriteBytes;
	NSString* _devicePostureCountry;
	NSString* _devicePostureRegion;
	BOOL _canCreateDebugTable;

}

@property (nonatomic,readonly) NSString * path;                               //@synthesize path=_path - In the implementation block
@property (assign) BOOL closed; 
@property (nonatomic,readonly) unsigned long long databaseSize;               //@synthesize databaseSize=_databaseSize - In the implementation block
@property (assign,nonatomic) unsigned long long maxDatabaseSize;              //@synthesize maxDatabaseSize=_maxDatabaseSize - In the implementation block
@property (nonatomic,readonly) NSString * devicePostureCountry;               //@synthesize devicePostureCountry=_devicePostureCountry - In the implementation block
@property (nonatomic,readonly) NSString * devicePostureRegion;                //@synthesize devicePostureRegion=_devicePostureRegion - In the implementation block
-(void)dealloc;
-(NSString *)path;
-(void)_updateSize;
-(id)initWithPath:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(void)_closeDB;
-(BOOL)closed;
-(void)setClosed:(BOOL)arg1 ;
-(void)setExpirationRecords:(SCD_Struct_GE54*)arg1 count:(unsigned long long)arg2 ;
-(void)_openIfNecessary;
-(void)_writeVersionForCountry:(id)arg1 region:(id)arg2 ;
-(void)_setCurrentDevicePostureToCountry:(id)arg1 region:(id)arg2 ;
-(unsigned long long)_freeableDiskSpace;
-(void)_countryChanged:(id)arg1 ;
-(unsigned long long)databaseSize;
-(BOOL)_readEditions;
-(void)_updateEdition:(unsigned)arg1 forTileset:(unsigned)arg2 provider:(unsigned)arg3 invalidateOnly:(BOOL)arg4 ;
-(void)_shrinkToUnderSize:(unsigned long long)arg1 vacuum:(BOOL)arg2 ;
-(void)_prepareStatements;
-(unsigned long long)_dbFileSize;
-(void)calculateFreeableSizeWithHandler:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(void)endPreloadSession;
-(void)_assertDatabaseSize;
-(void)_performWrites:(BOOL)arg1 ;
-(void)_printDBStatus:(const char*)arg1 ;
-(void)_createTables;
-(void)_deleteKey:(GEOTileKey)arg1 ;
-(void)flushPendingWrites;
-(BOOL)prepareSingleStatement:(sqlite3_stmt*)arg1 forSql:(id)arg2 ;
-(void)addData:(id)arg1 forKey:(GEOTileKey*)arg2 edition:(unsigned)arg3 set:(unsigned)arg4 provider:(unsigned)arg5 etag:(id)arg6 ;
-(void)_writeEntry:(id)arg1 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 ;
-(void)_editionUpdate:(id)arg1 ;
-(void)_evict;
-(BOOL)_tileSetExpires:(unsigned)arg1 ;
-(id)pendingWriteForKey:(GEOTileKey*)arg1 ;
-(void)evaluateDevicePostureAgainstCurrentManifest;
-(void)_dropWritesOnFloor:(id)arg1 ;
-(NSString *)devicePostureRegion;
-(void)shrinkBySize:(unsigned long long)arg1 callback:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(void)deleteData:(const GEOTileKey*)arg1 ;
-(NSString *)devicePostureCountry;
-(void)setMaxDatabaseSize:(unsigned long long)arg1 ;
-(void)_openDBForceRecreate:(BOOL)arg1 ;
-(void)shrinkToSize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(unsigned long long)maxDatabaseSize;
-(void)_deviceLocked;
-(void)pendingWritesForKeys:(id)arg1 handler:(/*^block*/id)arg2 ;
@end
