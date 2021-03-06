/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSPurchaseManagerDelegate.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSArray, NSMutableSet, SSPurchaseManager, NSString;

@interface SSPurchaseRequest : SSRequest <SSPurchaseManagerDelegate, SSXPCCoding> {

	BOOL _isBackgroundRequest;
	NSArray* _purchases;
	BOOL _shouldValidatePurchases;
	/*^block*/id _completionBlock;
	BOOL _createsDownloads;
	NSMutableSet* _openPurchaseIdentifiers;
	/*^block*/id _purchaseBlock;
	/*^block*/id _purchaseResponseBlock;
	SSPurchaseManager* _purchaseManager;
	BOOL _needsAuthentication;

}

@property (readonly) NSArray * purchases; 
@property (assign,getter=isBackgroundRequest,nonatomic) BOOL backgroundRequest;              //@synthesize isBackgroundRequest=_isBackgroundRequest - In the implementation block
@property (assign,nonatomic) BOOL needsAuthentication;                                       //@synthesize needsAuthentication=_needsAuthentication - In the implementation block
@property (assign,nonatomic) id<SSPurchaseRequestDelegate> delegate; 
@property (assign,nonatomic) BOOL createsDownloads;                                          //@synthesize createsDownloads=_createsDownloads - In the implementation block
@property (assign,nonatomic) BOOL shouldValidatePurchases;                                   //@synthesize shouldValidatePurchases=_shouldValidatePurchases - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_addPurchasesToManager;
-(void)_finishPurchasesWithResponses:(id)arg1 ;
-(void)setCreatesDownloads:(BOOL)arg1 ;
-(id)_purchaseForUniqueIdentifier:(long long)arg1 ;
-(void)startWithPurchaseBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)isBackgroundRequest;
-(void)setBackgroundRequest:(BOOL)arg1 ;
-(BOOL)createsDownloads;
-(BOOL)shouldValidatePurchases;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(BOOL)start;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2 ;
-(BOOL)needsAuthentication;
-(NSArray *)purchases;
-(void)setShouldValidatePurchases:(BOOL)arg1 ;
-(id)initWithPurchases:(id)arg1 ;
-(void)startWithPurchaseResponseBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setNeedsAuthentication:(BOOL)arg1 ;
@end

