//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKRichComplicationDialView, NTKWorldClockRichComplicationHandsView, UILabel, WorldClockCity;

@interface NTKWorldClockRichComplicationCircularView : NTKRichComplicationCircularBaseView
{
    struct {
        double cityNameFontSize;
        double cityNameBaselineOffsetNorthSide;
        double cityNameBaselineOffsetSouthSide;
        double dialDiameter;
        struct CGSize majorTickSize;
        struct CGSize minorTickSize;
    } _constants;
    NTKRichComplicationDialView *_dialView;
    UILabel *_cityNameLabel;
    NTKWorldClockRichComplicationHandsView *_handsView;
    WorldClockCity *_city;
    struct NSNumber *_clockTimerToken;
    _Bool _positionLabelNorthSide;
}

- (void).cxx_destruct;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (_Bool)_shouldUseDaytimeColoring;
- (void)_updateUI;
- (void)_stopClockUpdates;
- (void)_startClockUpdates;
- (_Bool)_shouldAnimateWithTemplateUpdateReason:(long long)arg1;
- (void)_applyPausedUpdate;
- (void)setPaused:(_Bool)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end
