//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARDictionaryCoding-Protocol.h>
#import <ARKit/ARSensorData-Protocol.h>
#import <ARKit/NSCopying-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class ARFaceData, AVDepthData, MISSING_TYPE, NSDate, NSString;

@interface ARImageData : NSObject <ARDictionaryCoding, ARSensorData, NSCopying, NSSecureCoding>
{
    _Bool _mirrored;
    float _exposureTargetOffset;
    float _temperature;
    double _timestamp;
    NSDate *_captureDate;
    double _currentCaptureTimestamp;
    struct __CVBuffer *_pixelBuffer;
    unsigned long long _lensType;
    double _exposureDuration;
    ARFaceData *_faceData;
    AVDepthData *_depthData;
    double _depthDataTimestamp;
    struct __CVBuffer *_visionData;
    long long _cameraPosition;
    long long _captureFramesPerSecond;
    struct CGSize _imageResolution;
    MISSING_TYPE *_tangentialDistortion;
    MISSING_TYPE *_radialDistortion;
    CDStruct_8e0628e6 _cameraIntrinsics;
}

+ (_Bool)supportsSecureCoding;
+ (id)captureDateFromPresentationTimestamp:(CDStruct_1b6d18a9)arg1 session:(id)arg2;
@property(nonatomic) long long captureFramesPerSecond; // @synthesize captureFramesPerSecond=_captureFramesPerSecond;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(nonatomic) struct __CVBuffer *visionData; // @synthesize visionData=_visionData;
@property(nonatomic) double depthDataTimestamp; // @synthesize depthDataTimestamp=_depthDataTimestamp;
@property(retain, nonatomic) AVDepthData *depthData; // @synthesize depthData=_depthData;
@property(retain, nonatomic) ARFaceData *faceData; // @synthesize faceData=_faceData;
@property(nonatomic) float temperature; // @synthesize temperature=_temperature;
@property(nonatomic) float exposureTargetOffset; // @synthesize exposureTargetOffset=_exposureTargetOffset;
@property(nonatomic) double exposureDuration; // @synthesize exposureDuration=_exposureDuration;
@property(nonatomic) MISSING_TYPE *tangentialDistortion; // @synthesize tangentialDistortion=_tangentialDistortion;
@property(nonatomic) MISSING_TYPE *radialDistortion; // @synthesize radialDistortion=_radialDistortion;
@property(nonatomic) unsigned long long lensType; // @synthesize lensType=_lensType;
@property(nonatomic) struct CGSize imageResolution; // @synthesize imageResolution=_imageResolution;
@property(nonatomic, getter=isMirrored) _Bool mirrored; // @synthesize mirrored=_mirrored;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(nonatomic) CDStruct_8e0628e6 cameraIntrinsics; // @synthesize cameraIntrinsics=_cameraIntrinsics;
@property(nonatomic) double currentCaptureTimestamp; // @synthesize currentCaptureTimestamp=_currentCaptureTimestamp;
@property(copy, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)encodeToDictionary;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) ARImageData *originalImage;
- (void)dealloc;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 captureFramePerSecond:(long long)arg2 captureDevice:(id)arg3 captureSession:(id)arg4;
- (id)initWithImageData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
