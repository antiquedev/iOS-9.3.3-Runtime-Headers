/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface IMDirectlyObservableObject : NSObject {

	NSArray* _observers;

}

@property (retain) NSArray * observers;              //@synthesize observers=_observers - In the implementation block
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSArray *)arg1 ;
-(NSArray *)observers;
-(void)_objectDidPostNotification:(id)arg1 ;
-(void)informObserversOfNotification:(id)arg1 ;
@end

