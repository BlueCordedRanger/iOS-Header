//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CarSmallWidgetCollectionView.h"

@class CarShortcutsProvider;

__attribute__((visibility("hidden")))
@interface CarSmallWidgetShortcutsView : CarSmallWidgetCollectionView
{
    CarShortcutsProvider *_shortcutsProvider;
}

- (void).cxx_destruct;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (id)modelForItemAtIndexPath:(id)arg1;
- (id)data;
- (void)refreshShortcuts;
- (id)initWithShortcutsProvider:(id)arg1;

@end
