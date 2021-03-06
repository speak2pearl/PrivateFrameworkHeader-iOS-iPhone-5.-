/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UIButton, UIImage;

@interface IUAlbumTrackListAggregateViewConfiguration : IUMediaListAggregateViewConfiguration  {
    UIImage *_artworkImage;
    UIButton *_shuffleButton;
}


- (Class)viewClass;
- (unsigned int)numberOfButtons;
- (id)backgroundImage;
- (void)_shuffleButtonClickedUp:(id)arg1;
- (void)_shuffleButtonClickDelayed:(id)arg1;
- (void)simpleCellPresetButton:(id)arg1 clicked:(int)arg2;
- (id)_findAggregateView:(id)arg1;
- (id)_shuffleButton;
- (id)_songAndDurationString;
- (id)_copyrightInfoString;
- (id)_releaseDateString;
- (id)_albumString;
- (id)_albumArtistString;
- (id)artworkImageWithLoadingCompletionHandler:(id)arg1;
- (id)viewForButtonAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForButtonAtIndex:(unsigned int)arg1;
- (float)minFontPointSizeForLabelAtIndex:(unsigned int)arg1;
- (BOOL)canDisplayShuffleButton;
- (void)reloadDisplayValues;
- (void)initStorage;
- (void)dealloc;
- (void)reloadLayoutInformation;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfLabels;

@end
