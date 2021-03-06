/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SPSearchResult, SPSearchResultSection, NSArray, NSString, SPUISearchResultsActionManager;

@interface SPUISearchResultsAction : NSObject {

	BOOL _sendDestinationEngagementFeedback;
	SPSearchResult* _result;
	SPSearchResultSection* _section;
	NSArray* _urls;
	NSString* _cardTypeForFeedback;
	SPUISearchResultsActionManager* _actionManager;

}

@property (readonly) SPSearchResult * result;                                             //@synthesize result=_result - In the implementation block
@property (readonly) SPSearchResultSection * section;                                     //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) NSArray * urls;                                              //@synthesize urls=_urls - In the implementation block
@property (assign) BOOL sendDestinationEngagementFeedback;                                //@synthesize sendDestinationEngagementFeedback=_sendDestinationEngagementFeedback - In the implementation block
@property (retain) NSString * cardTypeForFeedback;                                        //@synthesize cardTypeForFeedback=_cardTypeForFeedback - In the implementation block
@property (assign,nonatomic) SPUISearchResultsActionManager * actionManager;              //@synthesize actionManager=_actionManager - In the implementation block
+(id)actionForResult:(id)arg1 inSection:(id)arg2 ;
-(SPSearchResultSection *)section;
-(SPSearchResult *)result;
-(void)setUrls:(NSArray *)arg1 ;
-(NSArray *)urls;
-(id)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(SPUISearchResultsActionManager *)actionManager;
-(void)cancelAnimated:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(BOOL)sendDestinationEngagementFeedback;
-(void)setSendDestinationEngagementFeedback:(BOOL)arg1 ;
-(NSString *)cardTypeForFeedback;
-(void)setCardTypeForFeedback:(NSString *)arg1 ;
-(void)setActionManager:(SPUISearchResultsActionManager *)arg1 ;
@end

