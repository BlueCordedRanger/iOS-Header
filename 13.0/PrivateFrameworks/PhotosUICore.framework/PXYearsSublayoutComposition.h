//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGGeneratedSublayoutComposition.h>

@class PXYearsLayoutGenerator, PXYearsLayoutMetrics;

@interface PXYearsSublayoutComposition : PXGGeneratedSublayoutComposition
{
    PXYearsLayoutGenerator *_layoutGenerator;
    PXYearsLayoutMetrics *_metrics;
}

@property(copy, nonatomic) PXYearsLayoutMetrics *metrics; // @synthesize metrics=_metrics;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long presentedNumberOfColumns;
- (id)configuredLayoutGenerator;

@end

