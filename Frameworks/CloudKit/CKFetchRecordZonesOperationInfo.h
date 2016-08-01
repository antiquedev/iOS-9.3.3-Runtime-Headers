/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKFetchRecordZonesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _isFetchAllRecordZonesOperation;
	BOOL _ignorePCSFailures;
	NSArray* _recordZoneIDs;

}

@property (nonatomic,retain) NSArray * recordZoneIDs;                          //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllRecordZonesOperation;              //@synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation - In the implementation block
@property (assign,nonatomic) BOOL ignorePCSFailures;                           //@synthesize ignorePCSFailures=_ignorePCSFailures - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(void)setIsFetchAllRecordZonesOperation:(BOOL)arg1 ;
-(void)setIgnorePCSFailures:(BOOL)arg1 ;
-(NSArray *)recordZoneIDs;
-(BOOL)isFetchAllRecordZonesOperation;
-(BOOL)ignorePCSFailures;
@end
