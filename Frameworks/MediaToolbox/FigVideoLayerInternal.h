/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSObject;

@interface FigVideoLayerInternal : NSObject {

	BOOL isPresentationLayer;
	BOOL visible;
	OpaqueFigSimpleMutexRef serializationMutex;
	NSObject*<OS_dispatch_queue> notificationSerialQueue;

}
@end
