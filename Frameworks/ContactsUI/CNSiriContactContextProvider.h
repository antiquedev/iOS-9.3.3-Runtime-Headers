/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFContextProvider.h>

@class CNContact, CNContactStore;

@interface CNSiriContactContextProvider : NSObject <AFContextProvider> {

	CNContact* _contact;
	CNContactStore* _store;

}
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithContact:(id)arg1 store:(id)arg2 ;
-(id)contextManager;
-(void)_removeContextProviderOnMainThread;
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
@end

