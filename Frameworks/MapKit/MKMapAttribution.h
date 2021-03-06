/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString, NSURL, UIImage, NSString;

@interface MKMapAttribution : NSObject {

	NSAttributedString* _string;
	NSURL* _url;
	UIImage* _providerImage;
	NSString* _providerString;
	NSString* _providerName;

}

@property (nonatomic,readonly) NSString * providerString;                         //@synthesize providerString=_providerString - In the implementation block
@property (nonatomic,readonly) UIImage * providerImage;                           //@synthesize providerImage=_providerImage - In the implementation block
@property (nonatomic,readonly) NSString * providerName;                           //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,readonly) NSAttributedString * string;                       //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSAttributedString * disclosureArrow; 
-(NSURL *)url;
-(NSAttributedString *)string;
-(NSString *)providerName;
-(NSAttributedString *)disclosureArrow;
-(id)initWithStringAttributes:(id)arg1 regionalAttributions:(id)arg2 globalAttributions:(id)arg3 scale:(double)arg4 ;
-(NSString *)providerString;
-(UIImage *)providerImage;
-(id)attributedStringWithImage:(id)arg1 ;
@end

