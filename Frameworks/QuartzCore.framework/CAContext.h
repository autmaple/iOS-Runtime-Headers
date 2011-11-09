/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class CALayer, NSDictionary;

@interface CAContext : NSObject  {
}

@property float level;
@property(readonly) NSDictionary * options;
@property(readonly) BOOL valid;
@property struct CGColorSpace { }* colorSpace;
@property(retain) CALayer * layer;
@property(readonly) unsigned int contextId;

+ (id)remoteContextWithOptions:(id)arg1;
+ (id)currentContext;
+ (id)objectForSlot:(unsigned int)arg1;
+ (id)localContext;
+ (id)remoteContext;
+ (id)localContextWithOptions:(id)arg1;
+ (void)setClientPort:(unsigned int)arg1;
+ (id)allContexts;

- (void)invalidate;
- (unsigned int)createSlot;
- (void)setObject:(id)arg1 forSlot:(unsigned int)arg2;
- (void)deleteSlot:(unsigned int)arg1;
- (unsigned int)createFencePort;
- (void)setFence:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)setFencePort:(unsigned int)arg1;
- (void)orderAbove:(unsigned int)arg1;
- (void)orderBelow:(unsigned int)arg1;

@end