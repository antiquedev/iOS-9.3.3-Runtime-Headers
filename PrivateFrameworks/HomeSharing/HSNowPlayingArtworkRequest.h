/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HomeSharing-Structs.h>
#import <HomeSharing/HSRequest.h>

@interface HSNowPlayingArtworkRequest : HSRequest {

	unsigned _interfaceID;
	unsigned _playQueueIndex;
	CGSize _maximumSize;

}

@property (nonatomic,readonly) unsigned interfaceID;                 //@synthesize interfaceID=_interfaceID - In the implementation block
@property (nonatomic,readonly) CGSize maximumSize;                   //@synthesize maximumSize=_maximumSize - In the implementation block
@property (nonatomic,readonly) unsigned playQueueIndex;              //@synthesize playQueueIndex=_playQueueIndex - In the implementation block
-(id)initWithInterfaceID:(unsigned)arg1 maximumSize:(CGSize)arg2 playQueueIndex:(unsigned)arg3 ;
-(unsigned)interfaceID;
-(unsigned)playQueueIndex;
-(CGSize)maximumSize;
-(id)canonicalResponseForResponse:(id)arg1 ;
@end

