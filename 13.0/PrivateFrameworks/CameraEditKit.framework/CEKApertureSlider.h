//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraEditKit/CEKDiscreteSlider.h>

#import <CameraEditKit/UIScrollViewDelegate-Protocol.h>

@class NSNumberFormatter, NSString;
@protocol CEKApertureSliderDelegate;

@interface CEKApertureSlider : CEKDiscreteSlider <UIScrollViewDelegate>
{
    id <CEKApertureSliderDelegate> _delegate;
    unsigned long long __minimumApertureIndex;
    unsigned long long __maximumApertureIndex;
    NSNumberFormatter *__decimalFormatter;
    NSNumberFormatter *__wholeNumberFormatter;
}

+ (_Bool)isValidApertureIndex:(unsigned long long)arg1;
+ (_Bool)isValidApertureIndexFullStop:(unsigned long long)arg1;
+ (unsigned long long)firstFullStopIndexAfterOrIncludingIndex:(unsigned long long)arg1;
+ (id)validApertureValues;
@property(readonly, nonatomic) NSNumberFormatter *_wholeNumberFormatter; // @synthesize _wholeNumberFormatter=__wholeNumberFormatter;
@property(readonly, nonatomic) NSNumberFormatter *_decimalFormatter; // @synthesize _decimalFormatter=__decimalFormatter;
@property(nonatomic, setter=_setMaximumApertureIndex:) unsigned long long _maximumApertureIndex; // @synthesize _maximumApertureIndex=__maximumApertureIndex;
@property(nonatomic, setter=_setMinimumApertureIndex:) unsigned long long _minimumApertureIndex; // @synthesize _minimumApertureIndex=__minimumApertureIndex;
@property(nonatomic) __weak id <CEKApertureSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)_indexOfClosestValidValueForAperture:(double)arg1;
- (unsigned long long)_discreteIndexForValidApertureIndex:(unsigned long long)arg1;
- (unsigned long long)_validApertureIndexForDiscreteIndex:(unsigned long long)arg1;
- (void)setMarkedApertureValueToNone;
- (void)setMarkedApertureValueClosestTo:(double)arg1;
@property(readonly, nonatomic) double markedApertureValue;
@property(readonly, nonatomic) double apertureValue;
@property(readonly, nonatomic) double maximumApertureValue;
@property(readonly, nonatomic) double minimumApertureValue;
- (void)setMinimumApertureValueClosestTo:(double)arg1 maximumApertureValueClosestTo:(double)arg2;
- (void)setApertureValueClosestTo:(double)arg1;
- (void)_updateMainTickMarkOffset;
- (id)valueText;
- (double)horizontalValueLabelOffset;
- (void)_handleDidChangeValue:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
