/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _HKWeakObserversMap : NSObject {

	NSMutableDictionary* _observers;

}
-(void)addObserver:(id)arg1 forKey:(id)arg2 ;
-(void)removeObserver:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)observerCountForKey:(id)arg1 ;
-(id)observersForKey:(id)arg1 ;
@end

