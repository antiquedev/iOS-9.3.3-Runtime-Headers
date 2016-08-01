/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SUBDescriptor, SUBProgress;

@interface SUBDownload : NSObject <NSSecureCoding> {

	SUBDescriptor* _descriptor;
	SUBProgress* _progress;

}

@property (nonatomic,retain) SUBDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) SUBProgress * progress;                  //@synthesize progress=_progress - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)downloadWithDescriptor:(id)arg1 andProgress:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setProgress:(SUBProgress *)arg1 ;
-(void)setDescriptor:(SUBDescriptor *)arg1 ;
-(SUBProgress *)progress;
-(SUBDescriptor *)descriptor;
-(id)initWithDescriptor:(id)arg1 ;
@end
