/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLPrintPageRendererDataSource <NSObject>
@required
-(long long)numberOfPagesInPrintPageRenderer:(id)arg1;
-(void)printPageRenderer:(id)arg1 prepareForDrawingPages:(NSRange)arg2;
-(id)printPageRenderer:(id)arg1 pdfDataForPageAtIndex:(long long)arg2 printingDone:(BOOL*)arg3;

@end
