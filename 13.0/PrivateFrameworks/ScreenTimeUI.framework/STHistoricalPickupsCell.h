//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STTableCell.h>

@class NSLayoutConstraint, STHistoricalUsageViewController, STHorizontallySegmentedView, UILabel;

__attribute__((visibility("hidden")))
@interface STHistoricalPickupsCell : STTableCell
{
    STHistoricalUsageViewController *_historicalUsageViewController;
    STHorizontallySegmentedView *_pickupMetricsView;
    UILabel *_firstUsedAfterPickupLabel;
    NSLayoutConstraint *_bottomConstraint;
}

@property(retain) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(readonly) UILabel *firstUsedAfterPickupLabel; // @synthesize firstUsedAfterPickupLabel=_firstUsedAfterPickupLabel;
@property(readonly) STHorizontallySegmentedView *pickupMetricsView; // @synthesize pickupMetricsView=_pickupMetricsView;
@property(readonly) STHistoricalUsageViewController *historicalUsageViewController; // @synthesize historicalUsageViewController=_historicalUsageViewController;
- (void).cxx_destruct;
- (void)setValue:(id)arg1;
- (id)value;
- (void)_handleEffectiveChangeForViewMode:(long long)arg1 hasMultilineLayout:(_Bool)arg2 numberOfLines:(unsigned long long)arg3;
- (void)_numberOfLinesDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)_hasMulitlineLayoutDidChangeFrom:(_Bool)arg1 to:(_Bool)arg2;
- (void)_currentViewModeDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
