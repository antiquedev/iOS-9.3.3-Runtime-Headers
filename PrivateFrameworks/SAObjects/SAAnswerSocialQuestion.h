/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAnswerAbstractSocialPost.h>

@class NSArray;

@interface SAAnswerSocialQuestion : SAAnswerAbstractSocialPost

@property (nonatomic,copy) NSArray * socialAnswers; 
+(id)socialQuestion;
+(id)socialQuestionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)socialAnswers;
-(void)setSocialAnswers:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

