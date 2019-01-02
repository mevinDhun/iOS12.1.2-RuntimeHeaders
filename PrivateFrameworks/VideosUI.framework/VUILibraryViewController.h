/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryViewController : VUILibraryStackViewController <UICollectionViewDataSource, UIGestureRecognizerDelegate, VUILibraryPopoverDataSource, VUILibraryPopoverDelegate, VUILibraryShelfCollectionViewControllerDelegate, VUIMediaEntitiesFetchControllerDelegate, VUIMediaItemEntityTypesFetchControllerDelegate, VUIMediaLibraryFetchControllerQueueDelegate> {
    bool  _appliedNavigationItem;
    bool  _areLocalMediaItemsAvailable;
    VUILibraryBannerCollectionViewCell * _bannerViewSizingCell;
    VUIMediaLibrary * _currentHomeShareMediaLibrary;
    _VUILibrarySeeAllController * _currentSeeAllController;
    long long  _currentlySelectedPopoverCell;
    bool  _doesDeviceSupportHDR;
    bool  _hasMediaEntitiesFetchCompleted;
    bool  _hasMenuItemFetchCompleted;
    NSArray * _homeShares;
    bool  _isIpad;
    id  _isNetworkTypeChangedToken;
    bool  _lastNetworkReachableStatus;
    UIBarButtonItem * _libraryBarButton;
    NSArray * _menuCells;
    VUILibraryMenuItemViewCell * _menuItemSizingCell;
    NSArray * _menuMediaItemEntityTypes;
    VUIMetricsController * _metricsController;
    id  _networkReachabilityChangedToken;
    NSArray * _popoverDropdownCells;
    VUILibraryPopoverViewController * _popoverViewController;
    bool  _ppt_isLoaded;
    VUILibraryDownloadViewController * _presentedDownloadViewController;
    NSDictionary * _shelfTypeByFetchRequestIdentifier;
    VUILibraryMediaEntityShelvesViewModel * _shelvesViewModel;
    VUILibraryListPopoverViewCell * _sizingPopoverCell;
}

@property (nonatomic) bool appliedNavigationItem;
@property (nonatomic) bool areLocalMediaItemsAvailable;
@property (nonatomic, retain) VUILibraryBannerCollectionViewCell *bannerViewSizingCell;
@property (nonatomic, retain) VUIMediaLibrary *currentHomeShareMediaLibrary;
@property (nonatomic, retain) _VUILibrarySeeAllController *currentSeeAllController;
@property (nonatomic) long long currentlySelectedPopoverCell;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool doesDeviceSupportHDR;
@property (nonatomic) bool hasMediaEntitiesFetchCompleted;
@property (nonatomic) bool hasMenuItemFetchCompleted;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *homeShares;
@property (nonatomic) bool isIpad;
@property (nonatomic, retain) UIBarButtonItem *libraryBarButton;
@property (nonatomic, retain) NSArray *menuCells;
@property (nonatomic, retain) VUILibraryMenuItemViewCell *menuItemSizingCell;
@property (nonatomic, retain) NSArray *menuMediaItemEntityTypes;
@property (nonatomic, retain) VUIMetricsController *metricsController;
@property (nonatomic, retain) NSArray *popoverDropdownCells;
@property (nonatomic, retain) VUILibraryPopoverViewController *popoverViewController;
@property (nonatomic, retain) NSDictionary *shelfTypeByFetchRequestIdentifier;
@property (nonatomic, retain) VUILibraryMediaEntityShelvesViewModel *shelvesViewModel;
@property (nonatomic, retain) VUILibraryListPopoverViewCell *sizingPopoverCell;
@property (readonly) Class superclass;

+ (id)_localizedTitleForShelfType:(long long)arg1;
+ (id /* block */)shelfTypesSortComparator;

- (void).cxx_destruct;
- (void)_addMediaLibraryNotificationObservers;
- (void)_addNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_configureShelfViewController:(id)arg1 withShelfType:(long long)arg2;
- (void)_constructLibraryDataSourceAndUpdateActiveView;
- (id)_deviceMediaLibrary;
- (void)_deviceMediaLibraryUpdateStateDidChange:(id)arg1;
- (id)_fetchRequestsWithMediaLibrary:(id)arg1 shelfTypeMap:(id*)arg2;
- (void)_handleApplicationBecomingActive:(id)arg1;
- (bool)_haveAllInitialFetchesCompleted;
- (void)_homeShareMediaLibrariesDidChange:(id)arg1;
- (bool)_isDeviceMediaLibraryInitialUpdateInProgress;
- (bool)_isNetworkReachable;
- (id)_leftNavigationButtonWithTitle:(id)arg1;
- (void)_libraryPopoverPressed;
- (id)_localizedTitleForCellType:(long long)arg1;
- (id)_menuItemsAndPopoverMenuItems:(id*)arg1;
- (void)_networkStatusChanged;
- (id)_popoverTitleForIndexPath:(id)arg1;
- (void)_reloadPopoverViewController;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_reparentNavigationItem:(id)arg1;
- (void)_selectLibraryCellType:(long long)arg1 fromPopover:(bool)arg2;
- (bool)_shouldAutomaticallySelectHomeVideos;
- (bool)_shouldShowContentView;
- (void)_showContentOrNoContentView;
- (void)_showHomeVideosIfNoRecentlyAddedContent;
- (void)_startFetchControllers;
- (void)_startMonitoringDeviceMediaLibraryInitialUpdate;
- (void)_stopMonitoringDeviceMediaLibraryInitialUpdate;
- (void)_updateNavigationTitle;
- (void)_updatePopoverSelectedItem;
- (void)_updatePopoverStateWithCellType:(long long)arg1;
- (void)_updateViewIfFetchComplete;
- (id)_viewControllerWithCellType:(long long)arg1 forPopover:(bool)arg2;
- (bool)appliedNavigationItem;
- (bool)areLocalMediaItemsAvailable;
- (id)bannerViewSizingCell;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configureWithCollectionView:(id)arg1;
- (void)controller:(id)arg1 fetchDidCompleteWithResult:(id)arg2;
- (void)controller:(id)arg1 fetchDidFailWithError:(id)arg2;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (id)currentHomeShareMediaLibrary;
- (id)currentSeeAllController;
- (long long)currentlySelectedPopoverCell;
- (void)dealloc;
- (bool)doesDeviceSupportHDR;
- (void)fetchDidCompleteForMediaLibraryFetchControllerQueue:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasMediaEntitiesFetchCompleted;
- (bool)hasMenuItemFetchCompleted;
- (id)homeShares;
- (id)initWithMediaLibrary:(id)arg1;
- (bool)isIpad;
- (id)libraryBarButton;
- (void)loadView;
- (id)menuCells;
- (id)menuItemSizingCell;
- (id)menuMediaItemEntityTypes;
- (id)metricsController;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)numberOfSectionsInPopoverView:(id)arg1;
- (id)popoverDropdownCells;
- (id)popoverView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)popoverView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)popoverView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize { double x1; double x2; })popoverView:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (id)popoverViewController;
- (bool)ppt_isLoading;
- (void)seeAllButtonPressed:(id)arg1;
- (void)setAppliedNavigationItem:(bool)arg1;
- (void)setAreLocalMediaItemsAvailable:(bool)arg1;
- (void)setBannerViewSizingCell:(id)arg1;
- (void)setCurrentHomeShareMediaLibrary:(id)arg1;
- (void)setCurrentSeeAllController:(id)arg1;
- (void)setCurrentlySelectedPopoverCell:(long long)arg1;
- (void)setDoesDeviceSupportHDR:(bool)arg1;
- (void)setHasMediaEntitiesFetchCompleted:(bool)arg1;
- (void)setHasMenuItemFetchCompleted:(bool)arg1;
- (void)setHomeShares:(id)arg1;
- (void)setIsIpad:(bool)arg1;
- (void)setLibraryBarButton:(id)arg1;
- (void)setMenuCells:(id)arg1;
- (void)setMenuItemSizingCell:(id)arg1;
- (void)setMenuMediaItemEntityTypes:(id)arg1;
- (void)setMetricsController:(id)arg1;
- (void)setPopoverDropdownCells:(id)arg1;
- (void)setPopoverViewController:(id)arg1;
- (void)setShelfTypeByFetchRequestIdentifier:(id)arg1;
- (void)setShelvesViewModel:(id)arg1;
- (void)setSizingPopoverCell:(id)arg1;
- (void)shelfCollectionViewController:(id)arg1 collectionView:(id)arg2 didSelectMediaEntity:(id)arg3 atIndexPath:(id)arg4;
- (id)shelfTypeByFetchRequestIdentifier;
- (id)shelvesViewModel;
- (id)sizingPopoverCell;
- (void)start;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end