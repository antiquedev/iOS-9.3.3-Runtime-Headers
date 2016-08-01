/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSStoreMappingGenerator : NSObject
+(id)defaultMappingGenerator;
+(void)invalidate;
-(id)externalNameForEntityName:(id)arg1 ;
-(id)mappingsDictForConfigurationWithName:(id)arg1 inModel:(id)arg2 ;
-(id)externalNameForPropertyName:(id)arg1 ;
-(id)mappingForAttribute:(id)arg1 forConfigurationWithName:(id)arg2 ;
-(id)mappingForRelationship:(id)arg1 forConfigurationWithName:(id)arg2 ;
-(id)primaryKeyForEntity:(id)arg1 ;
-(id)joinsForRelationship:(id)arg1 ;
-(id)mappingForEntity:(id)arg1 forConfigurationWithName:(id)arg2 ;
-(id)mappingsForConfigurationWithName:(id)arg1 inModel:(id)arg2 ;
-(id)internalNameForEntityName:(id)arg1 version:(int)arg2 ;
-(id)internalNameForPropertyName:(id)arg1 version:(int)arg2 ;
@end
