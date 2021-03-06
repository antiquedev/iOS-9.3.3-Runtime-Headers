/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:11 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRTextInputTraitsProtobuf, NSString;

@interface _MRTextEditingAttributesProtobuf : PBCodable <NSCopying> {

	_MRTextInputTraitsProtobuf* _inputTraits;
	NSString* _prompt;
	NSString* _title;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasPrompt; 
@property (nonatomic,retain) NSString * prompt;                                     //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,readonly) BOOL hasInputTraits; 
@property (nonatomic,retain) _MRTextInputTraitsProtobuf * inputTraits;              //@synthesize inputTraits=_inputTraits - In the implementation block
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTitle;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setInputTraits:(_MRTextInputTraitsProtobuf *)arg1 ;
-(BOOL)hasPrompt;
-(BOOL)hasInputTraits;
-(_MRTextInputTraitsProtobuf *)inputTraits;
@end

