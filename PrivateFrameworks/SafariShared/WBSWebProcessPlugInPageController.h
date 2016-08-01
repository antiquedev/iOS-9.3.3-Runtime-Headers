/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:21 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WKWebProcessPlugInLoadDelegate.h>

@class WKWebProcessPlugInBrowserContextController, WBSWebProcessPlugIn, WKWebProcessPlugInFrame, NSString;

@interface WBSWebProcessPlugInPageController : NSObject <WKWebProcessPlugInLoadDelegate> {

	WKWebProcessPlugInBrowserContextController* _browserContextController;
	WBSWebProcessPlugIn* _webProcessPlugIn;

}

@property (nonatomic,readonly) WKWebProcessPlugInFrame * mainFrame; 
@property (nonatomic,readonly) WKWebProcessPlugInBrowserContextController * browserContextController;              //@synthesize browserContextController=_browserContextController - In the implementation block
@property (nonatomic,readonly) WBSWebProcessPlugIn * webProcessPlugIn;                                             //@synthesize webProcessPlugIn=_webProcessPlugIn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(WKWebProcessPlugInFrame *)mainFrame;
-(WKWebProcessPlugInBrowserContextController *)browserContextController;
-(id)requestIfDoNotTrackEnabled:(id)arg1 ;
-(id)initWithPlugIn:(id)arg1 contextController:(id)arg2 ;
-(void)willDestroyBrowserContextController:(id)arg1 ;
-(WBSWebProcessPlugIn *)webProcessPlugIn;
@end
