/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:21 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STSiriMessage;

@interface STShowMessageRequest : AFSiriRequest {

	STSiriMessage* _message;
	BOOL _showAsDraft;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)message;
-(BOOL)showAsDraft;
-(id)createResponse;
-(BOOL)_makeAppFrontmost;
-(id)_initWithMessage:(id)arg1 showAsDraft:(BOOL)arg2 ;
@end
