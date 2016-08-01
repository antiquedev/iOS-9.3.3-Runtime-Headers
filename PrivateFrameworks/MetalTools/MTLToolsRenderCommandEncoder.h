/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:46 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsCommandEncoder.h>
#import <libobjc.A.dylib/MTLRenderCommandEncoderSPI.h>

@class NSString;

@interface MTLToolsRenderCommandEncoder : MTLToolsCommandEncoder <MTLRenderCommandEncoderSPI>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
-(void)setFragmentTexture:(id)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id)arg3 atSamplerIndex:(unsigned long long)arg4 ;
-(void)setFragmentBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setLineWidth:(float)arg1 ;
-(void)setViewport:(SCD_Struct_MT8)arg1 ;
-(void)setScissorRect:(SCD_Struct_MT7)arg1 ;
-(void)setFrontFacingWinding:(unsigned long long)arg1 ;
-(void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3 ;
-(void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setVertexBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setVertexSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setCullMode:(unsigned long long)arg1 ;
-(void)setDepthStencilState:(id)arg1 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 ;
-(void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 ;
-(void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 ;
-(void)setRenderPipelineState:(id)arg1 ;
-(void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(void)acceptVisitor:(id)arg1 ;
-(void)setFragmentBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setFragmentTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setFragmentTexture:(id)arg1 baseLevel:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setFragmentSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4 ;
-(void)setFragmentSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setStencilReferenceValue:(unsigned)arg1 ;
-(void)setStencilFrontReferenceValue:(unsigned)arg1 backReferenceValue:(unsigned)arg2 ;
-(void)setVertexBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setVertexTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setVertexTexture:(id)arg1 baseLevel:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setVertexSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4 ;
-(void)setVertexSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setDepthClipMode:(unsigned long long)arg1 ;
-(void)setTriangleFillMode:(unsigned long long)arg1 ;
-(void)setVisibilityResultMode:(unsigned long long)arg1 offset:(unsigned long long)arg2 ;
-(void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8 ;
-(void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3 ;
-(void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned long long)arg6 ;
-(void)addSplitHandler:(/*^block*/id)arg1 ;
@end
