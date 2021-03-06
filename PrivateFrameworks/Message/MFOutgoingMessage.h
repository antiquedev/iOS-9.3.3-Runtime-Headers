/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailMessage.h>

@class MFMessageBody, MFMutableMessageHeaders;

@interface MFOutgoingMessage : MFMailMessage {

	MFMessageBody* _messageBody;
	MFMutableMessageHeaders* _messageHeaders;

}
-(void)dealloc;
-(unsigned long long)messageSize;
-(BOOL)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(id)messageDataHolder;
-(BOOL)messageDataHolder:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(void)setMutableHeaders:(id)arg1 ;
-(id)messageStore;
-(id)headersIfAvailable;
-(id)messageBodyIfAvailable;
-(id)mutableHeaders;
-(id)headers;
-(id)messageBody;
-(void)setMessageBody:(id)arg1 ;
-(id)messageData;
@end

