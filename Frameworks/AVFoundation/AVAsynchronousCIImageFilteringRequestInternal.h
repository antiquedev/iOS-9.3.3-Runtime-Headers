/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAsynchronousVideoCompositionRequest, CIImage;

@interface AVAsynchronousCIImageFilteringRequestInternal : NSObject {

	AVAsynchronousVideoCompositionRequest* _compositingRequest;
	/*^block*/id _cancellationTest;
	/*^block*/id _defaultCIContextProvider;
	/*^block*/id _completionHandler;
	CIImage* _sourceCIImage;
	CVBufferRef _sourcePBuf;
	CGColorSpaceRef _dstColorSpace;

}

@property (nonatomic,retain) AVAsynchronousVideoCompositionRequest * compositingRequest;              //@synthesize compositingRequest=_compositingRequest - In the implementation block
@property (nonatomic,copy) id cancellationTest;                                                       //@synthesize cancellationTest=_cancellationTest - In the implementation block
@property (nonatomic,copy) id defaultCIContextProvider;                                               //@synthesize defaultCIContextProvider=_defaultCIContextProvider - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) CIImage * sourceCIImage;                                                 //@synthesize sourceCIImage=_sourceCIImage - In the implementation block
@property (nonatomic,retain) CVBufferRef sourcePBuf;                                                  //@synthesize sourcePBuf=_sourcePBuf - In the implementation block
@property (nonatomic,retain) CGColorSpaceRef dstColorSpace;                                           //@synthesize dstColorSpace=_dstColorSpace - In the implementation block
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_willDeallocOrFinalize;
-(AVAsynchronousVideoCompositionRequest *)compositingRequest;
-(void)setCompositingRequest:(AVAsynchronousVideoCompositionRequest *)arg1 ;
-(id)cancellationTest;
-(void)setCancellationTest:(id)arg1 ;
-(id)defaultCIContextProvider;
-(void)setDefaultCIContextProvider:(id)arg1 ;
-(CIImage *)sourceCIImage;
-(void)setSourceCIImage:(CIImage *)arg1 ;
-(CVBufferRef)sourcePBuf;
-(void)setSourcePBuf:(CVBufferRef)arg1 ;
-(CGColorSpaceRef)dstColorSpace;
-(void)setDstColorSpace:(CGColorSpaceRef)arg1 ;
-(void)finalize;
@end
