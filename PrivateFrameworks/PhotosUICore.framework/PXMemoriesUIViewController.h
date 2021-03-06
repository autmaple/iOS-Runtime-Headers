/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesUIViewController : UIViewController <PXActionPerformerDelegate, PXChangeObserver, PXMemoriesUITileSourceDelegate, PXScrollViewControllerObserver, PXSectionedDataSourceManagerObserver, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXTilingControllerZoomAnimationCoordinatorDelegate, PXUIViewControllerZoomTransitionEndPoint, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UIViewControllerPreviewingDelegate> {
    PXSectionedObjectReference * __actionPresentationMemoryReference;
    PXSectionedObjectReference * __activatedMemoryReference;
    PXMemoriesFeedViewControllerHelper * __helper;
    PXSectionedObjectReference * __highlightedMemoryReference;
    PXSectionedLayoutEngine * __layoutEngine;
    UILongPressGestureRecognizer * __longPressRecognizer;
    bool  __performNextTransitionWithoutAnimation;
    <UIViewControllerPreviewing> * __previewingItem;
    UIBarButtonItem * __searchBarButtonItem;
    PXMemoriesSpec * __spec;
    PXMemoriesSpecManager * __specManager;
    PXUITapGestureRecognizer * __tapRecognizer;
    PXBasicUIViewTileAnimator * __tileAnimator;
    PXMemoriesUITileSource * __tileSource;
    PXTilingController * __tilingController;
    PXTouchingUIGestureRecognizer * __touchRecognizer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorMemoryOrigin;
    PXSectionedObjectReference * _anchorMemoryReference;
    PXMemoriesDataSourceManager * _dataSourceManager;
    bool  _pendingInitialScrollToBottom;
    PXUIScrollViewController * _scrollViewController;
    struct { 
        bool layoutEngine; 
        bool layout; 
    }  _updateFlags;
}

@property (setter=_setActionPresentationMemoryReference:, nonatomic, retain) PXSectionedObjectReference *_actionPresentationMemoryReference;
@property (setter=_setActivatedMemoryReference:, nonatomic, retain) PXSectionedObjectReference *_activatedMemoryReference;
@property (nonatomic, readonly) PXMemoriesFeedViewControllerHelper *_helper;
@property (setter=_setHighlightedMemoryReference:, nonatomic, retain) PXSectionedObjectReference *_highlightedMemoryReference;
@property (nonatomic, readonly) PXSectionedLayoutEngine *_layoutEngine;
@property (setter=_setLongPressRecognizer:, nonatomic, retain) UILongPressGestureRecognizer *_longPressRecognizer;
@property (setter=_setPerformNextTransitionWithoutAnimation:, nonatomic) bool _performNextTransitionWithoutAnimation;
@property (setter=_setPreviewingItem:, nonatomic, retain) <UIViewControllerPreviewing> *_previewingItem;
@property (nonatomic, readonly) UIBarButtonItem *_searchBarButtonItem;
@property (setter=_setSpec:, nonatomic, retain) PXMemoriesSpec *_spec;
@property (nonatomic, readonly) PXMemoriesSpecManager *_specManager;
@property (nonatomic, readonly) PXUITapGestureRecognizer *_tapRecognizer;
@property (nonatomic, readonly) PXBasicUIViewTileAnimator *_tileAnimator;
@property (nonatomic, readonly) PXMemoriesUITileSource *_tileSource;
@property (nonatomic, readonly) PXTilingController *_tilingController;
@property (nonatomic, readonly) PXTouchingUIGestureRecognizer *_touchRecognizer;
@property (setter=_setAnchorMemoryOrigin:, nonatomic) struct CGPoint { double x1; double x2; } anchorMemoryOrigin;
@property (setter=_setAnchorMemoryReference:, nonatomic, retain) PXSectionedObjectReference *anchorMemoryReference;
@property (nonatomic, readonly) PXMemoriesDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool keepsSourceRegionOfInterestContent;
@property (nonatomic, readonly) PXUIScrollViewController *scrollViewController;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void).cxx_destruct;
- (id)_actionPresentationMemoryReference;
- (id)_activatedMemoryReference;
- (void)_configureLayout:(id)arg1;
- (id)_createNewLayout;
- (void)_handleScrollViewLongPress:(id)arg1;
- (void)_handleScrollViewTap:(id)arg1;
- (void)_handleTouch:(id)arg1;
- (id)_helper;
- (id)_highlightedMemoryReference;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })_indexPathForMemoryAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })_indexPathForMemoryInScrollViewAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_invalidateLayout;
- (void)_invalidateLayoutEngine;
- (id)_layoutEngine;
- (id)_longPressRecognizer;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })_memoryIndexPathForViewController:(id)arg1;
- (id)_memoryObjectReferenceForPhotosDetailsContext:(id)arg1;
- (bool)_needsUpdate;
- (bool)_performNextTransitionWithoutAnimation;
- (id)_photosDetailsContextForIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)_presentActionsForMemoryReference:(id)arg1;
- (id)_previewingItem;
- (void)_reconfigureTargetLayout;
- (void)_saveAnchor;
- (id)_searchBarButtonItem;
- (void)_searchBarButtonItemAction:(id)arg1;
- (void)_setActionPresentationMemoryReference:(id)arg1;
- (void)_setActivatedMemoryReference:(id)arg1;
- (void)_setAnchorMemoryOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setAnchorMemoryReference:(id)arg1;
- (void)_setHighlightedMemoryReference:(id)arg1;
- (void)_setLongPressRecognizer:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setPerformNextTransitionWithoutAnimation:(bool)arg1;
- (void)_setPreviewingItem:(id)arg1;
- (void)_setSpec:(id)arg1;
- (id)_sourceViewForMemoryActionsController;
- (id)_spec;
- (id)_specManager;
- (id)_tapRecognizer;
- (id)_tileAnimator;
- (id)_tileSource;
- (id)_tilingController;
- (id)_touchRecognizer;
- (void)_updateIfNeeded;
- (void)_updateLayoutEngineIfNeeded;
- (void)_updateLayoutIfNeeded;
- (void)_updateLongPressGestureRecognizer;
- (void)_updatePreviewing;
- (void)_updateScrollViewControllerContentInset;
- (bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject { Class x1; }*)arg2;
- (struct CGPoint { double x1; double x2; })anchorMemoryOrigin;
- (id)anchorMemoryReference;
- (id)dataSourceManager;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithDataSourceManager:(id)arg1;
- (id)memoriesTileSource:(id)arg1 memoryToPreheatForIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_endPointForTransition:(id)arg1;
- (id)regionOfInterestForTransition:(id)arg1;
- (id)scrollViewController;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (struct CGPoint { double x1; double x2; })tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (void)tilingController:(id)arg1 prepareForChange:(id)arg2;
- (struct CGPoint { double x1; double x2; })tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(struct CGPoint { double x1; double x2; })arg3;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(id /* block */)arg5;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)px_searchPresentation;

@end
