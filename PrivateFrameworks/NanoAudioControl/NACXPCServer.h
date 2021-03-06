/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:47 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NACXPCInterface.h>
#import <libobjc.A.dylib/NACIDSClientDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NPSDomainAccessor, NSMutableDictionary, NSXPCListener, NSMutableSet, NACIDSClient, NSObject, NSString;

@interface NACXPCServer : NSObject <NSXPCListenerDelegate, NACXPCInterface, NACIDSClientDelegate> {

	NPSDomainAccessor* _domainAccessor;
	NSMutableDictionary* _volumeRecords;
	NSMutableDictionary* _audioRoutesRecords;
	NSXPCListener* _xpcListener;
	NSMutableSet* _volumeObservers;
	NACIDSClient* _idsClient;
	float _hapticIntensity;
	BOOL _systemMutedState;
	NSObject*<OS_dispatch_queue> _audioAndHapticPreviewQueue;
	NSObject*<OS_dispatch_source> _audioRouteDeferTimer;
	BOOL _audioAndHapticPreviewIsPlaying;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)server;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)beginObservingVolume;
-(void)beginObservingAudioRoutesForCategory:(id)arg1 ;
-(void)endObservingVolume;
-(void)volumeValueForCategory:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)volumeControlAvailabilityForCategory:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)mutedStateForCategory:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)hapticIntensity:(/*^block*/id)arg1 ;
-(void)systemMutedState:(/*^block*/id)arg1 ;
-(void)EULimitForCategory:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)volumeWarningForCategory:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)setVolumeValue:(float)arg1 category:(id)arg2 ;
-(void)setMuted:(BOOL)arg1 category:(id)arg2 ;
-(void)setHapticIntensity:(float)arg1 ;
-(void)setSystemMuted:(BOOL)arg1 ;
-(void)audioRoutesForCategory:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)endObservingAudioRoutesForCategory:(id)arg1 ;
-(void)pickAudioRouteWithIdentifier:(id)arg1 category:(id)arg2 ;
-(void)playAudioAndHapticPreview;
-(id)_cachedVolumeRecords;
-(float)_cachedHapticIntensity;
-(BOOL)_cachedSystemMutedState;
-(void)_cleanupConnection:(id)arg1 ;
-(void)_endObservingVolumeForConnection:(id)arg1 ;
-(id)_volumeRecordForCategory:(id)arg1 ;
-(id)_audioRoutesRecordForCategory:(id)arg1 ;
-(void)_endObservingAudioRoutesForCategory:(id)arg1 connection:(id)arg2 ;
-(void)_persistVolumeRecords;
-(void)_persistHapticIntensity;
-(void)_persistSystemMutedState;
-(void)_scheduleDeferredAudioRoutesUpdate:(id)arg1 category:(id)arg2 ;
-(void)_updateAudioRoutes:(id)arg1 category:(id)arg2 ;
-(void)_cancelDeferredAudioRoutesUpdate;
-(id)_routeObservationCategoriesForConnection:(id)arg1 ;
-(void)client:(id)arg1 volumeValue:(float)arg2 didChangeForCategory:(id)arg3 ;
-(void)client:(id)arg1 volumeControlAvailable:(BOOL)arg2 didChangeForCategory:(id)arg3 ;
-(void)client:(id)arg1 mutedState:(BOOL)arg2 didChangeForCategory:(id)arg3 ;
-(void)client:(id)arg1 hapticIntensityDidChange:(float)arg2 ;
-(void)client:(id)arg1 EULimit:(float)arg2 didChangeForCategory:(id)arg3 ;
-(void)client:(id)arg1 volumeWarningEnabled:(BOOL)arg2 didChangeForCategory:(id)arg3 ;
-(void)client:(id)arg1 audioRoutes:(id)arg2 didChangeForCategory:(id)arg3 ;
-(void)clientVolumeObservationCancelled:(id)arg1 ;
-(void)client:(id)arg1 routeObservationCancelledForCategory:(id)arg2 ;
-(void)client:(id)arg1 systemMutedStateDidChange:(BOOL)arg2 ;
-(void)audioAndHapticPreviewHasCompletedPlaying;
@end

