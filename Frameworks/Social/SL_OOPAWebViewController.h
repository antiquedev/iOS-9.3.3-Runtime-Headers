/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIWebViewPrivateDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@protocol SL_OOPAWebViewControllerDelegate, SL_OOPAuthFlowDelegate;
@class WKWebView, UIWebView, SL_OOPASpinnerTitle, NSMutableURLRequest, NSObject, NSURL, NSString;

@interface SL_OOPAWebViewController : UIViewController <WKNavigationDelegate, UIWebViewDelegate, UIWebViewPrivateDelegate, NSURLConnectionDataDelegate> {

	WKWebView* _wkWebView;
	UIWebView* _uiWebView;
	SL_OOPASpinnerTitle* _spinnerTitleView;
	NSMutableURLRequest* _urlRequest;
	CFURLStorageSessionRef _storageSession;
	BOOL _hidingWebView;
	id<SL_OOPAWebViewControllerDelegate> _delegate;
	NSObject*<SL_OOPAuthFlowDelegate> _authFlowDelegate;
	NSURL* _authURL;
	NSString* _username;

}

@property (assign,nonatomic,__weak) id<SL_OOPAWebViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<SL_OOPAuthFlowDelegate> authFlowDelegate;                //@synthesize authFlowDelegate=_authFlowDelegate - In the implementation block
@property (nonatomic,copy) NSURL * authURL;                                                     //@synthesize authURL=_authURL - In the implementation block
@property (nonatomic,copy) NSString * navBarTitle; 
@property (nonatomic,copy) NSString * username;                                                 //@synthesize username=_username - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SL_OOPAWebViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SL_OOPAWebViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)_loadWebViewIfReady;
-(NSURL *)authURL;
-(void)_updateNavigationPromptWithActiveURL:(id)arg1 ;
-(void)_loadWebView;
-(NSString *)navBarTitle;
-(void)setNavBarTitle:(NSString *)arg1 ;
-(void)setAuthURL:(NSURL *)arg1 ;
-(void)setAuthFlowDelegate:(NSObject*<SL_OOPAuthFlowDelegate>)arg1 ;
-(NSObject*<SL_OOPAuthFlowDelegate>)authFlowDelegate;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)_cancelButtonTapped:(id)arg1 ;
@end
