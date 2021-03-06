/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:22 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSString;

@interface ASItemOperationsFetchAttachmentProperties : ASItem {

	NSString* _attachmentContentType;
	NSString* _data;

}

@property (nonatomic,retain) NSString * attachmentContentType;              //@synthesize attachmentContentType=_attachmentContentType - In the implementation block
@property (nonatomic,retain) NSString * data;                               //@synthesize data=_data - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSString *)data;
-(void)setData:(NSString *)arg1 ;
-(NSString *)attachmentContentType;
-(void)setAttachmentContentType:(NSString *)arg1 ;
@end

