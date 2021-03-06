/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@interface IUAlbumsDataSource : IUMediaQueriesDataSource  {
}

+ (id)queryCollectionPropertiesToFetch;
+ (int)mediaEntityType;
+ (id)tabBarItemTitleKey;
+ (id)tabBarItemIconName;

- (unsigned int)requiredEntityCountForSections;
- (Class)cellConfigurationClassForEntity:(id)arg1;
- (id)viewControllerContextForIndex:(unsigned int)arg1;
- (BOOL)deleteRemovesEntireGroup;
- (BOOL)allowsDeletion;
- (SEL)libraryHasDisplayableEntitiesSelector;
- (id)viewControllerContextForMediaQuery:(id)arg1;

@end
