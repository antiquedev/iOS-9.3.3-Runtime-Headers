/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSDictionary;

@interface MSASAlbum : NSObject <NSCopying> {

	BOOL _isFamilySharedAlbum;
	int _relationshipState;
	NSString* _ownerEmail;
	NSString* _ownerPersonID;
	NSString* _ownerFullName;
	NSString* _ownerFirstName;
	NSString* _ownerLastName;
	NSDate* _subscriptionDate;
	NSString* _GUID;
	NSString* _ctag;
	NSString* _foreignCtag;
	NSString* _URLString;
	NSString* _publicURLString;
	NSDictionary* _metadata;
	id _context;

}

@property (nonatomic,retain) NSString * ownerEmail;                   //@synthesize ownerEmail=_ownerEmail - In the implementation block
@property (nonatomic,retain) NSString * ownerFullName;                //@synthesize ownerFullName=_ownerFullName - In the implementation block
@property (nonatomic,retain) NSString * ownerPersonID;                //@synthesize ownerPersonID=_ownerPersonID - In the implementation block
@property (nonatomic,retain) NSString * ownerFirstName;               //@synthesize ownerFirstName=_ownerFirstName - In the implementation block
@property (nonatomic,retain) NSString * ownerLastName;                //@synthesize ownerLastName=_ownerLastName - In the implementation block
@property (nonatomic,retain) NSDate * subscriptionDate;               //@synthesize subscriptionDate=_subscriptionDate - In the implementation block
@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                         //@synthesize ctag=_ctag - In the implementation block
@property (assign,nonatomic) int relationshipState;                   //@synthesize relationshipState=_relationshipState - In the implementation block
@property (nonatomic,retain) NSString * foreignCtag;                  //@synthesize foreignCtag=_foreignCtag - In the implementation block
@property (nonatomic,retain) NSString * URLString;                    //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,retain) NSString * publicURLString;              //@synthesize publicURLString=_publicURLString - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                 //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) id context;                              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL isFamilySharedAlbum;                //@synthesize isFamilySharedAlbum=_isFamilySharedAlbum - In the implementation block
@property (nonatomic,readonly) BOOL useForeignCtag; 
+(BOOL)supportsSecureCoding;
+(id)albumWithAlbum:(id)arg1 ;
+(id)album;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)context;
-(void)setContext:(id)arg1 ;
-(NSString *)URLString;
-(void)setURLString:(NSString *)arg1 ;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSString *)ctag;
-(void)setCtag:(NSString *)arg1 ;
-(void)setOwnerEmail:(NSString *)arg1 ;
-(void)setOwnerPersonID:(NSString *)arg1 ;
-(void)setOwnerFullName:(NSString *)arg1 ;
-(void)setSubscriptionDate:(NSDate *)arg1 ;
-(void)setRelationshipState:(int)arg1 ;
-(NSString *)foreignCtag;
-(void)setForeignCtag:(NSString *)arg1 ;
-(void)setIsFamilySharedAlbum:(BOOL)arg1 ;
-(BOOL)useForeignCtag;
-(void)setPublicURLString:(NSString *)arg1 ;
-(void)setGUID:(NSString *)arg1 ;
-(NSString *)publicURLString;
-(int)relationshipState;
-(BOOL)isFamilySharedAlbum;
-(NSString *)ownerEmail;
-(NSString *)ownerFirstName;
-(NSString *)ownerLastName;
-(NSString *)ownerFullName;
-(NSString *)ownerPersonID;
-(NSDate *)subscriptionDate;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(id)metadataValueForKey:(id)arg1 ;
-(void)setOwnerFirstName:(NSString *)arg1 ;
-(void)setOwnerLastName:(NSString *)arg1 ;
-(NSString *)GUID;
@end
