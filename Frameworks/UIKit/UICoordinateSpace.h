/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:38 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UICoordinateSpace <NSObject>
@property (nonatomic,readonly) CGRect bounds; 
@required
-(CGRect)bounds;
-(CGRect*)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2;
-(CGRect*)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2;
-(CGPoint*)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2;
-(CGPoint*)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2;

@end

