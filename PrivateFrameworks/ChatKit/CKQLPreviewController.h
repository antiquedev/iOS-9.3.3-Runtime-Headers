/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLPreviewController.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>

@class NSArray;

@interface CKQLPreviewController : QLPreviewController <QLPreviewControllerDataSource> {

	NSArray* _previewItems;

}

@property (nonatomic,copy) NSArray * previewItems;              //@synthesize previewItems=_previewItems - In the implementation block
-(void)setDataSource:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)previewActions;
-(id)currentPreviewItem;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(void)setPreviewItems:(NSArray *)arg1 ;
-(NSArray *)previewItems;
@end
