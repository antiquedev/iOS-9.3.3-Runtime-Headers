/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:56 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>

@class BKSApplicationStateMonitor, NSMutableArray, NSString;

@interface AFUIApplicationStateHelper : NSObject <FBSDisplayLayoutObserver> {

	BKSApplicationStateMonitor* _appStateMonitor;
	NSMutableArray* _foregroundAppInfos;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(void)_handleApplicationStateUpdate:(id)arg1 ;
-(void)_updateForAppInfoDictionaries:(id)arg1 ;
-(void)_appInfoDictionariesForDisplayLayout:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)foregroundAppInfos;
@end

