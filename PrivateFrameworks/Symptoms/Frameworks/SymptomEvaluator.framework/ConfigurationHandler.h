/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>

@class NSDictionary, NSString;

@interface ConfigurationHandler : NSObject <ManagedEventInfoProtocol> {

	NSDictionary* _buildInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)initialize;
+(void)setConfigurationObject:(id)arg1 forName:(id)arg2 ;
+(int)read:(id)arg1 returnedValues:(id)arg2 ;
+(id)objectForName:(id)arg1 ;
+(id)classRepresentativeForName:(id)arg1 ;
+(void)dumpAll;
+(int)configureItems:(id)arg1 ;
-(int)configure:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)generateInfoForId:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_configureHandlerClass:(id)arg1 ;
-(id)_configureBuildDetails:(id)arg1 ;
@end
