/* Generated by EzioChiu.
 */

@protocol PXMutableBrowserSummaryController <NSObject>

@required

- (NSDictionary *)defaultAttributes;
- (NSDictionary *)emphasizedAttributes;
- (void)invalidateContainerDateInterval;
- (void)invalidateContainerTitle;
- (void)invalidateFilteringContainerContent;
- (void)invalidateLocalizedContainerItemsCount;
- (void)invalidateSelection;
- (void)invalidateVisibleContent;
- (NSDictionary *)selectionAttributes;
- (void)setDefaultAttributes:(NSDictionary *)arg1;
- (void)setEmphasizedAttributes:(NSDictionary *)arg1;
- (void)setSelectionAttributes:(NSDictionary *)arg1;
- (void)setShouldUseNavigationTitle:(bool)arg1;
- (void)setShouldUseSubtitles:(bool)arg1;
- (bool)shouldUseNavigationTitle;
- (bool)shouldUseSubtitles;

@end
