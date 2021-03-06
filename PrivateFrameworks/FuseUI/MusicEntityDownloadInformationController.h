/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface MusicEntityDownloadInformationController : NSObject <MPStoreDownloadManagerObserver> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _invalidatesForMediaLibraryChanges;
	NSMutableDictionary* _observerTokenToRegisteredSource;
	NSMutableDictionary* _registeredSourceToActiveDownload;

}

@property (assign,nonatomic) BOOL invalidatesForMediaLibraryChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requiredDownloadInformationEntityValuePropertiesForItemType:(unsigned long long)arg1 ;
+(MusicEntityDownloadInformation)_downloadInformationForRegisteredSource:(id)arg1 activeDownload:(id)arg2 ;
+(id)_activeDownloadForIdentifierCollection:(id)arg1 ;
+(void)_updateRegisteredSource:(id)arg1 withIdentifierCollection:(id)arg2 valuesForProperties:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(void)setInvalidatesForMediaLibraryChanges:(BOOL)arg1 ;
-(id)addDownloadInformationObserverUsingBlock:(/*^block*/id)arg1 forEntityValueContext:(id)arg2 ;
-(void)removeDownloadInformationObserver:(id)arg1 ;
-(void)downloadManager:(id)arg1 didAddActiveDownloads:(id)arg2 removeActiveDownloads:(id)arg3 ;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2 ;
-(BOOL)invalidatesForMediaLibraryChanges;
@end

