//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISplitViewController.h>

#import "DOCAppearanceProtocol-Protocol.h"
#import "DOCFullDocumentManagerViewControllerDelegate-Protocol.h"
#import "DOCSourceViewControllerDelegate-Protocol.h"
#import "UISplitViewControllerDelegate-Protocol.h"

@class DOCConfiguration, DOCFullDocumentManagerViewController, DOCSourceViewController, DOCSplitOverlayView, NSString;
@protocol DOCSplitViewControllerDelegate;

@interface DOCSplitBrowserViewController : UISplitViewController <DOCSourceViewControllerDelegate, UISplitViewControllerDelegate, DOCFullDocumentManagerViewControllerDelegate, DOCAppearanceProtocol>
{
    DOCConfiguration *_originalConfiguration;
    DOCSplitOverlayView *_sourcesOverlay;
    DOCSplitOverlayView *_browserOverlay;
    _Bool _didFinishInitialItemAndThumbnailLoading;
    id <DOCSplitViewControllerDelegate> _splitViewDelegate;
    DOCSourceViewController *_sourceViewController;
    DOCFullDocumentManagerViewController *_fullDocumentManagerViewController;
}

@property(readonly) DOCFullDocumentManagerViewController *fullDocumentManagerViewController; // @synthesize fullDocumentManagerViewController=_fullDocumentManagerViewController;
@property(readonly) DOCSourceViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property __weak id <DOCSplitViewControllerDelegate> splitViewDelegate; // @synthesize splitViewDelegate=_splitViewDelegate;
- (void).cxx_destruct;
- (void)documentManagerDidFinishGatheringItemsAndThumbnails:(id)arg1;
- (void)sourceViewController:(id)arg1 didPickItem:(id)arg2;
- (void)sourceViewController:(id)arg1 didSelectLocation:(id)arg2;
- (void)dismissSourceViewControllerIfNeeded;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (_Bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (id)primaryViewControllerForExpandingSplitViewController:(id)arg1;
- (id)primaryViewControllerForCollapsingSplitViewController:(id)arg1;
- (void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;
- (void)updateAppearance:(id)arg1;
- (_Bool)isShowingCollapsedSourceViewController;
- (_Bool)sourceViewControllerIsCollapsed:(id)arg1;
- (void)hideLocationsViewController;
- (void)showLocationsViewController;
- (void)updateTraitCollectionForFullDocumentManagerViewControllerIfNeededWithCollection:(id)arg1;
- (void)updateTraitCollectionForFullDocumentManagerViewControllerIfNeeded;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_swipeToCloseSidebarGestureRecognizer;
- (id)_tapToCloseSidebarGestureRecognizer;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

