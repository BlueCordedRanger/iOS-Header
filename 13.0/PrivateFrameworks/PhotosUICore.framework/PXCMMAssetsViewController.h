//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCMMComponentViewController.h>

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXAssetsSceneDelegate-Protocol.h>
#import <PhotosUICore/PXCMMBannerTileControllerDelegate-Protocol.h>
#import <PhotosUICore/PXCMMEngineDrivenLayoutDelegate-Protocol.h>
#import <PhotosUICore/PXCMMFooterViewModelActionDelegate-Protocol.h>
#import <PhotosUICore/PXCMMProgressBannerViewLayoutDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXContextualNotificationDelegate-Protocol.h>
#import <PhotosUICore/PXOneUpPresentationDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosGlobalFooterViewDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXSwipeSelectionManagerDelegate-Protocol.h>
#import <PhotosUICore/PXTileSource-Protocol.h>

@class NSArray, NSMutableSet, NSSet, NSString, PXAssetReference, PXBasicTileAnimator, PXCMMBannerTileController, PXCMMFooterViewModel, PXCMMProgressBannerView, PXCMMSendBackBannerView, PXCMMSendBackSuggestionSource, PXCMMSpec, PXCMMSpecManager, PXContextualNotification, PXLayoutGenerator, PXMomentShareStatusPresentation, PXOneUpPresentation, PXPhotosGlobalFooterView, PXSectionedLayoutEngine, PXSwipeSelectionManager, PXTilingController, PXUIAssetsScene, PXUIScrollViewController, PXUITapGestureRecognizer, PXUpdater, UILongPressGestureRecognizer;
@protocol PXCMMAssetsViewControllerDelegate;

@interface PXCMMAssetsViewController : PXCMMComponentViewController <PXAssetsSceneDelegate, PXTileSource, PXCMMEngineDrivenLayoutDelegate, PXSwipeSelectionManagerDelegate, PXChangeObserver, PXOneUpPresentationDelegate, PXCMMBannerTileControllerDelegate, PXScrollViewControllerObserver, PXPhotosGlobalFooterViewDelegate, PXCMMFooterViewModelActionDelegate, PXContextualNotificationDelegate, PXActionPerformerDelegate, PXCMMProgressBannerViewLayoutDelegate>
{
    PXUpdater *_updater;
    PXLayoutGenerator *_layoutGenerator;
    PXSectionedLayoutEngine *_layoutEngine;
    _Bool _layoutAnimationsGloballyDisabled;
    PXUIScrollViewController *_scrollViewController;
    PXBasicTileAnimator *_tileAnimator;
    PXTilingController *_tilingController;
    PXUIAssetsScene *_sceneController;
    PXCMMProgressBannerView *_progressBannerView;
    NSArray *_progressBannerViewConstraints;
    PXUITapGestureRecognizer *_tapSelectionGesture;
    PXSwipeSelectionManager *_swipeSelectionManager;
    PXUITapGestureRecognizer *_layoutTransitionGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    PXAssetReference *_navigatedAssetReference;
    PXCMMSpecManager *_specManager;
    PXCMMSpec *_spec;
    PXMomentShareStatusPresentation *_momentShareStatusPresentationForFooter;
    PXCMMFooterViewModel *_statusFooterViewModel;
    PXPhotosGlobalFooterView *_measuringStatusFooterView;
    PXCMMBannerTileController *_measuringBannerTile;
    PXCMMSendBackBannerView *_measuringSendBackBannerView;
    PXMomentShareStatusPresentation *_momentShareStatusPresentationForPoster;
    NSMutableSet *_inUseTiles;
    struct CGSize _knownReferenceSize;
    _Bool _needsToPerformInitialSelection;
    PXCMMSendBackSuggestionSource *_sendBackSuggestionSource;
    PXContextualNotification *_sendBackNotification;
    _Bool _sendBackNotificationWasDiscarded;
    _Bool _sendBackNotificationWasTapped;
    _Bool _receivingActionButtonWasTapped;
    _Bool _didIncrementNumberOfPresentableSendBacks;
    _Bool _didIncrementNumberOfPresentedSendBacks;
    _Bool _isWaitingForSendBackPresentationConfirmationTimeout;
    unsigned long long _sendBackPresentationConfirmationGeneration;
    struct {
        _Bool shouldShowAddMoreButton;
        _Bool didTapAddMoreButton;
        _Bool oneUpPresentation;
    } _delegateRespondsTo;
    _Bool _actionInProgress;
    _Bool _userSelectionEnabled;
    id <PXCMMAssetsViewControllerDelegate> _delegate;
    long long __layoutType;
    NSSet *__hiddenAssetReferences;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) _Bool userSelectionEnabled; // @synthesize userSelectionEnabled=_userSelectionEnabled;
@property(retain, nonatomic) NSSet *_hiddenAssetReferences; // @synthesize _hiddenAssetReferences=__hiddenAssetReferences;
@property(nonatomic) long long _layoutType; // @synthesize _layoutType=__layoutType;
@property(nonatomic, getter=isActionInProgress) _Bool actionInProgress; // @synthesize actionInProgress=_actionInProgress;
@property(nonatomic) __weak id <PXCMMAssetsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)contextualNotificationDidDisappear:(id)arg1;
- (void)contextualNotificationDidAppear:(id)arg1;
- (void)contextualNotificationWasDiscarded:(id)arg1;
- (void)contextualNotificationWasTapped:(id)arg1;
- (id)preferredContainerViewForContextualNotification:(id)arg1;
- (struct CGRect)contextualNotification:(id)arg1 containingFrameInCoordinateSpace:(id)arg2;
- (void)didPerformDeletionActionForFooterViewModel:(id)arg1;
- (void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2;
- (void)didTapActionButtonInBannerTileController:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)progressBannerViewLayoutHeightDidChange:(id)arg1;
- (void)_updateProgressBannerViewConstraints;
- (void)_updateProgressBannerViewVisibility;
- (double)_progressBannerViewLayoutHeight;
- (_Bool)_shouldShowProgressBanner;
- (long long)engineDrivenLayout:(id)arg1 assetStatusAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (_Bool)engineDrivenLayout:(id)arg1 shouldShowStatusBadgeAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (_Bool)engineDrivenLayout:(id)arg1 shouldShowDimmingOverlayAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (struct CGRect)engineDrivenLayout:(id)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3;
- (double)engineDrivenLayout:(id)arg1 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (void)engineDrivenLayoutReferenceSizeDidChange:(id)arg1;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)_configureBannerTile:(id)arg1;
- (id)assetsScene:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2;
- (void)_preferredContentSizeChanged:(id)arg1;
- (void)_updateLayoutEngine;
- (void)_updateSendBackNotification;
- (void)presentSendBackNotification;
- (_Bool)_isSendBackBannerViewContentsFullyVisible;
- (_Bool)_isSendBackBannerViewContentsAtAllVisible;
- (_Bool)_canShowSendBackSuggestion;
- (double)_sendBackFooterHeightFromReferenceSize:(struct CGSize)arg1;
- (double)_statusFooterHeightFromReferenceSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2;
- (double)_bannerHeightFromReferenceSize:(struct CGSize)arg1;
- (double)_headerHeightFromReferenceSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2;
- (id)_createNewLayoutGeneratorWithReferenceSize:(struct CGSize)arg1;
- (void)_configureLayout:(id)arg1;
- (id)_createNewLayout;
- (void)_invalidateLayoutGenerator;
- (unsigned long long)_additionalTileCount;
- (void)_performTilingChangeWithoutAnimationTransition:(CDUnknownBlockType)arg1;
- (void)_setLayoutType:(long long)arg1;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationImportStatusManager:(id)arg1;
- (id)oneUpPresentationActionManagerForPreviewing:(id)arg1;
- (id)oneUpPresentationActionManager:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (long long)oneUpPresentationActionContext:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (_Bool)_shouldShowOneUpActions;
@property(readonly, nonatomic) PXOneUpPresentation *_oneUpPresentation;
- (void)_updateSelectionIfNeeded;
- (void)_updatePlaceholder;
- (void)_selectionModeDidChange;
- (void)addButtonTapped:(id)arg1;
- (void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1;
- (_Bool)swipeSelectionManagerIsInMultiSelectMode:(id)arg1;
- (_Bool)swipeSelectionManager:(id)arg1 shouldSelectItemAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(struct CGPoint)arg2;
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(struct CGPoint)arg2;
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(struct CGPoint)arg2;
- (_Bool)_isAssetAlreadyImportedAtIndexPath:(struct PXSimpleIndexPath)arg1 withEngineDrivenLayout:(id)arg2;
- (_Bool)_isAssetAlreadyImportedAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)_assetImportStateAtIndexPath:(struct PXSimpleIndexPath)arg1 withDataSource:(id)arg2;
- (struct PXSimpleIndexPath)_assetIndexPathAtLocation:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2 kind:(unsigned long long)arg3;
- (struct PXSimpleIndexPath)_assetIndexPathAtLocation:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2;
- (id)_assetReferenceAtPoint:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2;
- (void)_toggleAssetSelectionAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)_handleLongPress:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_transitionLayoutGesture:(id)arg1;
- (void)_updateGestures;
- (void)_updateStyle;
- (id)_indexPathsForAssetReferences:(id)arg1 inDataSource:(id)arg2;
- (void)_setHiddenAssetReferences:(id)arg1;
- (id)_createOverlayTileView;
- (id)_createStatusTileView;
- (id)_createSectionHeaderController;
- (id)_createAddButton;
- (id)_createBannerTileController;
- (id)_createSendBackFooter;
- (id)_createSendBackBannerView;
- (id)_createStatusFooter;
- (id)_createPosterTileController;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_invokeSendBackAction;
- (void)_checkSendBackPresentationStatus;
- (void)_handleSendBackPresentationConfirmationTimeoutForGeneration:(unsigned long long)arg1;
- (void)_didPresentSendBack;
- (void)_didFindPresentableSendBack;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)_scheduleLayout;
- (void)_deselectAllAssets;
- (void)_selectAllAssets;
- (_Bool)_areAllNotCopiedAssetsSelected;
- (void)_selectNonCopiedAssets;
- (void)_selectCuratedAssets;
- (void)_performInitialSelectionIfNeeded;
- (void)_updateSelectionEnabled;
- (void)_updateAssetsScene;
- (struct CGSize)_maximumThumbnailSize;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
