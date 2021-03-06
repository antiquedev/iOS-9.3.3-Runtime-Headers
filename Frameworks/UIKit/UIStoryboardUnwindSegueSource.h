/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, UIViewController;

@interface UIStoryboardUnwindSegueSource : NSObject {

	NSMutableArray* _searchChain;
	UIViewController* _sourceViewController;
	SEL _unwindAction;
	id _sender;

}

@property (readonly) UIViewController * sourceViewController;              //@synthesize sourceViewController=_sourceViewController - In the implementation block
@property (readonly) SEL unwindAction;                                     //@synthesize unwindAction=_unwindAction - In the implementation block
@property (readonly) id sender;                                            //@synthesize sender=_sender - In the implementation block
-(id)init;
-(SEL)unwindAction;
-(UIViewController *)sourceViewController;
-(id)sender;
-(id)_childContainingUnwindSourceForViewController:(id)arg1 ;
-(id)_initWithSourceViewController:(id)arg1 action:(SEL)arg2 sender:(id)arg3 ;
-(id)_findDestination;
@end

