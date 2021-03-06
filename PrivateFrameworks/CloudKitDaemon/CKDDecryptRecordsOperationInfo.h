/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray, NSDictionary;

@interface CKDDecryptRecordsOperationInfo : CKDatabaseOperationInfo {

	NSArray* _recordsToDecrypt;
	NSDictionary* _webSharingIdentityDataByRecordID;

}

@property (nonatomic,retain) NSArray * recordsToDecrypt;                                   //@synthesize recordsToDecrypt=_recordsToDecrypt - In the implementation block
@property (nonatomic,retain) NSDictionary * webSharingIdentityDataByRecordID;              //@synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID - In the implementation block
-(NSDictionary *)webSharingIdentityDataByRecordID;
-(void)setRecordsToDecrypt:(NSArray *)arg1 ;
-(void)setWebSharingIdentityDataByRecordID:(NSDictionary *)arg1 ;
-(NSArray *)recordsToDecrypt;
@end

