/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSSearchIndexOperationDelegate <PSSpecifierObserver>
@optional
-(void)searchIndexOperationDidCancel:(id)arg1;

@required
-(void)searchIndexOperation:(id)arg1 didFindSpecifierDataSource:(id)arg2;
-(void)searchIndexOperationDidFinish:(id)arg1 searchEntries:(id)arg2;

@end
