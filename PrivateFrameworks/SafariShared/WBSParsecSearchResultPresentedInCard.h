/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class WBSParsecSearchSession;


@protocol WBSParsecSearchResultPresentedInCard <NSObject>
@property (nonatomic,retain) WBSParsecSearchSession * parsecSearchSession; 
@property (nonatomic,readonly) BOOL willPresentResultInCard; 
@required
-(WBSParsecSearchSession *)parsecSearchSession;
-(void)setParsecSearchSession:(id)arg1;
-(BOOL)willPresentResultInCard;

@end
