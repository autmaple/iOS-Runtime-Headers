/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

@interface OSDDataAnalysis : NSObject  {
}

+ (id)sharedInstance;
+ (void)initialize;

- (id)init;
- (double)stdev:(double*)arg1 size:(unsigned int)arg2;
- (double)interpolate:(double)arg1 vx:(double*)arg2 vy:(double*)arg3 size:(unsigned int)arg4;
- (double)variance:(double*)arg1 size:(unsigned int)arg2;
- (double)average:(double*)arg1 size:(unsigned int)arg2;

@end