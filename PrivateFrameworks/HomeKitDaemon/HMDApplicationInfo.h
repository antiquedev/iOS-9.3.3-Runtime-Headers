/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:44 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface HMDApplicationInfo : NSObject {

	BOOL _spiClient;
	NSString* _teamIdentifier;
	NSString* _bundleIdentifier;
	NSString* _companionAppBundleIdentifier;
	NSMutableDictionary* _activeProcesses;

}

@property (getter=isSPIClient,nonatomic,readonly) BOOL spiClient;                         //@synthesize spiClient=_spiClient - In the implementation block
@property (nonatomic,copy,readonly) NSString * teamIdentifier;                            //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * companionAppBundleIdentifier;              //@synthesize companionAppBundleIdentifier=_companionAppBundleIdentifier - In the implementation block
@property (getter=isFrontMostApp,nonatomic,readonly) BOOL frontMostApp; 
@property (nonatomic,readonly) NSMutableDictionary * activeProcesses;                     //@synthesize activeProcesses=_activeProcesses - In the implementation block
-(id)init;
-(id)description;
-(NSString *)bundleIdentifier;
-(NSString *)companionAppBundleIdentifier;
-(NSString *)teamIdentifier;
-(NSMutableDictionary *)activeProcesses;
-(id)initWithBundleIdentifier:(id)arg1 teamIdentifier:(id)arg2 companionAppBundleIdentifier:(id)arg3 spiClient:(BOOL)arg4 ;
-(BOOL)isFrontMostApp;
-(BOOL)isSPIClient;
@end

