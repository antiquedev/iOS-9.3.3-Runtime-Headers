/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:14 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSURLRequestProperties, SUMescalSession;

@interface SUSetupMescalSessionOperation : ISOperation {

	SSURLRequestProperties* _requestProperties;
	SUMescalSession* _session;

}

@property (readonly) SUMescalSession * mescalSession; 
-(void)dealloc;
-(void)run;
-(id)initWithURLRequestProperties:(id)arg1 ;
-(SUMescalSession *)mescalSession;
-(BOOL)_isMescalEnabled;
-(id)_setupSAPCertificate:(id*)arg1 ;
-(id)_setupSAPWithData:(id)arg1 error:(id*)arg2 ;
@end

