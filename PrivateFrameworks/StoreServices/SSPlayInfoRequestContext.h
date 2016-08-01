/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSData, NSArray;

@interface SSPlayInfoRequestContext : NSObject <SSXPCCoding, NSCopying> {

	NSNumber* _accountIdentifier;
	NSNumber* _contentIdentifier;
	NSString* _playerGUID;
	NSData* _sic;
	NSArray* _sinfs;
	NSString* _playbackType;

}

@property (nonatomic,copy) NSString * playerGUID;                     //@synthesize playerGUID=_playerGUID - In the implementation block
@property (nonatomic,copy) NSData * SICData;                          //@synthesize sic=_sic - In the implementation block
@property (nonatomic,copy) NSArray * sinfs;                           //@synthesize sinfs=_sinfs - In the implementation block
@property (nonatomic,copy) NSNumber * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * contentIdentifier;              //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * playbackType;                   //@synthesize playbackType=_playbackType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)SICData;
-(void)setContentIdentifier:(NSNumber *)arg1 ;
-(void)setPlaybackType:(NSString *)arg1 ;
-(NSString *)playerGUID;
-(void)setPlayerGUID:(NSString *)arg1 ;
-(void)setSICData:(NSData *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)playbackType;
-(void)setSinfs:(NSArray *)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSArray *)sinfs;
-(NSNumber *)contentIdentifier;
@end
