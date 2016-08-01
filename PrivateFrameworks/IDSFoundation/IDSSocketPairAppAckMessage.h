/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSString;

@interface IDSSocketPairAppAckMessage : IDSSocketPairMessage {

	unsigned long long _offset;
	unsigned _sequenceNumber;
	unsigned short _streamID;
	NSString* _peerResponseIdentifier;

}

@property (assign,nonatomic) unsigned sequenceNumber;                                 //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) unsigned short streamID;                                 //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,retain,readonly) NSString * peerResponseIdentifier;              //@synthesize peerResponseIdentifier=_peerResponseIdentifier - In the implementation block
-(void)dealloc;
-(unsigned)sequenceNumber;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(NSString *)peerResponseIdentifier;
-(id)initWithSequenceNumber:(unsigned)arg1 streamID:(unsigned short)arg2 peerResponseIdentifier:(id)arg3 ;
-(unsigned short)streamID;
-(void)setStreamID:(unsigned short)arg1 ;
-(unsigned char)command;
@end
