/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray;

@interface PKPaymentAvailableProductsResponse : PKPaymentWebServiceResponse {

	NSArray* _availableProducts;

}

@property (nonatomic,readonly) NSArray * availableProducts;              //@synthesize availableProducts=_availableProducts - In the implementation block
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(NSArray *)availableProducts;
@end
