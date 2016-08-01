/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:10 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary, NSData, IDSMessageContext;

@interface IDSProtobuf : NSObject <NSCoding> {

	NSMutableDictionary* _protoBufParams;
	NSData* _uncompressedData;

}

@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) NSData * uncompressedData;                //@synthesize uncompressedData=_uncompressedData - In the implementation block
@property (assign,nonatomic) unsigned short type; 
@property (assign,nonatomic) BOOL isResponse; 
@property (nonatomic,retain) IDSMessageContext * context; 
+(id)keyRepresentationForType:(unsigned short)arg1 isResponse:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setType:(unsigned short)arg1 ;
-(unsigned short)type;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(IDSMessageContext *)context;
-(void)setContext:(IDSMessageContext *)arg1 ;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationWithUncompressedData;
-(NSData *)uncompressedData;
-(void)setUncompressedData:(NSData *)arg1 ;
-(void)setIsResponse:(BOOL)arg1 ;
-(BOOL)isResponse;
-(id)initWithProtobufData:(id)arg1 type:(unsigned short)arg2 isResponse:(BOOL)arg3 ;
@end
