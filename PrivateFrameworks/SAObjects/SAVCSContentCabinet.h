/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:17 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SAVCSContentCabinet : SAUISnippet

@property (assign,nonatomic) BOOL browseResults; 
@property (assign,nonatomic) BOOL fullScreenEnabled; 
@property (nonatomic,copy) NSArray * shelves; 
+(id)contentCabinet;
+(id)contentCabinetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)shelves;
-(void)setShelves:(NSArray *)arg1 ;
-(BOOL)browseResults;
-(void)setBrowseResults:(BOOL)arg1 ;
-(BOOL)fullScreenEnabled;
-(void)setFullScreenEnabled:(BOOL)arg1 ;
-(id)encodedClassName;
@end
