/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:22 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class AAGrandSlamSigner;

@interface AAFamilyRequest : AARequest {

	AAGrandSlamSigner* _grandSlamSigner;

}

@property (nonatomic,readonly) BOOL isUserInitiated; 
-(id)urlRequest;
-(id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 ;
-(id)initWithGrandSlamSigner:(id)arg1 ;
-(BOOL)isUserInitiated;
@end

