//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARImageBasedTechnique.h>

@class ARImageDetectionResultData, ARODTHandleManager, ARWorldTrackingPoseData, NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARImageDetectionTechnique : ARImageBasedTechnique
{
    NSArray *_referenceImages;
    NSObject<OS_dispatch_queue> *_processDataQueue;
    NSObject<OS_dispatch_semaphore> *_loadingSemaphore;
    NSObject<OS_dispatch_semaphore> *_dataSemaphore;
    NSObject<OS_dispatch_semaphore> *_detectionSemaphore;
    ARImageDetectionResultData *_referenceImageData;
    _Bool _finishedLoadingImages;
    _Bool _tracking;
    _Bool _deterministicMode;
    struct shared_ptr<arkit::KeyMapBuffer<const void *, std::__1::vector<unsigned char, std::__1::allocator<unsigned char>>>> _poseBuffer;
    _Bool _needsWorldTrackingPoseData;
    _Bool _enableAutomaticImageScaleEstimation;
    ARWorldTrackingPoseData *_currentWorldTrackingPose;
    ARODTHandleManager *_odtTHandleManger;
    NSDictionary *_referenceImageMap;
}

@property(readonly) NSDictionary *referenceImageMap; // @synthesize referenceImageMap=_referenceImageMap;
@property(readonly) ARODTHandleManager *odtTHandleManger; // @synthesize odtTHandleManger=_odtTHandleManger;
@property(retain) ARWorldTrackingPoseData *currentWorldTrackingPose; // @synthesize currentWorldTrackingPose=_currentWorldTrackingPose;
@property(nonatomic) _Bool enableAutomaticImageScaleEstimation; // @synthesize enableAutomaticImageScaleEstimation=_enableAutomaticImageScaleEstimation;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateARPresentationMode:(long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)_loadReferenceImages;
@property(readonly, nonatomic) _Bool finishedLoadingImages;
- (_Bool)deterministicMode;
- (long long)captureBehavior;
- (double)requiredTimeInterval;
- (_Bool)syncWithProcessedImage;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithReferenceImages:(id)arg1 maximumNumberOfTrackedImages:(long long)arg2 continuousDetection:(_Bool)arg3 deterministicMode:(_Bool)arg4 processingQueue:(id)arg5;
- (id)initWithReferenceImages:(id)arg1 maximumNumberOfTrackedImages:(long long)arg2 processingQueue:(id)arg3;
- (id)initWithReferenceImages:(id)arg1 maximumNumberOfTrackedImages:(long long)arg2;
- (id)initWithReferenceImages:(id)arg1;

@end

