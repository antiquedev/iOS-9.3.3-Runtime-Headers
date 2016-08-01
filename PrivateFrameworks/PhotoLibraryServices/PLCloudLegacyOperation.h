/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLCloudPhotoLibraryManager, PLCloudLegacyOperationResource;

@interface PLCloudLegacyOperation : NSObject {

	PLCloudPhotoLibraryManager* _connection;
	BOOL _running;
	unsigned long long _cost;
	long long _createdAt;
	PLCloudLegacyOperationResource* _operationResource;

}

@property (nonatomic,readonly) unsigned long long cost;                                       //@synthesize cost=_cost - In the implementation block
@property (nonatomic,readonly) long long createdAt;                                           //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) PLCloudPhotoLibraryManager * connection;                       //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) PLCloudLegacyOperationResource * operationResource;              //@synthesize operationResource=_operationResource - In the implementation block
@property (assign) BOOL running;                                                              //@synthesize running=_running - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(PLCloudPhotoLibraryManager *)connection;
-(long long)createdAt;
-(unsigned long long)cost;
-(void)runOperationWithCompletionHandler:(/*^block*/id)arg1 ;
-(PLCloudLegacyOperationResource *)operationResource;
-(void)requestCancel;
-(id)initWithCloudConnection:(id)arg1 ;
-(void)setOperationResource:(PLCloudLegacyOperationResource *)arg1 ;
-(BOOL)running;
-(void)setRunning:(BOOL)arg1 ;
-(id)resource;
@end
