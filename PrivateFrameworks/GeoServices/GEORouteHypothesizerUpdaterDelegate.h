/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:04 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEORouteHypothesizerUpdaterDelegate <NSObject>
@optional
-(void)routeHypothesizerUpdaterDidArrive:(id)arg1;
-(void)routeHypothesizerUpdater:(id)arg1 faultedWithError:(id)arg2;
-(void)routeHypothesizerUpdater:(id)arg1 didChangeTravelState:(BOOL)arg2;

@required
-(void)routeHypothesizerUpdater:(id)arg1 receivedNewRoute:(id)arg2 request:(id)arg3 response:(id)arg4;
-(void)routeHypothesizerUpdater:(id)arg1 willRequestNewRoute:(id)arg2;

@end
