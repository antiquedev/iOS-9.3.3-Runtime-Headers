/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFSearchResultHandler.h>
#import <libobjc.A.dylib/QueryProgressMonitor.h>

@class MFActivityMonitor;

@interface _MFBlockIterationHandler : NSObject <MFSearchResultHandler, QueryProgressMonitor> {

	/*^block*/id _block;
	BOOL _cancelled;
	MFActivityMonitor* _monitor;

}
-(void)handleMessage:(id)arg1 ;
-(void)dealloc;
-(void)beginResult:(unsigned)arg1 ;
-(void)setResultSubject:(char*)arg1 ;
-(void)setResultSender:(char*)arg1 ;
-(void)setResultDateRecieved:(double)arg1 ;
-(void)setResultUnread:(BOOL)arg1 ;
-(void)endResult;
-(BOOL)shouldCancel;
-(id)filter;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end
