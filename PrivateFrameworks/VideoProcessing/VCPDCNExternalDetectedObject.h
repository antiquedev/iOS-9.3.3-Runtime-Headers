/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCPDCNExternalDetectedObject <NSObject>
@property (assign) long long objectType; 
@property (assign) CGRect bounds; 
@property (assign) CGPoint center; 
@required
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1;
-(void)setObjectType:(long long)arg1;
-(long long)objectType;

@end
