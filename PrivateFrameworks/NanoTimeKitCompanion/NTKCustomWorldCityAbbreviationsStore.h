/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPSManager;

@interface NTKCustomWorldCityAbbreviationsStore : NSObject {

	NPSManager* _npsManager;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_notifyClientsOfChange;
-(void)_handlePrefsChanged;
-(id)customAbbreviations;
-(id)_getCustomAbbreviationsFromPrefs;
-(void)setCustomAbbreviation:(id)arg1 forCityIdentifier:(id)arg2 ;
@end
