/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSMutableArray, ISURLOperation;

@interface ISURLOperationPoolOperation : ISOperation {

	long long _cancelCount;
	BOOL _forwardImmediately;
	NSMutableArray* _operations;

}

@property (nonatomic,readonly) ISURLOperation * mainOperation; 
-(void)dealloc;
-(void)addOperation:(id)arg1 ;
-(void)run;
-(BOOL)containsOperation:(id)arg1 ;
-(void)_forwardResponseFromOperation:(id)arg1 toOperation:(id)arg2 ;
-(void)cancelOperation:(id)arg1 ;
-(ISURLOperation *)mainOperation;
@end
