/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSString, SAUIImageResource;

@interface SAVCSContentDetailPage : SAAceView

@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,copy) NSString * loadingText; 
@property (nonatomic,copy) NSString * seasonId; 
@property (nonatomic,copy) NSString * showId; 
@property (assign,nonatomic) BOOL userDriven; 
@property (nonatomic,copy) NSString * utsId; 
+(id)contentDetailPage;
+(id)contentDetailPageWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setContentType:(NSString *)arg1 ;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(SAUIImageResource *)image;
-(NSString *)contentType;
-(id)groupIdentifier;
-(NSString *)utsId;
-(void)setUtsId:(NSString *)arg1 ;
-(NSString *)seasonId;
-(void)setSeasonId:(NSString *)arg1 ;
-(NSString *)showId;
-(void)setShowId:(NSString *)arg1 ;
-(BOOL)userDriven;
-(void)setUserDriven:(BOOL)arg1 ;
-(NSString *)loadingText;
-(void)setLoadingText:(NSString *)arg1 ;
-(id)encodedClassName;
@end

