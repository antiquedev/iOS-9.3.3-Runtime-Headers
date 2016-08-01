/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLCache.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject;

@interface __NSCFMemoryURLCache : NSURLCache {

	id _internal;
	unsigned long long _memoryCapacity;
	unsigned long long _currentLength;
	NSMutableDictionary* _memoryStorage;
	NSMutableArray* _memoryStorageLRU;
	NSObject*<OS_dispatch_queue> _memoryQueue;

}
+(void)initialize;
-(unsigned long long)currentDiskUsage;
-(id)initByCallingSuperSuperInit;
-(id)initEmptyCache;
-(id)initMemoryCache;
-(unsigned long long)currentMemoryUsage;
-(unsigned long long)diskCapacity;
-(unsigned long long)memoryCapacity;
-(void)dealloc;
-(id)description;
-(id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3 ;
-(void)setMemoryCapacity:(unsigned long long)arg1 ;
-(void)setDiskCapacity:(unsigned long long)arg1 ;
-(id)cachedResponseForRequest:(id)arg1 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)removeCachedResponseForRequest:(id)arg1 ;
-(void)removeAllCachedResponses;
@end
