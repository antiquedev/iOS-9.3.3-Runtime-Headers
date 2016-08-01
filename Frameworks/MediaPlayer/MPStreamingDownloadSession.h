/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSURL;

@interface MPStreamingDownloadSession : NSObject <NSCopying> {

	BOOL _didStartLeaseSession;
	NSString* _assetFlavor;
	unsigned long long _assetQuality;
	unsigned long long _downloadToken;
	unsigned long long _protectionType;
	NSDictionary* _purchaseBundle;
	NSDictionary* _responseAssetDictionary;
	NSURL* _sourceURL;

}

@property (nonatomic,copy) NSString * assetFlavor;                                //@synthesize assetFlavor=_assetFlavor - In the implementation block
@property (assign,nonatomic) unsigned long long assetQuality;                     //@synthesize assetQuality=_assetQuality - In the implementation block
@property (assign,nonatomic) BOOL didStartLeaseSession;                           //@synthesize didStartLeaseSession=_didStartLeaseSession - In the implementation block
@property (assign,nonatomic) unsigned long long downloadToken;                    //@synthesize downloadToken=_downloadToken - In the implementation block
@property (assign,nonatomic) unsigned long long protectionType;                   //@synthesize protectionType=_protectionType - In the implementation block
@property (nonatomic,copy) NSDictionary * purchaseBundle;                         //@synthesize purchaseBundle=_purchaseBundle - In the implementation block
@property (nonatomic,retain) NSDictionary * responseAssetDictionary;              //@synthesize responseAssetDictionary=_responseAssetDictionary - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                                     //@synthesize sourceURL=_sourceURL - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSString *)assetFlavor;
-(void)setAssetFlavor:(NSString *)arg1 ;
-(unsigned long long)assetQuality;
-(void)setAssetQuality:(unsigned long long)arg1 ;
-(BOOL)didStartLeaseSession;
-(void)setDidStartLeaseSession:(BOOL)arg1 ;
-(void)setDownloadToken:(unsigned long long)arg1 ;
-(unsigned long long)protectionType;
-(void)setProtectionType:(unsigned long long)arg1 ;
-(NSDictionary *)purchaseBundle;
-(void)setPurchaseBundle:(NSDictionary *)arg1 ;
-(NSDictionary *)responseAssetDictionary;
-(void)setResponseAssetDictionary:(NSDictionary *)arg1 ;
-(unsigned long long)downloadToken;
@end
