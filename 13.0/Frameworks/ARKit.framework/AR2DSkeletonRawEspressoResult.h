//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARResultData-Protocol.h>

@class ARImageData, NSString;

@interface AR2DSkeletonRawEspressoResult : NSObject <ARResultData>
{
    void *_outputTensors;
    unsigned long long _numberOfOutputTensors;
    ARImageData *_imageDataForNeuralNetwork;
    ARImageData *_inputImageData;
    long long _rotationNeeded;
    struct CGSize _regionOfInterest;
}

@property(nonatomic) struct CGSize regionOfInterest; // @synthesize regionOfInterest=_regionOfInterest;
@property(nonatomic) long long rotationNeeded; // @synthesize rotationNeeded=_rotationNeeded;
@property(retain, nonatomic) ARImageData *inputImageData; // @synthesize inputImageData=_inputImageData;
@property(retain, nonatomic) ARImageData *imageDataForNeuralNetwork; // @synthesize imageDataForNeuralNetwork=_imageDataForNeuralNetwork;
@property(nonatomic) unsigned long long numberOfOutputTensors; // @synthesize numberOfOutputTensors=_numberOfOutputTensors;
@property(nonatomic) void *outputTensors; // @synthesize outputTensors=_outputTensors;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

