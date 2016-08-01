/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:14 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIColor;

@interface TintedView : UIView {

	UIImage* _image;
	UIColor* _tintColor;

}

@property (nonatomic,retain) UIImage * image;                  //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(UIImage *)image;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
@end
