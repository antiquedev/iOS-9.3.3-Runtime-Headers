/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLPullFromTransportTaskDelegate <CPLEngineSyncTaskDelegate>
@required
-(BOOL)taskSupportsBatchDownloadPipelining:(id)arg1;
-(id)task:(id)arg1 wantsToQueryTaskForCursor:(id)arg2 class:(Class)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5;
-(id)task:(id)arg1 wantsToDownloadBatchesFromSyncAnchor:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4;

@end
