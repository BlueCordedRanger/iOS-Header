//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIProSharpenEdges : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputFalloff;
    NSNumber *inputSharpness;
    NSNumber *inputEdgeScale;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_CISharpenCombineEdges;
- (id)_CIFindEdges;
- (id)_CIEdgesPrep;
- (id)_CIBlur4;
- (id)_CIBlur2;
- (id)_CIBlur1;
- (id)_CIConvertRGBtoY;

@end
