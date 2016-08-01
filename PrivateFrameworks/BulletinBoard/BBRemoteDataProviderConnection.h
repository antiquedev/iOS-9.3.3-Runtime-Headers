/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBRemoteDataProviderDelegate.h>
#import <libobjc.A.dylib/BBDataProviderConnectionServerProxy.h>
#import <libobjc.A.dylib/BBDataProviderStore.h>

@protocol BBRemoteDataProviderStoreDelegate, OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary;

@interface BBRemoteDataProviderConnection : NSObject <BBRemoteDataProviderDelegate, BBDataProviderConnectionServerProxy, BBDataProviderStore> {

	NSString* _serviceName;
	NSString* _bundleID;
	BOOL _connected;
	id<BBRemoteDataProviderStoreDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _dataProvidersBySectionID;
	NSMutableDictionary* _dataProvidersByUniversalSectionID;
	BOOL _clientReady;

}

@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,copy) NSString * serviceName;                  //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                     //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)serviceName;
-(void)dealloc;
-(NSString *)debugDescription;
-(void)addDataProviderWithSectionID:(id)arg1 clientProxy:(id)arg2 identity:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeDataProviderWithSectionID:(id)arg1 ;
-(void)addParentSectionFactory:(id)arg1 ;
-(void)clientIsReady:(/*^block*/id)arg1 ;
-(id)debugDescriptionWithChildren:(unsigned long long)arg1 ;
-(id)dataProviderForSectionID:(id)arg1 ;
-(void)remoteDataProviderNeedsToWakeClient:(id)arg1 ;
-(void)_queue_removeDataProvider:(id)arg1 ;
-(id)dataProviderForUniversalSectionID:(id)arg1 ;
-(void)removeDataProvider:(id)arg1 ;
-(void)performBlockOnDataProviders:(/*^block*/id)arg1 ;
-(id)initWithServiceName:(id)arg1 bundleID:(id)arg2 delegate:(id)arg3 ;
-(void)setConnected:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadAllDataProviders;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(BOOL)isConnected;
-(void)setServiceName:(NSString *)arg1 ;
@end
