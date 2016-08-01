/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:24 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPPage;

@interface CPZoneFilter : NSObject {

	CPPage* page;
	double minArea;

}
+(void)filterZonesInPage:(id)arg1 ;
-(id)initWithPage:(id)arg1 ;
-(void)filterZonesInZone:(id)arg1 ;
-(void)findBackgroundGraphicsInZone:(id)arg1 ;
-(void)findUsedGraphicsInZone:(id)arg1 ;
@end
