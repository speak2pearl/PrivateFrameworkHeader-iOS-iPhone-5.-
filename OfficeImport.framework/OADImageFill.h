/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADBlipRef, OADImageFillTechnique, OADRelativeRect;

@interface OADImageFill : OADFill  {
    OADBlipRef *mBlipRef;
    BOOL mIsBlipRefOverridden;
    OADRelativeRect *mSourceRect;
    BOOL mIsSourceRectOverridden;
    int mDpi;
    BOOL mIsDpiOverridden;
    BOOL mRotateWithShape;
    BOOL mIsRotateWithShapeOverridden;
    OADImageFillTechnique *mTechnique;
    BOOL mIsTechniqueOverridden;
}

+ (id)defaultProperties;

- (void)setRotateWithShape:(BOOL)arg1;
- (BOOL)isRotateWithShapeOverridden;
- (BOOL)rotateWithShape;
- (void)setSourceRect:(id)arg1;
- (void)setDpi:(long)arg1;
- (BOOL)isBlipRefOverridden;
- (BOOL)isSourceRectOverridden;
- (BOOL)isDpiOverridden;
- (BOOL)isTechniqueOverridden;
- (id)sourceRect;
- (long)dpi;
- (void)setStyleColor:(id)arg1;
- (void)setBlipRef:(id)arg1;
- (void)setTechnique:(id)arg1;
- (id)technique;
- (id)blipRef;
- (void)setParent:(id)arg1;
- (id)initWithDefaults;
- (id)color;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
