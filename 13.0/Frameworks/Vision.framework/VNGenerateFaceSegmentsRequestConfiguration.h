//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequestConfiguration.h>

__attribute__((visibility("hidden")))
@interface VNGenerateFaceSegmentsRequestConfiguration : VNImageBasedRequestConfiguration
{
    float _faceBoundingBoxExpansionRatio;
}

+ (_Bool)expansionRatioWithinValidRange:(float)arg1;
+ (float)defaultFaceBoundingBoxExpansionRatio;
+ (float)endRangeFaceBoundingBoxExpansionRatio;
+ (float)beginRangeFaceBoundingBoxExpansionRatio;
@property(nonatomic) float faceBoundingBoxExpansionRatio;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
