/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIPDFPageView, UILongPressGestureRecognizer, UIPDFSelectionController, UITextEffectsWindow, UIMenuController, UIPDFViewMagnifyController, UITapGestureRecognizer;

@interface UIPDFViewTouchHandler : UIResponder <UIGestureRecognizerDelegate> {
    UIPDFPageView *_pdfPageView;
    UITapGestureRecognizer *_doubleTapRecognizer;
    UITapGestureRecognizer *_singleTapRecognizer;
    UILongPressGestureRecognizer *_briefPressRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UIMenuController *_menuController;
    UIPDFSelectionController *_selectionController;
    UIPDFViewMagnifyController *_magnifyController;
    BOOL _trackingSelection;
    BOOL _showMagnifier;
    BOOL _showLoupe;
    UITextEffectsWindow *_textEffectsWindow;
}


- (void)doubleTapRecognized:(id)arg1;
- (void)singleTapRecognized:(id)arg1;
- (void)briefPressRecognized:(id)arg1;
- (void)longPressRecognized:(id)arg1;
- (void)enableRecognizers;
- (void)disableRecognizers;
- (void)hideMenu;
- (void)showMenu;
- (void)selectAll:(id)arg1;
- (void)copy:(id)arg1;
- (id)initWithView:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)nextResponder;
- (void)dealloc;

@end
