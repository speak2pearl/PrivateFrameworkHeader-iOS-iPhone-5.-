/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDSlide;

@interface PBSlideObjAndMasterPair : NSObject  {
    PDSlide *mSlide;
    int mMasterId;
}

+ (id)createPair:(id)arg1 masterId:(int)arg2;

- (id)slide;
- (void)setSlide:(id)arg1 masterId:(int)arg2;
- (int)masterId;
- (void)dealloc;

@end
