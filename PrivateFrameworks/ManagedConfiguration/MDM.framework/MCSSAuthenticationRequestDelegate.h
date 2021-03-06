/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MDM/MCSSRequestDelegate.h>
#import <libobjc.A.dylib/SSAuthenticateRequestDelegate.h>

@class SSAccount, SSAuthenticateRequest, NSString;

@interface MCSSAuthenticationRequestDelegate : MCSSRequestDelegate <SSAuthenticateRequestDelegate> {

	SSAccount* _authenticatedAccount;

}

@property (nonatomic,retain,readonly) SSAuthenticateRequest * request; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithAuthenticationContext:(id)arg1 ;
-(void)authenticateRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)storeLoginFailedError;
@end

