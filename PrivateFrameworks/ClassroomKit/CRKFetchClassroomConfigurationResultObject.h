/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchClassroomConfigurationResultObject : CATTaskResultObject {

	NSDictionary* _configuration;

}

@property (nonatomic,copy) NSDictionary * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)configuration;
@end
