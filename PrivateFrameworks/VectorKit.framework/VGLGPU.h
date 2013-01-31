/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSSet, EAGLContext, EAGLSharegroup;

@interface VGLGPU : NSObject  {
    EAGLContext *_mainEAGLContext;
    NSSet *_extensionNames;
    BOOL _paused;
    int _maxTextureSize;
    int _maxDepthBufferPlanes;
    int _maxStencilBufferPlanes;
    int _maxVertexAttributes;
    int _maxUniformVertexVectors;
    int _maxUniformFragmentVectors;
    int _maxVaryingVectors;
    int _maxVertShaderTextureUnits;
    int _maxFragShaderTextureUnits;
    int _maxSamples;
}

@property(readonly) EAGLSharegroup * sharegroup;
@property BOOL paused;
@property(readonly) int maxTextureSize;
@property(readonly) int maxDepthBufferPlanes;
@property(readonly) int maxStencilBufferPlanes;
@property(readonly) int maxVertexAttributes;
@property(readonly) int maxUniformVertexVectors;
@property(readonly) int maxUniformFragmentVectors;
@property(readonly) int maxVaryingVectors;
@property(readonly) int maxVertShaderTextureUnits;
@property(readonly) int maxFragShaderTextureUnits;
@property(readonly) int maxSamples;
@property(readonly) NSSet * extensionNames;

+ (id)sharedInstance;

- (int)maxTextureSize;
- (id)extensionNames;
- (int)maxSamples;
- (int)maxFragShaderTextureUnits;
- (int)maxVertShaderTextureUnits;
- (int)maxVaryingVectors;
- (int)maxUniformFragmentVectors;
- (int)maxUniformVertexVectors;
- (int)maxVertexAttributes;
- (int)maxStencilBufferPlanes;
- (int)maxDepthBufferPlanes;
- (BOOL)platformSupports:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)paused;
- (void)setPaused:(BOOL)arg1;
- (id)sharegroup;

@end