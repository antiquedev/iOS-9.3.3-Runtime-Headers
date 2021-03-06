/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSString, NSArray, IKTextElement, IKProgressIndicatorElement, IKActivityIndicatorElement, IKCheckMarkElement, IKOrdinalElement, IKViewElement;

@interface IKListItemLockupElement : IKViewElement

@property (nonatomic,readonly) NSString * itemHeight; 
@property (nonatomic,retain,readonly) NSArray * images; 
@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) IKTextElement * subtitle; 
@property (nonatomic,retain,readonly) NSArray * decorationImages; 
@property (nonatomic,retain,readonly) IKTextElement * decorationLabel; 
@property (nonatomic,retain,readonly) IKProgressIndicatorElement * progressIndicator; 
@property (nonatomic,retain,readonly) IKActivityIndicatorElement * activityIndicator; 
@property (nonatomic,retain,readonly) IKCheckMarkElement * checkMark; 
@property (nonatomic,retain,readonly) IKOrdinalElement * ordinal; 
@property (nonatomic,retain,readonly) IKViewElement * relatedContent; 
-(IKTextElement *)title;
-(NSArray *)images;
-(IKTextElement *)subtitle;
-(IKActivityIndicatorElement *)activityIndicator;
-(IKOrdinalElement *)ordinal;
-(IKProgressIndicatorElement *)progressIndicator;
-(NSString *)itemHeight;
-(IKViewElement *)relatedContent;
-(IKTextElement *)decorationLabel;
-(NSArray *)decorationImages;
-(IKCheckMarkElement *)checkMark;
@end

