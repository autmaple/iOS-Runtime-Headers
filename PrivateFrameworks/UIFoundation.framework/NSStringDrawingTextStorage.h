/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSConcreteNotifyingMutableAttributedString, NSDictionary, NSLayoutManager, NSTextContainer;

@interface NSStringDrawingTextStorage : NSTextStorage <NSLayoutManagerDelegate> {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct { 
        unsigned int _typesetterBehavior : 4; 
        unsigned int _needToFlushCache : 1; 
        unsigned int _baselineMode : 1; 
        unsigned int _truncatesLastVisibleLine : 1; 
        unsigned int _forceWordWrapping : 1; 
        unsigned int _reserved : 24; 
    float _baselineDelta;
    id _cache;
    NSConcreteNotifyingMutableAttributedString *_contents;
    } _currentCharacterRange;
    } _currentGlyphRange;
    NSTextContainer *_firstTextContainer;
    NSLayoutManager *_layoutManager;
    id _preliminaryCache;
    unsigned int _retainCount;
    } _sdflags;
    NSTextContainer *_secondTextContainer;
    NSDictionary *_styledTextOptions;
    } _temporaryCharacterRange;
    NSTextContainer *_textContainer;
}

+ (BOOL)_fastDrawString:(id)arg1 attributes:(id)arg2 length:(long)arg3 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 graphicsContext:(struct CGContext { }*)arg5 baselineRendering:(BOOL)arg6 usesFontLeading:(BOOL)arg7 usesScreenFont:(BOOL)arg8 typesetterBehavior:(int)arg9 paragraphStyle:(id)arg10 lineBreakMode:(int)arg11 boundingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg12 padding:(float)arg13 scrollable:(bool)arg14 baselineOffset:(float*)arg15;
+ (void)_setHasCustomSettings:(BOOL)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)stringDrawingTextStorage;

- (float)_baselineDelta;
- (BOOL)_baselineMode;
- (BOOL)_fastDrawGlyphs:(unsigned short*)arg1 advances:(struct CGSize { float x1; float x2; }*)arg2 length:(unsigned int)arg3 font:(id)arg4 color:(id)arg5 containerSize:(struct CGSize { float x1; float x2; })arg6 usedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg7 startingLocation:(struct CGPoint { float x1; float x2; })arg8 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg9 onView:(id)arg10 context:(struct CGContext { }*)arg11 pinToTop:(BOOL)arg12;
- (BOOL)_forceWordWrapping;
- (BOOL)_informationForFont:(id)arg1 glyphTable:(unsigned short**)arg2 positionTable:(float**)arg3;
- (BOOL)_isDeallocating;
- (BOOL)_isStringDrawingTextStorage;
- (void)_setBaselineDelta:(float)arg1;
- (void)_setBaselineMode:(BOOL)arg1;
- (void)_setForceWordWrapping:(BOOL)arg1;
- (void)_setStyledTextOptions:(id)arg1;
- (void)_setTruncatesLastLine:(BOOL)arg1;
- (id)_styledTextOptions;
- (BOOL)_truncatesLastLine;
- (BOOL)_tryRetain;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (id)attributesAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (void)dealloc;
- (struct CGPoint { float x1; float x2; })defaultTextContainerOriginForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawTextContainer:(id)arg1 withRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 graphicsContext:(struct CGContext { }*)arg3 baselineMode:(BOOL)arg4 scrollable:(BOOL)arg5 padding:(float)arg6;
- (BOOL)fastDrawAttributedString:(id)arg1 containerSize:(struct CGSize { float x1; float x2; })arg2 padding:(float)arg3 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 onView:(id)arg5 pinToTop:(BOOL)arg6 sizeOnly:(BOOL)arg7 size:(struct CGSize { float x1; float x2; }*)arg8;
- (BOOL)fastDrawString:(id)arg1 attributes:(id)arg2 containerSize:(struct CGSize { float x1; float x2; })arg3 padding:(float)arg4 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 onView:(id)arg6 pinToTop:(BOOL)arg7 sizeOnly:(BOOL)arg8 size:(struct CGSize { float x1; float x2; }*)arg9;
- (id)flippedView;
- (void)fontSetChanged;
- (id)init;
- (void)invalidate;
- (id)layoutManager;
- (unsigned int)length;
- (void)processEditing;
- (oneway void)release;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withString:(id)arg2;
- (id)retain;
- (unsigned int)retainCount;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)string;
- (id)textContainer;
- (id)textContainerForAttributedString:(id)arg1 containerSize:(struct CGSize { float x1; float x2; })arg2 lineFragmentPadding:(float)arg3;
- (id)textContainerForAttributedString:(id)arg1;
- (int)typesetterBehavior;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })usedRectForTextContainer:(id)arg1;

@end