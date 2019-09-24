//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKBarSeries.h>

@interface HKHistogramBarSeries : HKBarSeries
{
    unsigned long long _numberOfColumns;
}

@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
- (double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(struct CGRect)arg2 minimumSpacing:(double)arg3;
- (id)initWithFillStyle:(id)arg1 numberOfColumns:(unsigned long long)arg2 cornerRadii:(struct CGSize)arg3;

@end
