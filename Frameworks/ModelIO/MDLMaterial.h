/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLNamed.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, MDLScatteringFunction, NSString;

@interface MDLMaterial : NSObject <MDLNamed, NSFastEnumeration> {

	NSMutableArray* _userProperties;
	NSMutableArray* _builtinProperties;
	MDLScatteringFunction* _scatteringFunction;
	NSString* _name;
	MDLMaterial* _baseMaterial;

}

@property (nonatomic,retain,readonly) MDLScatteringFunction * scatteringFunction; 
@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) MDLMaterial * baseMaterial;                                       //@synthesize baseMaterial=_baseMaterial - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) BidirectionalScatteringDistributionFunction* bsdf; 
-(id)propertyNamed:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MD4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setScatteringFunction:(MDLScatteringFunction *)arg1 ;
-(MDLMaterial *)baseMaterial;
-(MDLScatteringFunction *)scatteringFunction;
-(id)initWithName:(id)arg1 physicallyPlausibleBSDF:(PhysicallyPlausibleDistribution*)arg2 ;
-(void)removeAllProperties;
-(BidirectionalScatteringDistributionFunction*)bsdf;
-(void)setBaseMaterial:(MDLMaterial *)arg1 ;
-(void)setProperty:(id)arg1 ;
-(void)removeProperty:(id)arg1 ;
-(id)initWithName:(id)arg1 scatteringFunction:(id)arg2 ;
-(id)propertyWithSemantic:(unsigned long long)arg1 ;
@end
